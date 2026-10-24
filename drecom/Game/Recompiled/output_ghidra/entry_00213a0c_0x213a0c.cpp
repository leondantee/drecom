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

// Function: entry_00213a0c
// Address: 0x213a0c - 0x213a10
void entry_00213a0c_0x213a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213a0c_0x213a0c");
#endif

    ctx->pc = 0x213a0cu;

    // 0x213a0c: 0xc084a94  jal         func_212A50
    ctx->pc = 0x213A0Cu;
    SET_GPR_U32(ctx, 31, 0x213A14u);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x213A14u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213A14u) { return; }
    ctx->pc = 0x213A14u;
}
