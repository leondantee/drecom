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

// Function: entry_001516e0
// Address: 0x1516e0 - 0x1516f0
void entry_001516e0_0x1516e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001516e0_0x1516e0");
#endif

    ctx->pc = 0x1516e0u;

    // 0x1516e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1516e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1516e4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1516e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1516e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1516E8u;
    {
        const bool branch_taken_0x1516e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1516e8) {
            ctx->pc = 0x1516F8u;
            return;
        }
    }
    ctx->pc = 0x1516F0u;
}
