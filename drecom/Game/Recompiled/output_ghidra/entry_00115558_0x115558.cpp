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

// Function: entry_00115558
// Address: 0x115558 - 0x115574
void entry_00115558_0x115558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115558_0x115558");
#endif

    switch (ctx->pc) {
        case 0x115568u: goto label_115568;
        default: break;
    }

    ctx->pc = 0x115558u;

    // 0x115558: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x115558u;
    {
        const bool branch_taken_0x115558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115558) {
            ctx->pc = 0x11555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115558u;
            // 0x11555c: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115574u;
            return;
        }
    }
    ctx->pc = 0x115560u;
    // 0x115560: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115560u;
    SET_GPR_U32(ctx, 31, 0x115568u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115560u, 0x115568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115568u;
label_115568:
    // 0x115568: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11556c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11556cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x115570: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x115570u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x115574u;
}
