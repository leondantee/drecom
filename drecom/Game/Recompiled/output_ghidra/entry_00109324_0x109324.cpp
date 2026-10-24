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

// Function: entry_00109324
// Address: 0x109324 - 0x109334
void entry_00109324_0x109324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109324_0x109324");
#endif

    ctx->pc = 0x109324u;

    // 0x109324: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x109324u;
    {
        const bool branch_taken_0x109324 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x109324) {
            ctx->pc = 0x109328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109324u;
            // 0x109328: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            return;
        }
    }
    ctx->pc = 0x10932Cu;
    // 0x10932c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10932Cu;
    {
        const bool branch_taken_0x10932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10932Cu;
        // 0x109330: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10932c) {
            ctx->pc = 0x109374u;
            return;
        }
    }
    ctx->pc = 0x109334u;
}
