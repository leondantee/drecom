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

// Function: entry_002739e0
// Address: 0x2739e0 - 0x2739f0
void entry_002739e0_0x2739e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002739e0_0x2739e0");
#endif

    ctx->pc = 0x2739e0u;

    // 0x2739e0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2739e4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2739e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2739e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2739E8u;
    {
        const bool branch_taken_0x2739e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739e8) {
            ctx->pc = 0x273A40u;
            return;
        }
    }
    ctx->pc = 0x2739F0u;
}
