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

// Function: entry_002fbfb0
// Address: 0x2fbfb0 - 0x2fbfc0
void entry_002fbfb0_0x2fbfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbfb0_0x2fbfb0");
#endif

    ctx->pc = 0x2fbfb0u;

    // 0x2fbfb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fbfb4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fbfb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbfb8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FBFB8u;
    {
        const bool branch_taken_0x2fbfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbfb8) {
            ctx->pc = 0x2FC120u;
            return;
        }
    }
    ctx->pc = 0x2FBFC0u;
}
