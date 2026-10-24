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

// Function: entry_00292550
// Address: 0x292550 - 0x292570
void entry_00292550_0x292550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292550_0x292550");
#endif

    switch (ctx->pc) {
        case 0x292558u: goto label_292558;
        default: break;
    }

    ctx->pc = 0x292550u;

    // 0x292550: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x292550u;
    SET_GPR_U32(ctx, 31, 0x292558u);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x292550u, 0x292558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292558u;
label_292558:
    // 0x292558: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x292558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x29255c: 0x8c2267e8  lw          $v0, 0x67E8($at)
    ctx->pc = 0x29255cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3967E8u));
    // 0x292560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292560u;
    {
        const bool branch_taken_0x292560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292560) {
            ctx->pc = 0x292570u;
            return;
        }
    }
    ctx->pc = 0x292568u;
    // 0x292568: 0xc0a51b8  jal         func_2946E0
    ctx->pc = 0x292568u;
    SET_GPR_U32(ctx, 31, 0x292570u);
    ctx->pc = 0x2946E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946E0u, 0x292568u, 0x292570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292570u;
}
