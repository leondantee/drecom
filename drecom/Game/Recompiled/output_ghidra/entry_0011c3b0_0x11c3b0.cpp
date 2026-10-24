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

// Function: entry_0011c3b0
// Address: 0x11c3b0 - 0x11c3c8
void entry_0011c3b0_0x11c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c3b0_0x11c3b0");
#endif

    ctx->pc = 0x11c3b0u;

    // 0x11c3b0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x11c3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x11c3b4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11c3b8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C3B8u;
    {
        const bool branch_taken_0x11c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3B8u;
        // 0x11c3bc: 0x26c2db30  addiu       $v0, $s6, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3b8) {
            ctx->pc = 0x11C368u;
            return;
        }
    }
    ctx->pc = 0x11C3C0u;
    // 0x11c3c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C3C0u;
    {
        const bool branch_taken_0x11c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3C0u;
        // 0x11c3c4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3c0) {
            ctx->pc = 0x11C3D0u;
            return;
        }
    }
    ctx->pc = 0x11C3C8u;
}
