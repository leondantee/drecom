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

// Function: entry_001b2344
// Address: 0x1b2344 - 0x1b2348
void entry_001b2344_0x1b2344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2344_0x1b2344");
#endif

    ctx->pc = 0x1b2344u;

    // 0x1b2344: 0x73c01628  paddub      $v0, $fp, $zero
    ctx->pc = 0x1b2344u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b2348u;
}
