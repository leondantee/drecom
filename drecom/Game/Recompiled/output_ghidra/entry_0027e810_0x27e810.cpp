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

// Function: entry_0027e810
// Address: 0x27e810 - 0x27e828
void entry_0027e810_0x27e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e810_0x27e810");
#endif

    ctx->pc = 0x27e810u;

    // 0x27e810: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x27e810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27e814: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27E814u;
    {
        const bool branch_taken_0x27e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e814) {
            ctx->pc = 0x27E7A8u;
            return;
        }
    }
    ctx->pc = 0x27E81Cu;
    // 0x27e81c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e81cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e820: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27E820u;
    {
        const bool branch_taken_0x27e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e820) {
            ctx->pc = 0x27E890u;
            return;
        }
    }
    ctx->pc = 0x27E828u;
}
