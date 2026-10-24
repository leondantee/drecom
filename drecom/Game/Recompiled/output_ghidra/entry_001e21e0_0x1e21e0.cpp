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

// Function: entry_001e21e0
// Address: 0x1e21e0 - 0x1e21e8
void entry_001e21e0_0x1e21e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e21e0_0x1e21e0");
#endif

    ctx->pc = 0x1e21e0u;

    // 0x1e21e0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1e21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e21e4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e21e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e21e8u;
}
