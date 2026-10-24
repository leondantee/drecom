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

// Function: entry_0011c120
// Address: 0x11c120 - 0x11c138
void entry_0011c120_0x11c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c120_0x11c120");
#endif

    ctx->pc = 0x11c120u;

    // 0x11c120: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c124: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c128: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C128u;
    {
        const bool branch_taken_0x11c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C128u;
        // 0x11c12c: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c128) {
            ctx->pc = 0x11C0D8u;
            return;
        }
    }
    ctx->pc = 0x11C130u;
    // 0x11c130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C130u;
    {
        const bool branch_taken_0x11c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C130u;
        // 0x11c134: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c130) {
            ctx->pc = 0x11C140u;
            return;
        }
    }
    ctx->pc = 0x11C138u;
}
