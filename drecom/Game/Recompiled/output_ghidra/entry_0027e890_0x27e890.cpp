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

// Function: entry_0027e890
// Address: 0x27e890 - 0x27e8a8
void entry_0027e890_0x27e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e890_0x27e890");
#endif

    ctx->pc = 0x27e890u;

    // 0x27e890: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x27e890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27e894: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27E894u;
    {
        const bool branch_taken_0x27e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e894) {
            ctx->pc = 0x27E828u;
            return;
        }
    }
    ctx->pc = 0x27E89Cu;
    // 0x27e89c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e89cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e8a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27E8A0u;
    {
        const bool branch_taken_0x27e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8a0) {
            ctx->pc = 0x27E8F0u;
            return;
        }
    }
    ctx->pc = 0x27E8A8u;
}
