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

// Function: srp_id24_type01
// Address: 0x2c2d90 - 0x2c2e78
void srp_id24_type01_0x2c2d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id24_type01_0x2c2d90");
#endif

    switch (ctx->pc) {
        case 0x2c2e10u: goto label_2c2e10;
        default: break;
    }

    ctx->pc = 0x2c2d90u;

    // 0x2c2d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2d94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2d98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c2d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2da0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2da4: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c2da8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2c2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2c2dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2db0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2db4: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c2db8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2c2dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2dc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2dc4: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c2dc8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2dd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2dd4: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c2dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c2dd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2ddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2de0: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2de4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2de8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2dec: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2df0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2df4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2df8: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2df8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2e00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e04: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2e08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C2E08u;
    SET_GPR_U32(ctx, 31, 0x2C2E10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C2E08u, 0x2C2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E10u;
label_2c2e10:
    // 0x2c2e10: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2c2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2c2e14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2e18: 0x0  nop
    ctx->pc = 0x2c2e18u;
    // NOP
    // 0x2c2e1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2e1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2e20: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c2e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e28: 0x0  nop
    ctx->pc = 0x2c2e28u;
    // NOP
    // 0x2c2e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2e30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e34: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2e3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e40: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c2e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2e44: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c2e48: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2c2e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c2e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e54: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x2c2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x2c2e58: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c2e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e64: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c2e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c2e68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2e68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E78u;
}
