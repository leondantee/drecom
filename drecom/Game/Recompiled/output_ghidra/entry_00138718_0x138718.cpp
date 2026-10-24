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

// Function: entry_00138718
// Address: 0x138718 - 0x138730
void entry_00138718_0x138718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138718_0x138718");
#endif

    ctx->pc = 0x138718u;

    // 0x138718: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13871c: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x13871Cu;
    {
        const bool branch_taken_0x13871c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13871c) {
            ctx->pc = 0x138618u;
            return;
        }
    }
    ctx->pc = 0x138724u;
    // 0x138724: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138724u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138728: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x138728u;
    {
        const bool branch_taken_0x138728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138728) {
            ctx->pc = 0x138830u;
            return;
        }
    }
    ctx->pc = 0x138730u;
}
