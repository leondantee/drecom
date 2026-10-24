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

// Function: entry_00114c70
// Address: 0x114c70 - 0x114c84
void entry_00114c70_0x114c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c70_0x114c70");
#endif

    switch (ctx->pc) {
        case 0x114c7cu: goto label_114c7c;
        default: break;
    }

    ctx->pc = 0x114c70u;

    // 0x114c70: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x114c70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114c74: 0xc044a0c  jal         func_112830
    ctx->pc = 0x114C74u;
    SET_GPR_U32(ctx, 31, 0x114C7Cu);
    ctx->pc = 0x114C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C74u;
    // 0x114c78: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112830u, 0x114C74u, 0x114C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C7Cu;
label_114c7c:
    // 0x114c7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x114C7Cu;
    {
        const bool branch_taken_0x114c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C7Cu;
        // 0x114c80: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c7c) {
            ctx->pc = 0x114CB4u;
            return;
        }
    }
    ctx->pc = 0x114C84u;
}
