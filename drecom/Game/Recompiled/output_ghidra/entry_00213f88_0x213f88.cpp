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

// Function: entry_00213f88
// Address: 0x213f88 - 0x213fa4
void entry_00213f88_0x213f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213f88_0x213f88");
#endif

    ctx->pc = 0x213f88u;

    // 0x213f88: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x213f88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x213f8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x213f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x213f90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x213f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x213f94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x213f98: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x213f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x213f9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x213F9Cu;
    {
        const bool branch_taken_0x213f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F9Cu;
        // 0x213fa0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f9c) {
            ctx->pc = 0x213F50u;
            return;
        }
    }
    ctx->pc = 0x213FA4u;
}
