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

// Function: entry_0010ed94
// Address: 0x10ed94 - 0x10eda8
void entry_0010ed94_0x10ed94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ed94_0x10ed94");
#endif

    switch (ctx->pc) {
        case 0x10ed9cu: goto label_10ed9c;
        case 0x10eda4u: goto label_10eda4;
        default: break;
    }

    ctx->pc = 0x10ed94u;

    // 0x10ed94: 0xc043506  jal         func_10D418
    ctx->pc = 0x10ED94u;
    SET_GPR_U32(ctx, 31, 0x10ED9Cu);
    ctx->pc = 0x10D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D418u, 0x10ED94u, 0x10ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED9Cu;
label_10ed9c:
    // 0x10ed9c: 0xc043590  jal         func_10D640
    ctx->pc = 0x10ED9Cu;
    SET_GPR_U32(ctx, 31, 0x10EDA4u);
    ctx->pc = 0x10D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D640u, 0x10ED9Cu, 0x10EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDA4u;
label_10eda4:
    // 0x10eda4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10eda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10eda8u;
}
