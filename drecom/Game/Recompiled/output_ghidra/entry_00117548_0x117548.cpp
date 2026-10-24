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

// Function: entry_00117548
// Address: 0x117548 - 0x11755c
void entry_00117548_0x117548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117548_0x117548");
#endif

    ctx->pc = 0x117548u;

    // 0x117548: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x117548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x11754c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11754Cu;
    {
        const bool branch_taken_0x11754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11754Cu;
        // 0x117550: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11754c) {
            ctx->pc = 0x11755Cu;
            return;
        }
    }
    ctx->pc = 0x117554u;
    // 0x117554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117554u;
    {
        const bool branch_taken_0x117554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117554u;
        // 0x117558: 0x2446007c  addiu       $a2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117554) {
            ctx->pc = 0x117560u;
            return;
        }
    }
    ctx->pc = 0x11755Cu;
}
