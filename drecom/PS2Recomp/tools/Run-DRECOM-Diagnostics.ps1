# DRECOM Trial native Windows runner diagnostic launcher.
# Runs entirely on the user's PC. Does not upload proprietary disc content.
[CmdletBinding()]
param(
    [string]$GuestElf = "",
    [string]$ExtractedRoot = ""
)

$ErrorActionPreference = "Stop"
$runner = Join-Path $PSScriptRoot "ps2EntryRunner.exe"
if (-not (Test-Path -LiteralPath $runner -PathType Leaf)) {
    throw "ps2EntryRunner.exe is missing beside this script. Extract the entire GitHub Actions artifact."
}

# The ELF is not distributed with the build. Read SYSTEM.CNF from the
# operator's own extracted disc if the standard local project path exists.
if ([string]::IsNullOrWhiteSpace($ExtractedRoot)) {
    if (-not [string]::IsNullOrWhiteSpace($env:DRECOM_EXTRACTED_DIR)) {
        $ExtractedRoot = $env:DRECOM_EXTRACTED_DIR
    } else {
        $candidate = "C:\PS2Projects\drecom\Game\Extracted"
        if (Test-Path -LiteralPath $candidate -PathType Container) {
            $ExtractedRoot = $candidate
        }
    }
}

if ([string]::IsNullOrWhiteSpace($GuestElf) -and
    -not [string]::IsNullOrWhiteSpace($ExtractedRoot)) {
    $cnf = Join-Path $ExtractedRoot "SYSTEM.CNF"
    if (Test-Path -LiteralPath $cnf -PathType Leaf) {
        foreach ($line in (Get-Content -LiteralPath $cnf)) {
            if ($line -match '^\s*BOOT2?\s*=\s*cdrom0:\\([^;]+)') {
                $relativeElf = $Matches[1].Replace('\', [IO.Path]::DirectorySeparatorChar)
                $candidateElf = Join-Path $ExtractedRoot $relativeElf
                if (Test-Path -LiteralPath $candidateElf -PathType Leaf) {
                    $GuestElf = $candidateElf
                }
                break
            }
        }
    }
}

if ([string]::IsNullOrWhiteSpace($GuestElf)) {
    Write-Host "Enter the full path to the original Trial ELF (it stays on this PC)." -ForegroundColor Cyan
    $GuestElf = Read-Host "Guest ELF path"
}
$GuestElf = $GuestElf.Trim().Trim('"')
if (-not (Test-Path -LiteralPath $GuestElf -PathType Leaf)) {
    throw "Guest ELF not found: $GuestElf"
}
$GuestElf = (Resolve-Path -LiteralPath $GuestElf).Path

if ([string]::IsNullOrWhiteSpace($ExtractedRoot)) {
    $ExtractedRoot = Split-Path -Parent $GuestElf
}
$ExtractedRoot = $ExtractedRoot.Trim().Trim('"')
if (-not (Test-Path -LiteralPath $ExtractedRoot -PathType Container)) {
    throw "Extracted disc root not found: $ExtractedRoot"
}
$ExtractedRoot = (Resolve-Path -LiteralPath $ExtractedRoot).Path

# The runner finds modules under DATA/MODULES. Warn early if the
# supplied directory is the wrong level in the extraction.
$irx = Join-Path $ExtractedRoot "DATA\MODULES\MODHSYN.IRX"
if (-not (Test-Path -LiteralPath $irx -PathType Leaf)) {
    throw "MODHSYN.IRX missing at $irx. Select the extracted disc root."
}

$env:DRECOM_EXTRACTED_DIR = $ExtractedRoot
$env:DRECOM_GS_TRACE = "1"
$log = Join-Path $PSScriptRoot ("drecom-gs-{0}.log" -f (Get-Date -Format "yyyyMMdd-HHmmss"))

Write-Host "DRECOM GS diagnostic mode enabled." -ForegroundColor Cyan
Write-Host "Guest ELF: $GuestElf"
Write-Host "Extracted root: $ExtractedRoot"
Write-Host "Log: $log"
Write-Host "Close the game window or press Ctrl+C to stop."
Write-Host "Only important diagnostics will appear here; full runtime output is saved locally."
Write-Host "Watch [DRECOM-GS] frameChanges120, vramChanged and changedVramPages8K."
Write-Host "The last GS samples will be summarized when the runner exits."
Write-Host ""

# Don't flood PowerShell with per-tick rendering messages. Preserve the
# complete output in a local file, but display only actionable diagnostics.
# Stderr may be wrapped in PowerShell error records; convert to text when
# deciding whether it is useful to show on screen.
$ErrorActionPreference = "Continue"
try {
    & $runner $GuestElf 2>&1 |
        Tee-Object -FilePath $log |
        ForEach-Object {
            $line = [string]$_
            if ($line -match '\[(DRECOM-GS|CDVD|main|terminate)\]|fatal|exception') {
                Write-Host $line
            }
        }
} finally {
    Write-Host ""
    Write-Host "Diagnostic log (local only): $log" -ForegroundColor Cyan
    if (Test-Path -LiteralPath $log -PathType Leaf) {
        # The full log stays private on this PC. Show just the latest GS
        # samples so a scrolling runtime trace cannot hide the diagnosis.
        $samples = @(Select-String -LiteralPath $log -Pattern '\[DRECOM-GS\]' |
            Select-Object -Last 4)
        if ($samples.Count -eq 0) {
            Write-Warning "No [DRECOM-GS] samples captured. Confirm the latest Windows runner was downloaded."
        } else {
            Write-Host "Last GS samples (share only these lines for diagnosis):" -ForegroundColor Cyan
            foreach ($sample in $samples) {
                Write-Host $sample.Line
            }
            Write-Host "frameChanges120=0 with vramChanged=1 means GS VRAM changed but the displayed frame did not."
            Write-Host "changedVramPages8K counts changed physical pages (not PS2 display-frame numbers)."
            Write-Host "frameChanges120=0 with vramChanged=0 means no sampled VRAM or display change; inspect the guest PC and DMA."
        }
    }
}
