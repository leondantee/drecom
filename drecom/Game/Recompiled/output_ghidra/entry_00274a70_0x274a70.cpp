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

// Function: entry_00274a70
// Address: 0x274a70 - 0x274a88
void entry_00274a70_0x274a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274a70_0x274a70");
#endif

    ctx->pc = 0x274a70u;

    // 0x274a70: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x274a70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x274a74: 0x1460fde3  bnez        $v1, . + 4 + (-0x21D << 2)
    ctx->pc = 0x274A74u;
    {
        const bool branch_taken_0x274a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274a74) {
            ctx->pc = 0x274204u;
            return;
        }
    }
    ctx->pc = 0x274A7Cu;
    // 0x274a7c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274a7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274a80: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x274A80u;
    {
        const bool branch_taken_0x274a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a80) {
            ctx->pc = 0x274BA8u;
            return;
        }
    }
    ctx->pc = 0x274A88u;
}
