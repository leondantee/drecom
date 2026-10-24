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

// Function: entry_0027a468
// Address: 0x27a468 - 0x27a490
void entry_0027a468_0x27a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a468_0x27a468");
#endif

    switch (ctx->pc) {
        case 0x27a488u: goto label_27a488;
        default: break;
    }

    ctx->pc = 0x27a468u;

    // 0x27a468: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x27a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x27a46c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x27a46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x27a470: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A470u;
    {
        const bool branch_taken_0x27a470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a470) {
            ctx->pc = 0x27A490u;
            return;
        }
    }
    ctx->pc = 0x27A478u;
    // 0x27a478: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a47c: 0x244407c0  addiu       $a0, $v0, 0x7C0
    ctx->pc = 0x27a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x27a480: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A480u;
    SET_GPR_U32(ctx, 31, 0x27A488u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A480u, 0x27A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A488u;
label_27a488:
    // 0x27a488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A488u;
    {
        const bool branch_taken_0x27a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a488) {
            ctx->pc = 0x27A4A0u;
            return;
        }
    }
    ctx->pc = 0x27A490u;
}
