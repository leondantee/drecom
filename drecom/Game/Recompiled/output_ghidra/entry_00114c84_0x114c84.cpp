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

// Function: entry_00114c84
// Address: 0x114c84 - 0x114c98
void entry_00114c84_0x114c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c84_0x114c84");
#endif

    switch (ctx->pc) {
        case 0x114c90u: goto label_114c90;
        default: break;
    }

    ctx->pc = 0x114c84u;

    // 0x114c84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114c88: 0xc044d7a  jal         func_1135E8
    ctx->pc = 0x114C88u;
    SET_GPR_U32(ctx, 31, 0x114C90u);
    ctx->pc = 0x114C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C88u;
    // 0x114c8c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135E8u, 0x114C88u, 0x114C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C90u;
label_114c90:
    // 0x114c90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114C90u;
    {
        const bool branch_taken_0x114c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C90u;
        // 0x114c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c90) {
            ctx->pc = 0x114CA4u;
            return;
        }
    }
    ctx->pc = 0x114C98u;
}
