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

// Function: entry_00214f18
// Address: 0x214f18 - 0x214f1c
void entry_00214f18_0x214f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214f18_0x214f18");
#endif

    ctx->pc = 0x214f18u;

    // 0x214f18: 0xc0849d4  jal         func_212750
    ctx->pc = 0x214F18u;
    SET_GPR_U32(ctx, 31, 0x214F20u);
    ctx->pc = 0x212750u;
    {
        ctx->pc = 0x214F20u;
        ps2_syscalls::RemoveDmacHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214F20u) { return; }
    ctx->pc = 0x214F20u;
}
