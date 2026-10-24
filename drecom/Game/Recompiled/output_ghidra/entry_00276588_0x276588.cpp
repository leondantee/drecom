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

// Function: entry_00276588
// Address: 0x276588 - 0x2765a0
void entry_00276588_0x276588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276588_0x276588");
#endif

    ctx->pc = 0x276588u;

    // 0x276588: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x276588u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27658c: 0x1460fded  bnez        $v1, . + 4 + (-0x213 << 2)
    ctx->pc = 0x27658Cu;
    {
        const bool branch_taken_0x27658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27658c) {
            ctx->pc = 0x275D44u;
            return;
        }
    }
    ctx->pc = 0x276594u;
    // 0x276594: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276594u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276598: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x276598u;
    {
        const bool branch_taken_0x276598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276598) {
            ctx->pc = 0x276718u;
            return;
        }
    }
    ctx->pc = 0x2765A0u;
}
