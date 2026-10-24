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

// Function: entry_00107ca0
// Address: 0x107ca0 - 0x107ca8
void entry_00107ca0_0x107ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ca0_0x107ca0");
#endif

    ctx->pc = 0x107ca0u;

    // 0x107ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107CA0u;
    {
        const bool branch_taken_0x107ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA0u;
        // 0x107ca4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ca0) {
            ctx->pc = 0x107CB4u;
            return;
        }
    }
    ctx->pc = 0x107CA8u;
}
