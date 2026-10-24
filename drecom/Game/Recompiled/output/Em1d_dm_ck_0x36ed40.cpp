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

// Function: Em1d_dm_ck
// Address: 0x36ed40 - 0x36ee34
void Em1d_dm_ck_0x36ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_dm_ck_0x36ed40");
#endif

    switch (ctx->pc) {
        case 0x36eda4u: goto label_36eda4;
        case 0x36edfcu: goto label_36edfc;
        default: break;
    }

    ctx->pc = 0x36ed40u;

    // 0x36ed40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36ed44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36ed48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ed4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36ed50: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x36ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x36ed54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36ed54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ed58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed5c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x36ed5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x36ed60: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x36ED60u;
    {
        const bool branch_taken_0x36ed60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ed60) {
            ctx->pc = 0x36EE1Cu;
            goto label_36ee1c;
        }
    }
    ctx->pc = 0x36ED68u;
    // 0x36ed68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed6c: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x36ed6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ed70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed74: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x36ed74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x36ed78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed7c: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x36ed7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x36ed80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed84: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x36ed84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ed88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed8c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x36ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ed94: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x36ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed98: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36ed98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ed9c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36ED9Cu;
    SET_GPR_U32(ctx, 31, 0x36EDA4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36ED9Cu, 0x36EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDA4u;
label_36eda4:
    // 0x36eda4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36eda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36eda8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x36eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36edac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36edacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36edb0: 0x0  nop
    ctx->pc = 0x36edb0u;
    // NOP
    // 0x36edb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36edb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36edb8: 0x0  nop
    ctx->pc = 0x36edb8u;
    // NOP
    // 0x36edbc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x36EDBCu;
    {
        const bool branch_taken_0x36edbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36edbc) {
            ctx->pc = 0x36EDD8u;
            goto label_36edd8;
        }
    }
    ctx->pc = 0x36EDC4u;
    // 0x36edc4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x36edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x36edc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36edc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36edcc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x36edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36edd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36edd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36edd4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36edd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_36edd8:
    // 0x36edd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36edd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eddc: 0x0  nop
    ctx->pc = 0x36eddcu;
    // NOP
    // 0x36ede0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36ede0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36ede4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ede8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x36ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36edec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36edf0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36edf4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36EDF4u;
    SET_GPR_U32(ctx, 31, 0x36EDFCu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36EDF4u, 0x36EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDFCu;
label_36edfc:
    // 0x36edfc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36edfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36ee00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36ee00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ee04: 0x0  nop
    ctx->pc = 0x36ee04u;
    // NOP
    // 0x36ee08: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36ee08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36ee0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36ee10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ee10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ee14: 0x0  nop
    ctx->pc = 0x36ee14u;
    // NOP
    // 0x36ee18: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36ee18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_36ee1c:
    // 0x36ee1c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36ee1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ee20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ee20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ee24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ee28: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x36ee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36ee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE34u;
}
