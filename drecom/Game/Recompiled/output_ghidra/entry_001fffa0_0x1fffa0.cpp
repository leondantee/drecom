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

// Function: entry_001fffa0
// Address: 0x1fffa0 - 0x1fffb0
void entry_001fffa0_0x1fffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fffa0_0x1fffa0");
#endif

    ctx->pc = 0x1fffa0u;

    // 0x1fffa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fffa4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1fffa4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fffa8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FFFA8u;
    {
        const bool branch_taken_0x1fffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fffa8) {
            ctx->pc = 0x200060u;
            return;
        }
    }
    ctx->pc = 0x1FFFB0u;
}
