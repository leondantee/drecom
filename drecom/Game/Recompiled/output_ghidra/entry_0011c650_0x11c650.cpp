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

// Function: entry_0011c650
// Address: 0x11c650 - 0x11c668
void entry_0011c650_0x11c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c650_0x11c650");
#endif

    ctx->pc = 0x11c650u;

    // 0x11c650: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c654: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c658: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C658u;
    {
        const bool branch_taken_0x11c658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C658u;
        // 0x11c65c: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c658) {
            ctx->pc = 0x11C608u;
            return;
        }
    }
    ctx->pc = 0x11C660u;
    // 0x11c660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C660u;
    {
        const bool branch_taken_0x11c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C660u;
        // 0x11c664: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c660) {
            ctx->pc = 0x11C670u;
            return;
        }
    }
    ctx->pc = 0x11C668u;
}
