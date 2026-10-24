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

// Function: entry_002124ec
// Address: 0x2124ec - 0x2124f4
void entry_002124ec_0x2124ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002124ec_0x2124ec");
#endif

    ctx->pc = 0x2124ecu;

    // 0x2124ec: 0xc084a90  jal         func_212A40
    ctx->pc = 0x2124ECu;
    SET_GPR_U32(ctx, 31, 0x2124F4u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x2124F4u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2124F4u) { return; }
    ctx->pc = 0x2124F4u;
}
