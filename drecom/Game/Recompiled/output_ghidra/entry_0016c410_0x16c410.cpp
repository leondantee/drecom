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

// Function: entry_0016c410
// Address: 0x16c410 - 0x16c440
void entry_0016c410_0x16c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c410_0x16c410");
#endif

    switch (ctx->pc) {
        case 0x16c434u: goto label_16c434;
        default: break;
    }

    ctx->pc = 0x16c410u;

    // 0x16c410: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c414: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x16c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16c418: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16c41c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16c41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16c420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C420u;
    {
        const bool branch_taken_0x16c420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c420) {
            ctx->pc = 0x16C440u;
            return;
        }
    }
    ctx->pc = 0x16C428u;
    // 0x16c428: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x16c428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c42c: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x16C42Cu;
    SET_GPR_U32(ctx, 31, 0x16C434u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x16C42Cu, 0x16C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C434u;
label_16c434:
    // 0x16c434: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16c434u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16c438: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x16C438u;
    {
        const bool branch_taken_0x16c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c438) {
            ctx->pc = 0x16CBE8u;
            return;
        }
    }
    ctx->pc = 0x16C440u;
}
