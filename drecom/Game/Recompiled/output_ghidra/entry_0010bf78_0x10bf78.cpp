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

// Function: entry_0010bf78
// Address: 0x10bf78 - 0x10bf80
void entry_0010bf78_0x10bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bf78_0x10bf78");
#endif

    ctx->pc = 0x10bf78u;

    // 0x10bf78: 0xc042fe6  jal         func_10BF98
    ctx->pc = 0x10BF78u;
    SET_GPR_U32(ctx, 31, 0x10BF80u);
    ctx->pc = 0x10BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF78u;
    // 0x10bf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF98u, 0x10BF78u, 0x10BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF80u;
}
