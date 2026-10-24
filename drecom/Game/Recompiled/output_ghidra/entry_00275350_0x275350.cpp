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

// Function: entry_00275350
// Address: 0x275350 - 0x275360
void entry_00275350_0x275350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275350_0x275350");
#endif

    ctx->pc = 0x275350u;

    // 0x275350: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x275350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x275354: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x275354u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x275358: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275358) {
            ctx->pc = 0x2753F8u;
            return;
        }
    }
    ctx->pc = 0x275360u;
}
