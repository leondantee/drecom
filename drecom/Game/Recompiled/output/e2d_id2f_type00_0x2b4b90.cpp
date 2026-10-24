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

// Function: e2d_id2f_type00
// Address: 0x2b4b90 - 0x2b4bf4
void e2d_id2f_type00_0x2b4b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2f_type00_0x2b4b90");
#endif

    ctx->pc = 0x2b4b90u;

    // 0x2b4b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4b94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4b98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4b9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4ba0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4ba4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b4ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b4ba8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4bb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4bb4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b4bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b4bb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4bc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4bc4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b4bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b4bc8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4bd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4bd4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b4bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b4bd8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b4bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4be0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4be4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4be8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BF4u;
}
