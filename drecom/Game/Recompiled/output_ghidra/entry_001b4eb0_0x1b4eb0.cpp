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

// Function: entry_001b4eb0
// Address: 0x1b4eb0 - 0x1b4eb4
void entry_001b4eb0_0x1b4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4eb0_0x1b4eb0");
#endif

    ctx->pc = 0x1b4eb0u;

    // 0x1b4eb0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b4eb0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b4eb4u;
}
