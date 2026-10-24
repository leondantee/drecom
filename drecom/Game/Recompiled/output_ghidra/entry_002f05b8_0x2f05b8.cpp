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

// Function: entry_002f05b8
// Address: 0x2f05b8 - 0x2f05d0
void entry_002f05b8_0x2f05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f05b8_0x2f05b8");
#endif

    ctx->pc = 0x2f05b8u;

    // 0x2f05b8: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x2f05b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f05bc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2F05BCu;
    {
        const bool branch_taken_0x2f05bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f05bc) {
            ctx->pc = 0x2F0548u;
            return;
        }
    }
    ctx->pc = 0x2F05C4u;
    // 0x2f05c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2f05c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f05c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F05C8u;
    {
        const bool branch_taken_0x2f05c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f05c8) {
            ctx->pc = 0x2F0618u;
            return;
        }
    }
    ctx->pc = 0x2F05D0u;
}
