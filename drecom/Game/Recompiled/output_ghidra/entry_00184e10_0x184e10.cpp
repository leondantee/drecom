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

// Function: entry_00184e10
// Address: 0x184e10 - 0x184e14
void entry_00184e10_0x184e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184e10_0x184e10");
#endif

    ctx->pc = 0x184e10u;

    // 0x184e10: 0xa0230344  sb          $v1, 0x344($at)
    ctx->pc = 0x184e10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 836), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x184e14u;
}
