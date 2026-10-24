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

// Function: entry_001d1a24
// Address: 0x1d1a24 - 0x1d1a2c
void entry_001d1a24_0x1d1a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a24_0x1d1a24");
#endif

    ctx->pc = 0x1d1a24u;

    // 0x1d1a24: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d1a24u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1a28: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d1a28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d1a2cu;
}
