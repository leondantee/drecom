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

// Function: entry_00118468
// Address: 0x118468 - 0x11847c
void entry_00118468_0x118468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118468_0x118468");
#endif

    ctx->pc = 0x118468u;

    // 0x118468: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x118468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x11846c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11846Cu;
    {
        const bool branch_taken_0x11846c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11846Cu;
        // 0x118470: 0x813c2  srl         $v0, $t0, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11846c) {
            ctx->pc = 0x11847Cu;
            return;
        }
    }
    ctx->pc = 0x118474u;
    // 0x118474: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x118474u;
    {
        const bool branch_taken_0x118474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118474u;
        // 0x118478: 0x24460077  addiu       $a2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118474) {
            ctx->pc = 0x118494u;
            return;
        }
    }
    ctx->pc = 0x11847Cu;
}
