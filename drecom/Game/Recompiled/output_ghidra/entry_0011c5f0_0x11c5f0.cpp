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

// Function: entry_0011c5f0
// Address: 0x11c5f0 - 0x11c608
void entry_0011c5f0_0x11c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c5f0_0x11c5f0");
#endif

    ctx->pc = 0x11c5f0u;

    // 0x11c5f0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x11c5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c5f4: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x11C5F4u;
    {
        const bool branch_taken_0x11c5f4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5F4u;
        // 0x11c5f8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5f4) {
            ctx->pc = 0x11C6DCu;
            return;
        }
    }
    ctx->pc = 0x11C5FCu;
    // 0x11c5fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11C5FCu;
    {
        const bool branch_taken_0x11c5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5FCu;
        // 0x11c600: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5fc) {
            ctx->pc = 0x11C668u;
            return;
        }
    }
    ctx->pc = 0x11C604u;
    // 0x11c604: 0x0  nop
    ctx->pc = 0x11c604u;
    // NOP
    ctx->pc = 0x11c608u;
}
