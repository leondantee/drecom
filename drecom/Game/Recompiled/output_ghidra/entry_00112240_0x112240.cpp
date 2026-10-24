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

// Function: entry_00112240
// Address: 0x112240 - 0x112250
void entry_00112240_0x112240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112240_0x112240");
#endif

    ctx->pc = 0x112240u;

    // 0x112240: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x112240u;
    {
        const bool branch_taken_0x112240 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x112244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112240u;
        // 0x112244: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112240) {
            ctx->pc = 0x112250u;
            return;
        }
    }
    ctx->pc = 0x112248u;
    // 0x112248: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x112248u;
    {
        const bool branch_taken_0x112248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112248u;
        // 0x11224c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112248) {
            ctx->pc = 0x112274u;
            return;
        }
    }
    ctx->pc = 0x112250u;
}
