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

// Function: caseD_2
// Address: 0x137bd8 - 0x137be4
void caseD_2_0x137bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x137bd8");
#endif

    ctx->pc = 0x137bd8u;

    // 0x137bd8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137bd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137bdc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x137BDCu;
    {
        const bool branch_taken_0x137bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bdc) {
            ctx->pc = 0x137C18u;
            return;
        }
    }
    ctx->pc = 0x137BE4u;
}
