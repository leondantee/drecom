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

// Function: entry_00284c00
// Address: 0x284c00 - 0x284c20
void entry_00284c00_0x284c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284c00_0x284c00");
#endif

    switch (ctx->pc) {
        case 0x284c18u: goto label_284c18;
        default: break;
    }

    ctx->pc = 0x284c00u;

    // 0x284c00: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x284c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x284c04: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x284c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284C08u;
    {
        const bool branch_taken_0x284c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c08) {
            ctx->pc = 0x284C20u;
            return;
        }
    }
    ctx->pc = 0x284C10u;
    // 0x284c10: 0xc0a15a8  jal         func_2856A0
    ctx->pc = 0x284C10u;
    SET_GPR_U32(ctx, 31, 0x284C18u);
    ctx->pc = 0x2856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856A0u, 0x284C10u, 0x284C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C18u;
label_284c18:
    // 0x284c18: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x284C18u;
    {
        const bool branch_taken_0x284c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c18) {
            ctx->pc = 0x284C68u;
            return;
        }
    }
    ctx->pc = 0x284C20u;
}
