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

// Function: entry_001950f8
// Address: 0x1950f8 - 0x195100
void entry_001950f8_0x1950f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001950f8_0x1950f8");
#endif

    ctx->pc = 0x1950f8u;

    // 0x1950f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1950f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1950fc: 0x0  nop
    ctx->pc = 0x1950fcu;
    // NOP
    ctx->pc = 0x195100u;
}
