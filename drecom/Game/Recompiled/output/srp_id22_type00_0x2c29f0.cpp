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

// Function: srp_id22_type00
// Address: 0x2c29f0 - 0x2c2ab8
void srp_id22_type00_0x2c29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id22_type00_0x2c29f0");
#endif

    switch (ctx->pc) {
        case 0x2c2a58u: goto label_2c2a58;
        default: break;
    }

    ctx->pc = 0x2c29f0u;

    // 0x2c29f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c29f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c29f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c29f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c29fc: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2c29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2c2a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2a04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a08: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c2a0c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2a14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a18: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c2a1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c2a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2a24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a28: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c2a2c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a34: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2a34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2a38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2a3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a40: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2a40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a4c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2a50: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C2A50u;
    SET_GPR_U32(ctx, 31, 0x2C2A58u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C2A50u, 0x2C2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A58u;
label_2c2a58:
    // 0x2c2a58: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c2a5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2a60: 0x0  nop
    ctx->pc = 0x2c2a60u;
    // NOP
    // 0x2c2a64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2a68: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2c2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2c2a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2a70: 0x0  nop
    ctx->pc = 0x2c2a70u;
    // NOP
    // 0x2c2a74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2a78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a7c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a88: 0xe4600270  swc1        $f0, 0x270($v1)
    ctx->pc = 0x2c2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 624), bits); }
    // 0x2c2a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2a90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2a94: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c2a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c2a98: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2c2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2c2a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2aa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2aa4: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c2aa8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2aa8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2aac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2AB8u;
}
