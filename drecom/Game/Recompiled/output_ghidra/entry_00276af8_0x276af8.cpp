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

// Function: entry_00276af8
// Address: 0x276af8 - 0x276b10
void entry_00276af8_0x276af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276af8_0x276af8");
#endif

    ctx->pc = 0x276af8u;

    // 0x276af8: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x276af8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x276afc: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x276AFCu;
    {
        const bool branch_taken_0x276afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276afc) {
            ctx->pc = 0x2768C0u;
            return;
        }
    }
    ctx->pc = 0x276B04u;
    // 0x276b04: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276b04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276b08: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x276B08u;
    {
        const bool branch_taken_0x276b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276b08) {
            ctx->pc = 0x276D50u;
            return;
        }
    }
    ctx->pc = 0x276B10u;
}
