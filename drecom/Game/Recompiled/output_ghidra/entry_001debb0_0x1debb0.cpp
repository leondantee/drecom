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

// Function: entry_001debb0
// Address: 0x1debb0 - 0x1debb8
void entry_001debb0_0x1debb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001debb0_0x1debb0");
#endif

    ctx->pc = 0x1debb0u;

    // 0x1debb0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1debb0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1debb4: 0x0  nop
    ctx->pc = 0x1debb4u;
    // NOP
    ctx->pc = 0x1debb8u;
}
