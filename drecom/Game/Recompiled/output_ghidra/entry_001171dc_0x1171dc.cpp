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

// Function: entry_001171dc
// Address: 0x1171dc - 0x11720c
void entry_001171dc_0x1171dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171dc_0x1171dc");
#endif

    switch (ctx->pc) {
        case 0x1171f4u: goto label_1171f4;
        default: break;
    }

    ctx->pc = 0x1171dcu;

    // 0x1171dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1171e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1171E0u;
    {
        const bool branch_taken_0x1171e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1171E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171E0u;
        // 0x1171e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171e0) {
            ctx->pc = 0x1171B4u;
            return;
        }
    }
    ctx->pc = 0x1171E8u;
    // 0x1171e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1171e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171ec: 0xc045c44  jal         func_117110
    ctx->pc = 0x1171ECu;
    SET_GPR_U32(ctx, 31, 0x1171F4u);
    ctx->pc = 0x1171F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171ECu;
    // 0x1171f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117110u, 0x1171ECu, 0x1171F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171F4u;
label_1171f4:
    // 0x1171f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1171F4u;
    {
        const bool branch_taken_0x1171f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1171F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F4u;
        // 0x1171f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f4) {
            ctx->pc = 0x1171B0u;
            return;
        }
    }
    ctx->pc = 0x1171FCu;
    // 0x1171fc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1171fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x117200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117204: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x117204u;
    {
        const bool branch_taken_0x117204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117204u;
        // 0x117208: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117204) {
            ctx->pc = 0x11724Cu;
            return;
        }
    }
    ctx->pc = 0x11720Cu;
}
