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

// Function: entry_0019d294
// Address: 0x19d294 - 0x19d29c
void entry_0019d294_0x19d294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d294_0x19d294");
#endif

    ctx->pc = 0x19d294u;

    // 0x19d294: 0xc084a90  jal         func_212A40
    ctx->pc = 0x19D294u;
    SET_GPR_U32(ctx, 31, 0x19D29Cu);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x19D29Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D29Cu) { return; }
    ctx->pc = 0x19D29Cu;
}
