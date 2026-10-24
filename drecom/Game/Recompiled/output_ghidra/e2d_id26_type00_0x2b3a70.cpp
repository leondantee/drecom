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

// Function: e2d_id26_type00
// Address: 0x2b3a70 - 0x2b3ac4
void e2d_id26_type00_0x2b3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id26_type00_0x2b3a70");
#endif

    ctx->pc = 0x2b3a70u;

    // 0x2b3a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3a74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b3a78: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3a80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3a84: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b3a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b3a88: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3a90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3a94: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b3a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b3a98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3aa0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3aa4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b3aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b3aa8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3ab0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3ab4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b3ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b3ab8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b3abc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3AC4u;
}
