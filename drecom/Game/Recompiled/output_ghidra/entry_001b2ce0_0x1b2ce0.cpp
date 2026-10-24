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

// Function: entry_001b2ce0
// Address: 0x1b2ce0 - 0x1b2ce8
void entry_001b2ce0_0x1b2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ce0_0x1b2ce0");
#endif

    ctx->pc = 0x1b2ce0u;

    // 0x1b2ce0: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x1b2ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2ce4: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x1b2ce4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b2ce8u;
}
