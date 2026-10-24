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

// Function: caseD_3
// Address: 0x100d6c - 0x100d8c
void caseD_3_0x100d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x100d6c");
#endif

    switch (ctx->pc) {
        case 0x100d84u: goto label_100d84;
        default: break;
    }

    ctx->pc = 0x100d6cu;

    // 0x100d6c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x100d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x100d70: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x100d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x100d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100D74u;
    {
        const bool branch_taken_0x100d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D74u;
        // 0x100d78: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d74) {
            ctx->pc = 0x100D8Cu;
            return;
        }
    }
    ctx->pc = 0x100D7Cu;
    // 0x100d7c: 0xc046760  jal         func_119D80
    ctx->pc = 0x100D7Cu;
    SET_GPR_U32(ctx, 31, 0x100D84u);
    ctx->pc = 0x100D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D7Cu;
    // 0x100d80: 0x2484c1d0  addiu       $a0, $a0, -0x3E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100D84u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100D84u) { return; }
    ctx->pc = 0x100D84u;
label_100d84:
    // 0x100d84: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x100D84u;
    {
        const bool branch_taken_0x100d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D84u;
        // 0x100d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d84) {
            ctx->pc = 0x100E98u;
            return;
        }
    }
    ctx->pc = 0x100D8Cu;
}
