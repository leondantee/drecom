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

// Function: entry_00114aa4
// Address: 0x114aa4 - 0x114abc
void entry_00114aa4_0x114aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114aa4_0x114aa4");
#endif

    switch (ctx->pc) {
        case 0x114ab4u: goto label_114ab4;
        default: break;
    }

    ctx->pc = 0x114aa4u;

    // 0x114aa4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114AA4u;
    {
        const bool branch_taken_0x114aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x114AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AA4u;
        // 0x114aa8: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aa4) {
            ctx->pc = 0x114ABCu;
            return;
        }
    }
    ctx->pc = 0x114AACu;
    // 0x114aac: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x114AACu;
    SET_GPR_U32(ctx, 31, 0x114AB4u);
    ctx->pc = 0x114AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AACu;
    // 0x114ab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x114AACu, 0x114AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AB4u;
label_114ab4:
    // 0x114ab4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x114AB4u;
    {
        const bool branch_taken_0x114ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ab4) {
            ctx->pc = 0x114BB4u;
            return;
        }
    }
    ctx->pc = 0x114ABCu;
}
