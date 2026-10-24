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

// Function: entry_003630c8
// Address: 0x3630c8 - 0x3630d4
void entry_003630c8_0x3630c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003630c8_0x3630c8");
#endif

    ctx->pc = 0x3630c8u;

    // 0x3630c8: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x3630c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3630cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3630CCu;
    {
        const bool branch_taken_0x3630cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630cc) {
            ctx->pc = 0x3630F0u;
            return;
        }
    }
    ctx->pc = 0x3630D4u;
}
