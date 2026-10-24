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

// Function: entry_0010c970
// Address: 0x10c970 - 0x10c97c
void entry_0010c970_0x10c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c970_0x10c970");
#endif

    ctx->pc = 0x10c970u;

    // 0x10c970: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x10c970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C974u;
    {
        const bool branch_taken_0x10c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C974u;
        // 0x10c978: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c974) {
            ctx->pc = 0x10C988u;
            return;
        }
    }
    ctx->pc = 0x10C97Cu;
}
