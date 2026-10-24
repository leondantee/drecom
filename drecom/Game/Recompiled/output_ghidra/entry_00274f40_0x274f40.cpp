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

// Function: entry_00274f40
// Address: 0x274f40 - 0x274f58
void entry_00274f40_0x274f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274f40_0x274f40");
#endif

    ctx->pc = 0x274f40u;

    // 0x274f40: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x274f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x274f44: 0x1460ff6c  bnez        $v1, . + 4 + (-0x94 << 2)
    ctx->pc = 0x274F44u;
    {
        const bool branch_taken_0x274f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274f44) {
            ctx->pc = 0x274CF8u;
            return;
        }
    }
    ctx->pc = 0x274F4Cu;
    // 0x274f4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274f4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274f50: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x274F50u;
    {
        const bool branch_taken_0x274f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f50) {
            ctx->pc = 0x2751C8u;
            return;
        }
    }
    ctx->pc = 0x274F58u;
}
