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

// Function: entry_00107c0c
// Address: 0x107c0c - 0x107c1c
void entry_00107c0c_0x107c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c0c_0x107c0c");
#endif

    switch (ctx->pc) {
        case 0x107c14u: goto label_107c14;
        default: break;
    }

    ctx->pc = 0x107c0cu;

    // 0x107c0c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107C0Cu;
    SET_GPR_U32(ctx, 31, 0x107C14u);
    ctx->pc = 0x107C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C0Cu;
    // 0x107c10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107C0Cu, 0x107C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C14u;
label_107c14:
    // 0x107c14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107C14u;
    {
        const bool branch_taken_0x107c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C14u;
        // 0x107c18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c14) {
            ctx->pc = 0x107C30u;
            return;
        }
    }
    ctx->pc = 0x107C1Cu;
}
