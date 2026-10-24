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

// Function: entry_00213d70
// Address: 0x213d70 - 0x213d9c
void entry_00213d70_0x213d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213d70_0x213d70");
#endif

    ctx->pc = 0x213d70u;

    // 0x213d70: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x213D70u;
    {
        const bool branch_taken_0x213d70 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x213D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D70u;
        // 0x213d74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d70) {
            ctx->pc = 0x213EB0u;
            return;
        }
    }
    ctx->pc = 0x213D78u;
    // 0x213d78: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x213D78u;
    {
        const bool branch_taken_0x213d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d78) {
            ctx->pc = 0x213D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213D78u;
            // 0x213d7c: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213DE0u;
            return;
        }
    }
    ctx->pc = 0x213D80u;
    // 0x213d80: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x213d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213d84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x213d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x213d88: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x213d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x213d8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213D8Cu;
    {
        const bool branch_taken_0x213d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D8Cu;
        // 0x213d90: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d8c) {
            ctx->pc = 0x213D9Cu;
            return;
        }
    }
    ctx->pc = 0x213D94u;
    // 0x213d94: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x213D94u;
    SET_GPR_U32(ctx, 31, 0x213D9Cu);
    ctx->pc = 0x213D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D94u;
    // 0x213d98: 0x24840ed0  addiu       $a0, $a0, 0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x213D94u, 0x213D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D9Cu;
}
