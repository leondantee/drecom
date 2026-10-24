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

// Function: entry_001a25d0
// Address: 0x1a25d0 - 0x1a25ec
void entry_001a25d0_0x1a25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25d0_0x1a25d0");
#endif

    ctx->pc = 0x1a25d0u;

    // 0x1a25d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a25d4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a25d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25D8u;
    {
        const bool branch_taken_0x1a25d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a25d8) {
            ctx->pc = 0x1A25ECu;
            return;
        }
    }
    ctx->pc = 0x1A25E0u;
    // 0x1a25e0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1a25e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a25e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A25E4u;
    {
        const bool branch_taken_0x1a25e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25e4) {
            ctx->pc = 0x1A261Cu;
            return;
        }
    }
    ctx->pc = 0x1A25ECu;
}
