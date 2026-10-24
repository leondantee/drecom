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

// Function: entry_00216f3c
// Address: 0x216f3c - 0x216f48
void entry_00216f3c_0x216f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216f3c_0x216f3c");
#endif

    ctx->pc = 0x216f3cu;

    // 0x216f3c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x216f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x216f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216F40u;
    {
        const bool branch_taken_0x216f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F40u;
        // 0x216f44: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f40) {
            ctx->pc = 0x216F50u;
            return;
        }
    }
    ctx->pc = 0x216F48u;
}
