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

// Function: e2d_id58_type0d
// Address: 0x2b7c60 - 0x2b7d20
void e2d_id58_type0d_0x2b7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type0d_0x2b7c60");
#endif

    switch (ctx->pc) {
        case 0x2b7d08u: goto label_2b7d08;
        default: break;
    }

    ctx->pc = 0x2b7c60u;

    // 0x2b7c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7c64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7c68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b7c6c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2b7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c78: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b7c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b7c7c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c88: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b7c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b7c8c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c98: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b7c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b7c9c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2b7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2b7ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ca8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b7ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b7cac: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2b7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2b7cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7cb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7cb8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b7cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b7cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7cc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7cc4: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b7cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7cc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7ccc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7cd0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b7cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7cd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7cd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7cdc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2b7cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7ce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ce8: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7cec: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x2b7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x2b7cf0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7cf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7cfc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b7cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b7d00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7D00u;
    SET_GPR_U32(ctx, 31, 0x2B7D08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7D00u, 0x2B7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D08u;
label_2b7d08:
    // 0x2b7d08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d0c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b7d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b7d10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D20u;
}
