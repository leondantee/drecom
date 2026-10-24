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

// Function: entry_00179f40
// Address: 0x179f40 - 0x179f48
void entry_00179f40_0x179f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f40_0x179f40");
#endif

    ctx->pc = 0x179f40u;

    // 0x179f40: 0xc084d76  jal         func_2135D8
    ctx->pc = 0x179F40u;
    SET_GPR_U32(ctx, 31, 0x179F48u);
    ctx->pc = 0x2135D8u;
    {
        ctx->pc = 0x179F48u;
        ps2_syscalls::EnableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F48u) { return; }
    ctx->pc = 0x179F48u;
}
