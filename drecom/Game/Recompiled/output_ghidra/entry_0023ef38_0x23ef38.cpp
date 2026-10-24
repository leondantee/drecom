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

// Function: entry_0023ef38
// Address: 0x23ef38 - 0x23f1b8
void entry_0023ef38_0x23ef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ef38_0x23ef38");
#endif

    switch (ctx->pc) {
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef80u: goto label_23ef80;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efc4u: goto label_23efc4;
        case 0x23f090u: goto label_23f090;
        case 0x23f174u: goto label_23f174;
        case 0x23f1b0u: goto label_23f1b0;
        default: break;
    }

    ctx->pc = 0x23ef38u;

    // 0x23ef38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef44: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ef48: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23ef4c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ef50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ef54: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ef58: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x23ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23ef5c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23EF5Cu;
    SET_GPR_U32(ctx, 31, 0x23EF64u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23EF5Cu, 0x23EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF64u;
label_23ef64:
    // 0x23ef64: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ef64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23ef68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef6c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ef70: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ef74: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ef74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ef78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23EF78u;
    SET_GPR_U32(ctx, 31, 0x23EF80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23EF78u, 0x23EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF80u;
label_23ef80:
    // 0x23ef80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef84: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23ef84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23ef88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23ef94: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x23ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23ef98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ef9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23efa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23EFA0u;
    SET_GPR_U32(ctx, 31, 0x23EFA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23EFA0u, 0x23EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFA8u;
label_23efa8:
    // 0x23efa8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23efb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23EFB0u;
    SET_GPR_U32(ctx, 31, 0x23EFB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23EFB0u, 0x23EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFB8u;
label_23efb8:
    // 0x23efb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efbc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23EFBCu, 0x23EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efc8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23efcc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x23efd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23efd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23efd4: 0x0  nop
    ctx->pc = 0x23efd4u;
    // NOP
    // 0x23efd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23efd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23efdc: 0x0  nop
    ctx->pc = 0x23efdcu;
    // NOP
    // 0x23efe0: 0x450000bd  bc1f        . + 4 + (0xBD << 2)
    ctx->pc = 0x23EFE0u;
    {
        const bool branch_taken_0x23efe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23efe0) {
            ctx->pc = 0x23F2D8u;
            return;
        }
    }
    ctx->pc = 0x23EFE8u;
    // 0x23efe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23efec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eff0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23eff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23eff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23eff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eff8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23effc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f000: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23f004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f008: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f00c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f010: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23f010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23f014: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23f018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f01c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f020: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f024: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23f024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23f028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23f02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f030: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f038: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23f03c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x23f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23f040: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f044: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23f044u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f04c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f050: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f054: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x23f054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f058: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f05c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f060: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x23f060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f064: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f068: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f06c: 0xa0400071  sb          $zero, 0x71($v0)
    ctx->pc = 0x23f06cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f074: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f078: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23f078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23f07c: 0x24063700  addiu       $a2, $zero, 0x3700
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14080));
    // 0x23f080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23f080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23f088: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23F088u;
    SET_GPR_U32(ctx, 31, 0x23F090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23F088u, 0x23F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F090u;
label_23f090:
    // 0x23f090: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f094: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f098: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x23f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0a0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0ac: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x23f0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0c0: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x23f0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x23f0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0c8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0d4: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x23f0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x23f0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0e8: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x23f0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x23f0ec: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f0f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0f4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0f8: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x23f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x23f0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f100: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f104: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f108: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f10c: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x23f10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x23f110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f114: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f11c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f120: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x23f120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x23f124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f128: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f130: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23f134: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x23f138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f13c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x23f13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f144: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23f148: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x23f148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x23f14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f150: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x23f150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f154: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f158: 0x24c51330  addiu       $a1, $a2, 0x1330
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23f15c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x23f160: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x23f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x23f164: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23f164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23f168: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x23f168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x23f16c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F16Cu;
    SET_GPR_U32(ctx, 31, 0x23F174u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F16Cu, 0x23F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F174u;
label_23f174:
    // 0x23f174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f178: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x23f178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f17c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x23F17Cu;
    {
        const bool branch_taken_0x23f17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f17c) {
            ctx->pc = 0x23F1B8u;
            return;
        }
    }
    ctx->pc = 0x23F184u;
    // 0x23f184: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f188: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x23f188u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
    // 0x23f18c: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x23f18cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x23f190: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x23f190u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f194: 0x24080520  addiu       $t0, $zero, 0x520
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x23f198: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x23f198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x23f19c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x23f1a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23f1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23f1a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f1a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f1a8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F1A8u;
    SET_GPR_U32(ctx, 31, 0x23F1B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F1A8u, 0x23F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1B0u;
label_23f1b0:
    // 0x23f1b0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x23F1B0u;
    {
        const bool branch_taken_0x23f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1b0) {
            ctx->pc = 0x23F2D8u;
            return;
        }
    }
    ctx->pc = 0x23F1B8u;
}
