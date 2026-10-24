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

// Function: e2d_id1f_type00
// Address: 0x2b3460 - 0x2b34b4
void e2d_id1f_type00_0x2b3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1f_type00_0x2b3460");
#endif

    ctx->pc = 0x2b3460u;

    // 0x2b3460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3464: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b3464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b3468: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b346c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b346cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3470: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3474: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b3474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b3478: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b347c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b347cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3480: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3484: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b3484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b3488: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b348c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b348cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3490: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3494: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b3494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b3498: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b349c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b349cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b34a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b34a4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b34a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b34a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b34a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b34ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B34ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B34ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B34B4u;
}
