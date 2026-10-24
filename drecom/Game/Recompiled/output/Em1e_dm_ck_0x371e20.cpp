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

// Function: Em1e_dm_ck
// Address: 0x371e20 - 0x371f14
void Em1e_dm_ck_0x371e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_dm_ck_0x371e20");
#endif

    switch (ctx->pc) {
        case 0x371e84u: goto label_371e84;
        case 0x371edcu: goto label_371edc;
        default: break;
    }

    ctx->pc = 0x371e20u;

    // 0x371e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x371e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x371e24: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x371e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x371e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371e30: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x371e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x371e34: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x371e34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371e38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x371e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e3c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x371e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x371e40: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x371E40u;
    {
        const bool branch_taken_0x371e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x371e40) {
            ctx->pc = 0x371EFCu;
            goto label_371efc;
        }
    }
    ctx->pc = 0x371E48u;
    // 0x371e48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e4c: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x371e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x371e50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e54: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x371e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x371e58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e5c: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x371e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x371e60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e64: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x371e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x371e68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e6c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x371e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371e70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371e74: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x371e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371e78: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x371e78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x371e7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x371E7Cu;
    SET_GPR_U32(ctx, 31, 0x371E84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x371E7Cu, 0x371E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E84u;
label_371e84:
    // 0x371e84: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x371e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x371e88: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x371e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371e8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x371e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371e90: 0x0  nop
    ctx->pc = 0x371e90u;
    // NOP
    // 0x371e94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x371e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371e98: 0x0  nop
    ctx->pc = 0x371e98u;
    // NOP
    // 0x371e9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x371E9Cu;
    {
        const bool branch_taken_0x371e9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371e9c) {
            ctx->pc = 0x371EB8u;
            goto label_371eb8;
        }
    }
    ctx->pc = 0x371EA4u;
    // 0x371ea4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x371ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x371ea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x371ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x371eac: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x371eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371eb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x371eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x371eb4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x371eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_371eb8:
    // 0x371eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x371eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371ebc: 0x0  nop
    ctx->pc = 0x371ebcu;
    // NOP
    // 0x371ec0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x371ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x371ec4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371ec8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x371ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371ecc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x371eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x371ed0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x371ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x371ed4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x371ED4u;
    SET_GPR_U32(ctx, 31, 0x371EDCu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x371ED4u, 0x371EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EDCu;
label_371edc:
    // 0x371edc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x371ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371ee4: 0x0  nop
    ctx->pc = 0x371ee4u;
    // NOP
    // 0x371ee8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x371ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371eec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x371eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x371ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371ef4: 0x0  nop
    ctx->pc = 0x371ef4u;
    // NOP
    // 0x371ef8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_371efc:
    // 0x371efc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x371efcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371f08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x371f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x371f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x371F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371F14u;
}
