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

// Function: caseD_2
// Address: 0x100d4c - 0x100d58
void caseD_2_0x100d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x100d4c");
#endif

    ctx->pc = 0x100d4cu;

    // 0x100d4c: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x100d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100d50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100D50u;
    {
        const bool branch_taken_0x100d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D50u;
        // 0x100d54: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d50) {
            ctx->pc = 0x100D6Cu;
            return;
        }
    }
    ctx->pc = 0x100D58u;
}
