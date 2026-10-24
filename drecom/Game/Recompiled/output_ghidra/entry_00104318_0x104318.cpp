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

// Function: entry_00104318
// Address: 0x104318 - 0x10432c
void entry_00104318_0x104318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104318_0x104318");
#endif

    ctx->pc = 0x104318u;

    // 0x104318: 0x527e0004  beql        $s3, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x104318u;
    {
        const bool branch_taken_0x104318 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        if (branch_taken_0x104318) {
            ctx->pc = 0x10431Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104318u;
            // 0x10431c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10432Cu;
            return;
        }
    }
    ctx->pc = 0x104320u;
    // 0x104320: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x104320u;
    {
        const bool branch_taken_0x104320 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x104324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104320u;
        // 0x104324: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104320) {
            ctx->pc = 0x104360u;
            return;
        }
    }
    ctx->pc = 0x104328u;
    // 0x104328: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x104328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x10432cu;
}
