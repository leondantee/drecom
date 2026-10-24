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

// Function: entry_0011f5a4
// Address: 0x11f5a4 - 0x11f5b0
void entry_0011f5a4_0x11f5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f5a4_0x11f5a4");
#endif

    ctx->pc = 0x11f5a4u;

    // 0x11f5a4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11f5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f5a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F5A8u;
    {
        const bool branch_taken_0x11f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5A8u;
        // 0x11f5ac: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5a8) {
            ctx->pc = 0x11F5B8u;
            return;
        }
    }
    ctx->pc = 0x11F5B0u;
}
