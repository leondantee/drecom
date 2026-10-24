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

// Function: srp_id1a_type03
// Address: 0x2c1c40 - 0x2c1d38
void srp_id1a_type03_0x2c1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1a_type03_0x2c1c40");
#endif

    switch (ctx->pc) {
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1cd0u: goto label_2c1cd0;
        case 0x2c1d00u: goto label_2c1d00;
        default: break;
    }

    ctx->pc = 0x2c1c40u;

    // 0x2c1c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1c44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1c48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c1c4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1c50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c54: 0xa043034e  sb          $v1, 0x34E($v0)
    ctx->pc = 0x2c1c54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 846), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1c58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1c5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c60: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x2c1c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2c1c64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1c6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c70: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x2c1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x2c1c74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1c78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c7c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c1c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1c80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1c84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c88: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c1c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1c8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c94: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c1c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1c98: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1C98u;
    SET_GPR_U32(ctx, 31, 0x2C1CA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1C98u, 0x2C1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CA0u;
label_2c1ca0:
    // 0x2c1ca0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c1ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1ca8: 0x0  nop
    ctx->pc = 0x2c1ca8u;
    // NOP
    // 0x2c1cac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1cb0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c1cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1cb8: 0x0  nop
    ctx->pc = 0x2c1cb8u;
    // NOP
    // 0x2c1cbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1cc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1cc4: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c1cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c1cc8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1CC8u;
    SET_GPR_U32(ctx, 31, 0x2C1CD0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1CC8u, 0x2C1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CD0u;
label_2c1cd0:
    // 0x2c1cd0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c1cd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1cd8: 0x0  nop
    ctx->pc = 0x2c1cd8u;
    // NOP
    // 0x2c1cdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1ce0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1ce8: 0x0  nop
    ctx->pc = 0x2c1ce8u;
    // NOP
    // 0x2c1cec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1cf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1cf4: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c1cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c1cf8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1CF8u;
    SET_GPR_U32(ctx, 31, 0x2C1D00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1CF8u, 0x2C1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D00u;
label_2c1d00:
    // 0x2c1d00: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2c1d04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c1d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1d08: 0x0  nop
    ctx->pc = 0x2c1d08u;
    // NOP
    // 0x2c1d0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1d10: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2c1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1d18: 0x0  nop
    ctx->pc = 0x2c1d18u;
    // NOP
    // 0x2c1d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1d20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1d24: 0xe4600278  swc1        $f0, 0x278($v1)
    ctx->pc = 0x2c1d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x2c1d28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1d28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1d2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1D38u;
}
