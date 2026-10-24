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

// Function: e2d_id63_type01
// Address: 0x2b9da0 - 0x2b9e08
void e2d_id63_type01_0x2b9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id63_type01_0x2b9da0");
#endif

    switch (ctx->pc) {
        case 0x2b9db8u: goto label_2b9db8;
        default: break;
    }

    ctx->pc = 0x2b9da0u;

    // 0x2b9da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9da4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b9da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b9da8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b9dac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9db0: 0xc0ae748  jal         func_2B9D20
    ctx->pc = 0x2B9DB0u;
    SET_GPR_U32(ctx, 31, 0x2B9DB8u);
    ctx->pc = 0x2B9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9D20u, 0x2B9DB0u, 0x2B9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DB8u;
label_2b9db8:
    // 0x2b9db8: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2b9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2b9dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9dc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9dc4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9dc8: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b9dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9dd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9dd4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9dd8: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2b9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2b9ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9de0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9de4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9de8: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b9dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9df0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9df4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9df8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9df8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9dfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b9dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9E08u;
}
