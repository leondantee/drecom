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

// Function: entry_00213a88
// Address: 0x213a88 - 0x213a8c
void entry_00213a88_0x213a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213a88_0x213a88");
#endif

    ctx->pc = 0x213a88u;

    // 0x213a88: 0xc084a94  jal         func_212A50
    ctx->pc = 0x213A88u;
    SET_GPR_U32(ctx, 31, 0x213A90u);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x213A90u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213A90u) { return; }
    ctx->pc = 0x213A90u;
}
