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

// Function: entry_00113a28
// Address: 0x113a28 - 0x113a38
void entry_00113a28_0x113a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113a28_0x113a28");
#endif

    ctx->pc = 0x113a28u;

    // 0x113a28: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x113A28u;
    {
        const bool branch_taken_0x113a28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A28u;
        // 0x113a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a28) {
            ctx->pc = 0x113AB0u;
            return;
        }
    }
    ctx->pc = 0x113A30u;
    // 0x113a30: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x113a30u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x113a34: 0x0  nop
    ctx->pc = 0x113a34u;
    // NOP
    ctx->pc = 0x113a38u;
}
