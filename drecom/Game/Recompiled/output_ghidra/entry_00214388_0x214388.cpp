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

// Function: entry_00214388
// Address: 0x214388 - 0x214398
void entry_00214388_0x214388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214388_0x214388");
#endif

    ctx->pc = 0x214388u;

    // 0x214388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21438c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21438Cu;
    {
        const bool branch_taken_0x21438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21438c) {
            ctx->pc = 0x214390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21438Cu;
            // 0x214390: 0x28a20035  slti        $v0, $a1, 0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2143B8u;
            return;
        }
    }
    ctx->pc = 0x214394u;
    // 0x214394: 0x0  nop
    ctx->pc = 0x214394u;
    // NOP
    ctx->pc = 0x214398u;
}
