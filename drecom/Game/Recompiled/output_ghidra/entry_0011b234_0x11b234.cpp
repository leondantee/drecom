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

// Function: entry_0011b234
// Address: 0x11b234 - 0x11b244
void entry_0011b234_0x11b234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b234_0x11b234");
#endif

    switch (ctx->pc) {
        case 0x11b23cu: goto label_11b23c;
        default: break;
    }

    ctx->pc = 0x11b234u;

    // 0x11b234: 0xc045e00  jal         func_117800
    ctx->pc = 0x11B234u;
    SET_GPR_U32(ctx, 31, 0x11B23Cu);
    ctx->pc = 0x11B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B234u;
    // 0x11b238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117800u, 0x11B234u, 0x11B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B23Cu;
label_11b23c:
    // 0x11b23c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11b240: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x11b244u;
}
