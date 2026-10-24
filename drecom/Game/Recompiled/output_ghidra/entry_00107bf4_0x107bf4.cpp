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

// Function: entry_00107bf4
// Address: 0x107bf4 - 0x107c0c
void entry_00107bf4_0x107bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107bf4_0x107bf4");
#endif

    switch (ctx->pc) {
        case 0x107bfcu: goto label_107bfc;
        default: break;
    }

    ctx->pc = 0x107bf4u;

    // 0x107bf4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107BF4u;
    SET_GPR_U32(ctx, 31, 0x107BFCu);
    ctx->pc = 0x107BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF4u;
    // 0x107bf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107BF4u, 0x107BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BFCu;
label_107bfc:
    // 0x107bfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107BFCu;
    {
        const bool branch_taken_0x107bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BFCu;
        // 0x107c00: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bfc) {
            ctx->pc = 0x107C0Cu;
            return;
        }
    }
    ctx->pc = 0x107C04u;
    // 0x107c04: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x107C04u;
    SET_GPR_U32(ctx, 31, 0x107C0Cu);
    ctx->pc = 0x107C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C04u;
    // 0x107c08: 0x2484c790  addiu       $a0, $a0, -0x3870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x107C04u, 0x107C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C0Cu;
}
