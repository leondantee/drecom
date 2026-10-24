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

// Function: entry_0011e73c
// Address: 0x11e73c - 0x11e76c
void entry_0011e73c_0x11e73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e73c_0x11e73c");
#endif

    ctx->pc = 0x11e73cu;

    // 0x11e73c: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11E73Cu;
    {
        const bool branch_taken_0x11e73c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e73c) {
            ctx->pc = 0x11E7C0u;
            return;
        }
    }
    ctx->pc = 0x11E744u;
    // 0x11e744: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x11e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11e748: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x11e748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x11e74c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E74Cu;
    {
        const bool branch_taken_0x11e74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E74Cu;
        // 0x11e750: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e74c) {
            ctx->pc = 0x11E76Cu;
            return;
        }
    }
    ctx->pc = 0x11E754u;
    // 0x11e754: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11e754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e758: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x11e758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x11e75c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E75Cu;
    {
        const bool branch_taken_0x11e75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E75Cu;
        // 0x11e760: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e75c) {
            ctx->pc = 0x11E7BCu;
            return;
        }
    }
    ctx->pc = 0x11E764u;
    // 0x11e764: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11E764u;
    {
        const bool branch_taken_0x11e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E764u;
        // 0x11e768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e764) {
            ctx->pc = 0x11E7BCu;
            return;
        }
    }
    ctx->pc = 0x11E76Cu;
}
