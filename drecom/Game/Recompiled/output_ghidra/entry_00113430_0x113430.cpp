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

// Function: entry_00113430
// Address: 0x113430 - 0x113440
void entry_00113430_0x113430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113430_0x113430");
#endif

    ctx->pc = 0x113430u;

    // 0x113430: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x113430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113434: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x113434u;
    {
        const bool branch_taken_0x113434 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x113438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113434u;
        // 0x113438: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113434) {
            ctx->pc = 0x11349Cu;
            return;
        }
    }
    ctx->pc = 0x11343Cu;
    // 0x11343c: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11343cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x113440u;
}
