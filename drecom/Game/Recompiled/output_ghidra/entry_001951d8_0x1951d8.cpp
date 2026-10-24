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

// Function: entry_001951d8
// Address: 0x1951d8 - 0x1951e0
void entry_001951d8_0x1951d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001951d8_0x1951d8");
#endif

    ctx->pc = 0x1951d8u;

    // 0x1951d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1951d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1951dc: 0x0  nop
    ctx->pc = 0x1951dcu;
    // NOP
    ctx->pc = 0x1951e0u;
}
