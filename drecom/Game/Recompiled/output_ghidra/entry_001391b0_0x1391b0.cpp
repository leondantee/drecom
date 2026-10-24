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

// Function: entry_001391b0
// Address: 0x1391b0 - 0x1391c8
void entry_001391b0_0x1391b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001391b0_0x1391b0");
#endif

    ctx->pc = 0x1391b0u;

    // 0x1391b0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1391b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1391b4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1391B4u;
    {
        const bool branch_taken_0x1391b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1391b4) {
            ctx->pc = 0x139178u;
            return;
        }
    }
    ctx->pc = 0x1391BCu;
    // 0x1391bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1391bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1391c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1391C0u;
    {
        const bool branch_taken_0x1391c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391c0) {
            ctx->pc = 0x139200u;
            return;
        }
    }
    ctx->pc = 0x1391C8u;
}
