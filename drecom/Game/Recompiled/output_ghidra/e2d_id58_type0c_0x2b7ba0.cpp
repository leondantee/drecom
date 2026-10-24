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

// Function: e2d_id58_type0c
// Address: 0x2b7ba0 - 0x2b7c60
void e2d_id58_type0c_0x2b7ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type0c_0x2b7ba0");
#endif

    switch (ctx->pc) {
        case 0x2b7c48u: goto label_2b7c48;
        default: break;
    }

    ctx->pc = 0x2b7ba0u;

    // 0x2b7ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7ba4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7ba8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b7bac: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2b7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7bb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7bb8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b7bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b7bbc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7bc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7bc8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b7bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b7bcc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7bd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7bd8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b7bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b7bdc: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2b7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2b7be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7be4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7be8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b7be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b7bec: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2b7becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2b7bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7bf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7bf8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b7bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b7bfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7c00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c04: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b7c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7c08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7c0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c10: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b7c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7c14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7c18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c1c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2b7c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c28: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7c2c: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x2b7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x2b7c30: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c3c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b7c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b7c40: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7C40u;
    SET_GPR_U32(ctx, 31, 0x2B7C48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7C40u, 0x2B7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C48u;
label_2b7c48:
    // 0x2b7c48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c4c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b7c50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C60u;
}
