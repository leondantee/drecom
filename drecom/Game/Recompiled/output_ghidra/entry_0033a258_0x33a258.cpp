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

// Function: entry_0033a258
// Address: 0x33a258 - 0x33a260
void entry_0033a258_0x33a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a258_0x33a258");
#endif

    ctx->pc = 0x33a258u;

    // 0x33a258: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A258u;
    SET_GPR_U32(ctx, 31, 0x33A260u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A260u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A260u) { return; }
    ctx->pc = 0x33A260u;
}
