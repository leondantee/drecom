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

// Function: entry_0011c260
// Address: 0x11c260 - 0x11c278
void entry_0011c260_0x11c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c260_0x11c260");
#endif

    ctx->pc = 0x11c260u;

    // 0x11c260: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c264: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c268: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C268u;
    {
        const bool branch_taken_0x11c268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C268u;
        // 0x11c26c: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c268) {
            ctx->pc = 0x11C218u;
            return;
        }
    }
    ctx->pc = 0x11C270u;
    // 0x11c270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C270u;
    {
        const bool branch_taken_0x11c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C270u;
        // 0x11c274: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c270) {
            ctx->pc = 0x11C280u;
            return;
        }
    }
    ctx->pc = 0x11C278u;
}
