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

// Function: caseD_45
// Address: 0x11b784 - 0x11b798
void caseD_45_0x11b784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_45_0x11b784");
#endif

    ctx->pc = 0x11b784u;

    // 0x11b784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b788: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B788u;
    {
        const bool branch_taken_0x11b788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B788u;
        // 0x11b78c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b788) {
            ctx->pc = 0x11B798u;
            return;
        }
    }
    ctx->pc = 0x11B790u;
    // 0x11b790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B790u;
    {
        const bool branch_taken_0x11b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B790u;
        // 0x11b794: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b790) {
            ctx->pc = 0x11B7B0u;
            return;
        }
    }
    ctx->pc = 0x11B798u;
}
