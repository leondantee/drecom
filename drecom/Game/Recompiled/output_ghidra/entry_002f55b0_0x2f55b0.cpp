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

// Function: entry_002f55b0
// Address: 0x2f55b0 - 0x2f55b4
void entry_002f55b0_0x2f55b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f55b0_0x2f55b0");
#endif

    ctx->pc = 0x2f55b0u;

    // 0x2f55b0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2f55b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f55b4u;
}
