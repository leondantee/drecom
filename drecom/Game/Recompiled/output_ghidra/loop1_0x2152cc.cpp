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

// Function: loop1
// Address: 0x2152cc - 0x2152e8
void loop1_0x2152cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loop1_0x2152cc");
#endif

    ctx->pc = 0x2152ccu;

label_2152cc:
    // 0x2152cc: 0xf  sync
    ctx->pc = 0x2152ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2152d0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x2152d0u;
    // CACHE instruction (ignored)
    // 0x2152d4: 0xf  sync
    ctx->pc = 0x2152d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2152d8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2152d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2152dc: 0x0  nop
    ctx->pc = 0x2152dcu;
    // NOP
    // 0x2152e0: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2152E0u;
    {
        const bool branch_taken_0x2152e0 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2152E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152E0u;
        // 0x2152e4: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152e0) {
            ctx->pc = 0x2152CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2152cc;
        }
    }
    ctx->pc = 0x2152E8u;
}
