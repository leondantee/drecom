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

// Function: Movie_suspend
// Address: 0x35d560 - 0x35d5a0
void Movie_suspend_0x35d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_suspend_0x35d560");
#endif

    ctx->pc = 0x35d560u;

    // 0x35d560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d564: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35d564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35d568: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d56c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x35d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35d570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35d574: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35d574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35d578: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35d578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x35d57c: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x35d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x35d580: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x35d580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35d584: 0x8ca40074  lw          $a0, 0x74($a1)
    ctx->pc = 0x35d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x35d588: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x35d588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35d58c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35d58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35d590: 0xaca30074  sw          $v1, 0x74($a1)
    ctx->pc = 0x35d590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
    // 0x35d594: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35d594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35d598: 0x3e00008  jr          $ra
    ctx->pc = 0x35D598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D5A0u;
}
