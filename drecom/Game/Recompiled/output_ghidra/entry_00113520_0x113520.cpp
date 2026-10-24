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

// Function: entry_00113520
// Address: 0x113520 - 0x113550
void entry_00113520_0x113520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113520_0x113520");
#endif

    switch (ctx->pc) {
        case 0x113538u: goto label_113538;
        default: break;
    }

    ctx->pc = 0x113520u;

label_113520:
    // 0x113520: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x113520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x113524: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113528: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11352c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113530: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113530u;
    SET_GPR_U32(ctx, 31, 0x113538u);
    ctx->pc = 0x113534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113530u;
    // 0x113534: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113530u, 0x113538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113538u;
label_113538:
    // 0x113538: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x113538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11353c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x11353cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113540: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113540u;
    {
        const bool branch_taken_0x113540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113540u;
        // 0x113544: 0x8fa2024c  lw          $v0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113540) {
            ctx->pc = 0x113520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113520;
        }
    }
    ctx->pc = 0x113548u;
    // 0x113548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113548u;
    {
        const bool branch_taken_0x113548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113548) {
            ctx->pc = 0x11355Cu;
            return;
        }
    }
    ctx->pc = 0x113550u;
}
