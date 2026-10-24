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

// Function: entry_0010665c
// Address: 0x10665c - 0x10667c
void entry_0010665c_0x10665c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010665c_0x10665c");
#endif

    ctx->pc = 0x10665cu;

    // 0x10665c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10665Cu;
    {
        const bool branch_taken_0x10665c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10665Cu;
        // 0x106660: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10665c) {
            ctx->pc = 0x10667Cu;
            return;
        }
    }
    ctx->pc = 0x106664u;
    // 0x106664: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x106664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x106668: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x106668u;
    {
        const bool branch_taken_0x106668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106668u;
        // 0x10666c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106668) {
            ctx->pc = 0x1066F4u;
            return;
        }
    }
    ctx->pc = 0x106670u;
    // 0x106670: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x106670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x106674: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x106674u;
    {
        const bool branch_taken_0x106674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106674u;
        // 0x106678: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106674) {
            ctx->pc = 0x1066F4u;
            return;
        }
    }
    ctx->pc = 0x10667Cu;
}
