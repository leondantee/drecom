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

// Function: entry_001d0100
// Address: 0x1d0100 - 0x1d0104
void entry_001d0100_0x1d0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0100_0x1d0100");
#endif

    ctx->pc = 0x1d0100u;

    // 0x1d0100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d0104u;
}
