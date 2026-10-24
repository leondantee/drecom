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

// Function: entry_0011bea0
// Address: 0x11bea0 - 0x11beb0
void entry_0011bea0_0x11bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bea0_0x11bea0");
#endif

    ctx->pc = 0x11bea0u;

    // 0x11bea0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11bea4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11bea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11bea8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11BEA8u;
    {
        const bool branch_taken_0x11bea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEA8u;
        // 0x11beac: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bea8) {
            ctx->pc = 0x11BE58u;
            return;
        }
    }
    ctx->pc = 0x11BEB0u;
}
