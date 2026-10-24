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

// Function: entry_00140d8c
// Address: 0x140d8c - 0x140da0
void entry_00140d8c_0x140d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140d8c_0x140d8c");
#endif

    ctx->pc = 0x140d8cu;

    // 0x140d8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x140d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x140d90: 0x8c33bb40  lw          $s3, -0x44C0($at)
    ctx->pc = 0x140d90u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x47BB40u));
    // 0x140d94: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x140d94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140d98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x140D98u;
    {
        const bool branch_taken_0x140d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d98) {
            ctx->pc = 0x140DD8u;
            return;
        }
    }
    ctx->pc = 0x140DA0u;
}
