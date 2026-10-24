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

// Function: entry_00106400
// Address: 0x106400 - 0x10641c
void entry_00106400_0x106400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106400_0x106400");
#endif

    ctx->pc = 0x106400u;

    // 0x106400: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x106400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x106404: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106408: 0x8c823dac  lw          $v0, 0x3DAC($a0)
    ctx->pc = 0x106408u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x10640c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10640Cu;
    {
        const bool branch_taken_0x10640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10640c) {
            ctx->pc = 0x106410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10640Cu;
            // 0x106410: 0xacab0000  sw          $t3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10641Cu;
            return;
        }
    }
    ctx->pc = 0x106414u;
    // 0x106414: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106414u;
    {
        const bool branch_taken_0x106414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106414u;
        // 0x106418: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106414) {
            ctx->pc = 0x106430u;
            return;
        }
    }
    ctx->pc = 0x10641Cu;
}
