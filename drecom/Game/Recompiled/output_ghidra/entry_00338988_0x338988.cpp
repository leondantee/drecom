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

// Function: entry_00338988
// Address: 0x338988 - 0x338990
void entry_00338988_0x338988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338988_0x338988");
#endif

    ctx->pc = 0x338988u;

    // 0x338988: 0xc084a90  jal         func_212A40
    ctx->pc = 0x338988u;
    SET_GPR_U32(ctx, 31, 0x338990u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x338990u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338990u) { return; }
    ctx->pc = 0x338990u;
}
