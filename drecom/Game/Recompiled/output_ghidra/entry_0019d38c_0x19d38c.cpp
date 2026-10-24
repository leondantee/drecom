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

// Function: entry_0019d38c
// Address: 0x19d38c - 0x19d394
void entry_0019d38c_0x19d38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d38c_0x19d38c");
#endif

    ctx->pc = 0x19d38cu;

    // 0x19d38c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x19D38Cu;
    SET_GPR_U32(ctx, 31, 0x19D394u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x19D394u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D394u) { return; }
    ctx->pc = 0x19D394u;
}
