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

// Function: entry_00213158
// Address: 0x213158 - 0x213160
void entry_00213158_0x213158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213158_0x213158");
#endif

    ctx->pc = 0x213158u;

    // 0x213158: 0xc084990  jal         func_212640
    ctx->pc = 0x213158u;
    SET_GPR_U32(ctx, 31, 0x213160u);
    ctx->pc = 0x21315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213158u;
    // 0x21315c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x213158u, 0x213160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213160u;
}
