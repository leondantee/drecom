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

// Function: entry_0010ad1c
// Address: 0x10ad1c - 0x10ad28
void entry_0010ad1c_0x10ad1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ad1c_0x10ad1c");
#endif

    switch (ctx->pc) {
        case 0x10ad24u: goto label_10ad24;
        default: break;
    }

    ctx->pc = 0x10ad1cu;

    // 0x10ad1c: 0xc042b26  jal         func_10AC98
    ctx->pc = 0x10AD1Cu;
    SET_GPR_U32(ctx, 31, 0x10AD24u);
    ctx->pc = 0x10AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD1Cu;
    // 0x10ad20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC98u, 0x10AD1Cu, 0x10AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD24u;
label_10ad24:
    // 0x10ad24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ad24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x10ad28u;
}
