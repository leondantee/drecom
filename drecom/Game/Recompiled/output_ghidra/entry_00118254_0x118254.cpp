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

// Function: entry_00118254
// Address: 0x118254 - 0x118268
void entry_00118254_0x118254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118254_0x118254");
#endif

    ctx->pc = 0x118254u;

    // 0x118254: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x118254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x118258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118258u;
    {
        const bool branch_taken_0x118258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118258u;
        // 0x11825c: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118258) {
            ctx->pc = 0x118268u;
            return;
        }
    }
    ctx->pc = 0x118260u;
    // 0x118260: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x118260u;
    {
        const bool branch_taken_0x118260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118260u;
        // 0x118264: 0x244b0077  addiu       $t3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118260) {
            ctx->pc = 0x118280u;
            return;
        }
    }
    ctx->pc = 0x118268u;
}
