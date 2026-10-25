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
Write-Host "Look for [DRECOM-GS] frameChanges120 and registerChanges120."
Write-Host ""

# Keep ordinary runtime output visible while saving a durable trace.
# PowerShell can render stderr as error records; keep the pipeline running.
$ErrorActionPreference = "Continue"
try {
    & $runner $GuestElf 2>&1 | Tee-Object -FilePath $log
} finally {
    Write-Host ""
    Write-Host "Diagnostic log (local only): $log" -ForegroundColor Cyan
}
