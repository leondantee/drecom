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

// Function: entry_00284c20
// Address: 0x284c20 - 0x284c40
void entry_00284c20_0x284c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284c20_0x284c20");
#endif

    switch (ctx->pc) {
        case 0x284c38u: goto label_284c38;
        default: break;
    }

    ctx->pc = 0x284c20u;

    // 0x284c20: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x284c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x284c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284c28: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284C28u;
    {
        const bool branch_taken_0x284c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284c28) {
            ctx->pc = 0x284C68u;
            return;
        }
    }
    ctx->pc = 0x284C30u;
    // 0x284c30: 0xc0a1630  jal         func_2858C0
    ctx->pc = 0x284C30u;
    SET_GPR_U32(ctx, 31, 0x284C38u);
    ctx->pc = 0x2858C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2858C0u, 0x284C30u, 0x284C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C38u;
label_284c38:
    // 0x284c38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x284C38u;
    {
        const bool branch_taken_0x284c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c38) {
            ctx->pc = 0x284C68u;
            return;
        }
    }
    ctx->pc = 0x284C40u;
}
