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

// Function: entry_001a27a0
// Address: 0x1a27a0 - 0x1a27a4
void entry_001a27a0_0x1a27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a27a0_0x1a27a0");
#endif

    ctx->pc = 0x1a27a0u;

    // 0x1a27a0: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1a27a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a27a4u;
}
