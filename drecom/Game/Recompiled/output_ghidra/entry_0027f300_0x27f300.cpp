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

// Function: entry_0027f300
// Address: 0x27f300 - 0x27f310
void entry_0027f300_0x27f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f300_0x27f300");
#endif

    ctx->pc = 0x27f300u;

    // 0x27f300: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x27f300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27f304: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x27F304u;
    {
        const bool branch_taken_0x27f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f304) {
            ctx->pc = 0x27F230u;
            return;
        }
    }
    ctx->pc = 0x27F30Cu;
    // 0x27f30c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x27f310u;
}
