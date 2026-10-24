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

// Function: entry_0011e8dc
// Address: 0x11e8dc - 0x11e8e8
void entry_0011e8dc_0x11e8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e8dc_0x11e8dc");
#endif

    ctx->pc = 0x11e8dcu;

    // 0x11e8dc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11e8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e8e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E8E0u;
    {
        const bool branch_taken_0x11e8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8E0u;
        // 0x11e8e4: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8e0) {
            ctx->pc = 0x11E8F0u;
            return;
        }
    }
    ctx->pc = 0x11E8E8u;
}
