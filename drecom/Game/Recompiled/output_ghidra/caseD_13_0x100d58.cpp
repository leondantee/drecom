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

// Function: caseD_13
// Address: 0x100d58 - 0x100d64
void caseD_13_0x100d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x100d58");
#endif

    ctx->pc = 0x100d58u;

    // 0x100d58: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x100d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100d5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100D5Cu;
    {
        const bool branch_taken_0x100d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D5Cu;
        // 0x100d60: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d5c) {
            ctx->pc = 0x100D6Cu;
            return;
        }
    }
    ctx->pc = 0x100D64u;
}
