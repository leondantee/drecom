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

// Function: entry_00113368
// Address: 0x113368 - 0x113390
void entry_00113368_0x113368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113368_0x113368");
#endif

    switch (ctx->pc) {
        case 0x113380u: goto label_113380;
        default: break;
    }

    ctx->pc = 0x113368u;

label_113368:
    // 0x113368: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11336c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113370: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x113370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x113374: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x113374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113378: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113378u;
    SET_GPR_U32(ctx, 31, 0x113380u);
    ctx->pc = 0x11337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113378u;
    // 0x11337c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113378u, 0x113380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113380u;
label_113380:
    // 0x113380: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113380u;
    {
        const bool branch_taken_0x113380 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x113384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113380u;
        // 0x113384: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113380) {
            ctx->pc = 0x113368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113368;
        }
    }
    ctx->pc = 0x113388u;
    // 0x113388: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113388u;
    {
        const bool branch_taken_0x113388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113388u;
        // 0x11338c: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113388) {
            ctx->pc = 0x11339Cu;
            return;
        }
    }
    ctx->pc = 0x113390u;
}
