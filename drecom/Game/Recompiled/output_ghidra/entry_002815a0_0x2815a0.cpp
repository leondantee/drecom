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

// Function: entry_002815a0
// Address: 0x2815a0 - 0x2815b4
void entry_002815a0_0x2815a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002815a0_0x2815a0");
#endif

    ctx->pc = 0x2815a0u;

    // 0x2815a0: 0x1200ffad  beqz        $s0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2815A0u;
    {
        const bool branch_taken_0x2815a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815a0) {
            ctx->pc = 0x281458u;
            return;
        }
    }
    ctx->pc = 0x2815A8u;
    // 0x2815a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2815a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2815ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2815ACu;
    {
        const bool branch_taken_0x2815ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815ac) {
            ctx->pc = 0x2816D8u;
            return;
        }
    }
    ctx->pc = 0x2815B4u;
}
