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

// Function: entry_001133e0
// Address: 0x1133e0 - 0x113404
void entry_001133e0_0x1133e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001133e0_0x1133e0");
#endif

    switch (ctx->pc) {
        case 0x1133f4u: goto label_1133f4;
        default: break;
    }

    ctx->pc = 0x1133e0u;

label_1133e0:
    // 0x1133e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1133e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1133e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1133e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1133e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1133ec: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1133ECu;
    SET_GPR_U32(ctx, 31, 0x1133F4u);
    ctx->pc = 0x1133F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133ECu;
    // 0x1133f0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1133ECu, 0x1133F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133F4u;
label_1133f4:
    // 0x1133f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1133f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133f8: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x1133f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1133fc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1133FCu;
    {
        const bool branch_taken_0x1133fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133FCu;
        // 0x113400: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133fc) {
            ctx->pc = 0x1133E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1133e0;
        }
    }
    ctx->pc = 0x113404u;
}
