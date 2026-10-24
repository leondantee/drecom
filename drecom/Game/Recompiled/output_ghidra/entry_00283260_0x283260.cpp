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

// Function: entry_00283260
// Address: 0x283260 - 0x283278
void entry_00283260_0x283260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283260_0x283260");
#endif

    ctx->pc = 0x283260u;

    // 0x283260: 0x2e030022  sltiu       $v1, $s0, 0x22
    ctx->pc = 0x283260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x283264: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x283264u;
    {
        const bool branch_taken_0x283264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283264) {
            ctx->pc = 0x283208u;
            return;
        }
    }
    ctx->pc = 0x28326Cu;
    // 0x28326c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28326cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283270: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x283270u;
    {
        const bool branch_taken_0x283270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283270) {
            ctx->pc = 0x283320u;
            return;
        }
    }
    ctx->pc = 0x283278u;
}
