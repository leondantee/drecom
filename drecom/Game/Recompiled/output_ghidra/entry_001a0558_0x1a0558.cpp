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

// Function: entry_001a0558
// Address: 0x1a0558 - 0x1a0568
void entry_001a0558_0x1a0558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0558_0x1a0558");
#endif

    ctx->pc = 0x1a0558u;

    // 0x1a0558: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x1a0558u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a055c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1a055cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a0560: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0560u;
    {
        const bool branch_taken_0x1a0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0560) {
            ctx->pc = 0x1A0544u;
            return;
        }
    }
    ctx->pc = 0x1A0568u;
}
