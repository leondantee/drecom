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

// Function: entry_0019d350
// Address: 0x19d350 - 0x19d358
void entry_0019d350_0x19d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d350_0x19d350");
#endif

    ctx->pc = 0x19d350u;

    // 0x19d350: 0xc084a0c  jal         func_212830
    ctx->pc = 0x19D350u;
    SET_GPR_U32(ctx, 31, 0x19D358u);
    ctx->pc = 0x212830u;
    {
        ctx->pc = 0x19D358u;
        ps2_syscalls::DeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D358u) { return; }
    ctx->pc = 0x19D358u;
}
