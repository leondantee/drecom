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

// Function: entry_00108898
// Address: 0x108898 - 0x1088a4
void entry_00108898_0x108898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108898_0x108898");
#endif

    switch (ctx->pc) {
        case 0x1088a0u: goto label_1088a0;
        default: break;
    }

    ctx->pc = 0x108898u;

    // 0x108898: 0xc0420fe  jal         func_1083F8
    ctx->pc = 0x108898u;
    SET_GPR_U32(ctx, 31, 0x1088A0u);
    ctx->pc = 0x10889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108898u;
    // 0x10889c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083F8u, 0x108898u, 0x1088A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1088A0u;
label_1088a0:
    // 0x1088a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1088a4u;
}
