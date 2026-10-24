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

// Function: entry_00118438
// Address: 0x118438 - 0x118448
void entry_00118438_0x118438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118438_0x118438");
#endif

    ctx->pc = 0x118438u;

    // 0x118438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118438u;
    {
        const bool branch_taken_0x118438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118438u;
        // 0x11843c: 0x81182  srl         $v0, $t0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118438) {
            ctx->pc = 0x118448u;
            return;
        }
    }
    ctx->pc = 0x118440u;
    // 0x118440: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x118440u;
    {
        const bool branch_taken_0x118440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118440u;
        // 0x118444: 0x24460038  addiu       $a2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118440) {
            ctx->pc = 0x118494u;
            return;
        }
    }
    ctx->pc = 0x118448u;
}
