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

// Function: entry_001e19f0
// Address: 0x1e19f0 - 0x1e1a00
void entry_001e19f0_0x1e19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e19f0_0x1e19f0");
#endif

    ctx->pc = 0x1e19f0u;

    // 0x1e19f0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1e19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e19f4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x1e19f4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e19f8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e19fc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e19fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e1a00u;
}
