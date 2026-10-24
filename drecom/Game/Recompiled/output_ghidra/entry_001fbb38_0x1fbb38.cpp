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

// Function: entry_001fbb38
// Address: 0x1fbb38 - 0x1fbb48
void entry_001fbb38_0x1fbb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb38_0x1fbb38");
#endif

    ctx->pc = 0x1fbb38u;

    // 0x1fbb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb3c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fbb3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fbb40: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FBB40u;
    {
        const bool branch_taken_0x1fbb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb40) {
            ctx->pc = 0x1FBBF8u;
            return;
        }
    }
    ctx->pc = 0x1FBB48u;
}
