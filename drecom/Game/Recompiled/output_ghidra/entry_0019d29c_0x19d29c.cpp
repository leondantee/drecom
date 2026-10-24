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

// Function: entry_0019d29c
// Address: 0x19d29c - 0x19d2a0
void entry_0019d29c_0x19d29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d29c_0x19d29c");
#endif

    ctx->pc = 0x19d29cu;

    // 0x19d29c: 0xc084a18  jal         func_212860
    ctx->pc = 0x19D29Cu;
    SET_GPR_U32(ctx, 31, 0x19D2A4u);
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x19D2A4u;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D2A4u) { return; }
    ctx->pc = 0x19D2A4u;
}
