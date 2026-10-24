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

// Function: entry_0011320c
// Address: 0x11320c - 0x113220
void entry_0011320c_0x11320c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011320c_0x11320c");
#endif

    ctx->pc = 0x11320cu;

    // 0x11320c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11320cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113210: 0x682002c  bltzl       $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x113210u;
    {
        const bool branch_taken_0x113210 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x113210) {
            ctx->pc = 0x113214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113210u;
            // 0x113214: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1132C4u;
            return;
        }
    }
    ctx->pc = 0x113218u;
    // 0x113218: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11321c: 0x0  nop
    ctx->pc = 0x11321cu;
    // NOP
    ctx->pc = 0x113220u;
}
