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

// Function: entry_00138e60
// Address: 0x138e60 - 0x138e78
void entry_00138e60_0x138e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138e60_0x138e60");
#endif

    ctx->pc = 0x138e60u;

    // 0x138e60: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138e64: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x138E64u;
    {
        const bool branch_taken_0x138e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138e64) {
            ctx->pc = 0x138D54u;
            return;
        }
    }
    ctx->pc = 0x138E6Cu;
    // 0x138e6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138e6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138e70: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138E70u;
    {
        const bool branch_taken_0x138e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138e70) {
            ctx->pc = 0x138F80u;
            return;
        }
    }
    ctx->pc = 0x138E78u;
}
