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

// Function: entry_0011349c
// Address: 0x11349c - 0x1134a8
void entry_0011349c_0x11349c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011349c_0x11349c");
#endif

    ctx->pc = 0x11349cu;

    // 0x11349c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x11349Cu;
    {
        const bool branch_taken_0x11349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11349c) {
            ctx->pc = 0x1134A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11349Cu;
            // 0x1134a0: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113504u;
            return;
        }
    }
    ctx->pc = 0x1134A4u;
    // 0x1134a4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1134a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x1134a8u;
}
