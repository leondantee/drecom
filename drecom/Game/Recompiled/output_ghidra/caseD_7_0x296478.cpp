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

// Function: caseD_7
// Address: 0x296478 - 0x296488
void caseD_7_0x296478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x296478");
#endif

    ctx->pc = 0x296478u;

    // 0x296478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29647c: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x29647cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x296480: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x296480u;
    {
        const bool branch_taken_0x296480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296480) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296488u;
}
