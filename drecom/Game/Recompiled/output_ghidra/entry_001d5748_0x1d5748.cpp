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

// Function: entry_001d5748
// Address: 0x1d5748 - 0x1d5750
void entry_001d5748_0x1d5748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5748_0x1d5748");
#endif

    ctx->pc = 0x1d5748u;

    // 0x1d5748: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d574c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d574cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d5750u;
}
