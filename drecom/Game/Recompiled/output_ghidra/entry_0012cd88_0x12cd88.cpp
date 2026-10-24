#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0012cd88
// Address: 0x12cd88 - 0x12ced4
void entry_0012cd88_0x12cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd88_0x12cd88");
#endif

    switch (ctx->pc) {
        case 0x12cd98u: goto label_12cd98;
        case 0x12cdbcu: goto label_12cdbc;
        case 0x12cddcu: goto label_12cddc;
        case 0x12cdf0u: goto label_12cdf0;
        case 0x12ce04u: goto label_12ce04;
        case 0x12ce14u: goto label_12ce14;
        case 0x12ce2cu: goto label_12ce2c;
        case 0x12ce60u: goto label_12ce60;
        case 0x12ce88u: goto label_12ce88;
        default: break;
    }

    ctx->pc = 0x12cd88u;

    // 0x12cd88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cd8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12cd8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12cd90: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12CD90u;
    SET_GPR_U32(ctx, 31, 0x12CD98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12CD90u, 0x12CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD98u;
label_12cd98:
    // 0x12cd98: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x12cd9c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x12cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x12cda0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12cda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12cda4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cda8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cdac: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12cdb0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12cdb4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12CDB4u;
    SET_GPR_U32(ctx, 31, 0x12CDBCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12CDB4u, 0x12CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDBCu;
label_12cdbc:
    // 0x12cdbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cdc0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12cdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12cdc4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x12cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x12cdc8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x12cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x12cdcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12cdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12cdd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cdd4: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x12CDD4u;
    SET_GPR_U32(ctx, 31, 0x12CDDCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12CDD4u, 0x12CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDDCu;
label_12cddc:
    // 0x12cddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cde0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cde4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12cde8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12CDE8u;
    SET_GPR_U32(ctx, 31, 0x12CDF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12CDE8u, 0x12CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDF0u;
label_12cdf0:
    // 0x12cdf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cdf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cdf8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12cdfc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12CDFCu;
    SET_GPR_U32(ctx, 31, 0x12CE04u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12CE04u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12CE04u) { return; }
    ctx->pc = 0x12CE04u;
label_12ce04:
    // 0x12ce04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ce0c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12CE0Cu;
    SET_GPR_U32(ctx, 31, 0x12CE14u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12CE0Cu, 0x12CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE14u;
label_12ce14:
    // 0x12ce14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ce1c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12ce20: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ce24: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12CE24u;
    SET_GPR_U32(ctx, 31, 0x12CE2Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12CE24u, 0x12CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE2Cu;
label_12ce2c:
    // 0x12ce2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce30: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ce34: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ce38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ce3c: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12ce3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x12ce40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce44: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x12ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ce48: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ce4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ce50: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x12ce50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x12ce54: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12CE58u;
    SET_GPR_U32(ctx, 31, 0x12CE60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12CE58u, 0x12CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE60u;
label_12ce60:
    // 0x12ce60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce64: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12ce64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12ce68: 0x106000c6  beqz        $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x12CE68u;
    {
        const bool branch_taken_0x12ce68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ce68) {
            ctx->pc = 0x12D184u;
            return;
        }
    }
    ctx->pc = 0x12CE70u;
    // 0x12ce70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12ce70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12ce74: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ce78: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12ce7c: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DB8u));
    // 0x12ce80: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12CE80u;
    SET_GPR_U32(ctx, 31, 0x12CE88u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CE80u, 0x12CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE88u;
label_12ce88:
    // 0x12ce88: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x12ce8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12ce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12ce90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12ce90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12ce94: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12CE94u;
    {
        const bool branch_taken_0x12ce94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12ce94) {
            ctx->pc = 0x12CED4u;
            return;
        }
    }
    ctx->pc = 0x12CE9Cu;
    // 0x12ce9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cea4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12cea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12cea8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12ceac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ceb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ceb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ceb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ceb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cebc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cec0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12cec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cec4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cec8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12cecc: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x12CECCu;
    {
        const bool branch_taken_0x12cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cecc) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CED4u;
}
