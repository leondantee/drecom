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

// Function: entry_0010e8a4
// Address: 0x10e8a4 - 0x10e8b0
void entry_0010e8a4_0x10e8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e8a4_0x10e8a4");
#endif

    ctx->pc = 0x10e8a4u;

    // 0x10e8a4: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10e8a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E8A8u;
    {
        const bool branch_taken_0x10e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8A8u;
        // 0x10e8ac: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8a8) {
            ctx->pc = 0x10E8B8u;
            return;
        }
    }
    ctx->pc = 0x10E8B0u;
}
