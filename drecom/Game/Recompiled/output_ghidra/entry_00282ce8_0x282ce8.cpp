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

// Function: entry_00282ce8
// Address: 0x282ce8 - 0x282d00
void entry_00282ce8_0x282ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282ce8_0x282ce8");
#endif

    ctx->pc = 0x282ce8u;

    // 0x282ce8: 0x2e0200b4  sltiu       $v0, $s0, 0xB4
    ctx->pc = 0x282ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x282cec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x282CECu;
    {
        const bool branch_taken_0x282cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282cec) {
            ctx->pc = 0x282CB8u;
            return;
        }
    }
    ctx->pc = 0x282CF4u;
    // 0x282cf4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x282cf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282cf8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x282CF8u;
    {
        const bool branch_taken_0x282cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282cf8) {
            ctx->pc = 0x282DC8u;
            return;
        }
    }
    ctx->pc = 0x282D00u;
}
