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

// Function: entry_0011174c
// Address: 0x11174c - 0x111764
void entry_0011174c_0x11174c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011174c_0x11174c");
#endif

    ctx->pc = 0x11174cu;

    // 0x11174c: 0xb31024  and         $v0, $a1, $s3
    ctx->pc = 0x11174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x111750: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x111750u;
    {
        const bool branch_taken_0x111750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x111754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111750u;
        // 0x111754: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111750) {
            ctx->pc = 0x111764u;
            return;
        }
    }
    ctx->pc = 0x111758u;
    // 0x111758: 0x1731824  and         $v1, $t3, $s3
    ctx->pc = 0x111758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x11175c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x11175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x111760: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x111760u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    ctx->pc = 0x111764u;
}
