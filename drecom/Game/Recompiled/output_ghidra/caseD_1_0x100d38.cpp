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

// Function: caseD_1
// Address: 0x100d38 - 0x100d4c
void caseD_1_0x100d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x100d38");
#endif

    ctx->pc = 0x100d38u;

    // 0x100d38: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x100d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x100d3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x100d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x100d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100d44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x100D44u;
    {
        const bool branch_taken_0x100d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D44u;
        // 0x100d48: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d44) {
            ctx->pc = 0x100D6Cu;
            return;
        }
    }
    ctx->pc = 0x100D4Cu;
}
