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

// Function: entry_00117534
// Address: 0x117534 - 0x117548
void entry_00117534_0x117534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117534_0x117534");
#endif

    ctx->pc = 0x117534u;

    // 0x117534: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x117534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x117538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117538u;
    {
        const bool branch_taken_0x117538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117538u;
        // 0x11753c: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117538) {
            ctx->pc = 0x117548u;
            return;
        }
    }
    ctx->pc = 0x117540u;
    // 0x117540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x117540u;
    {
        const bool branch_taken_0x117540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117540u;
        // 0x117544: 0x24460077  addiu       $a2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117540) {
            ctx->pc = 0x117560u;
            return;
        }
    }
    ctx->pc = 0x117548u;
}
