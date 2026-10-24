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

// Function: entry_002125c8
// Address: 0x2125c8 - 0x2125d0
void entry_002125c8_0x2125c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002125c8_0x2125c8");
#endif

    ctx->pc = 0x2125c8u;

    // 0x2125c8: 0xc084a90  jal         func_212A40
    ctx->pc = 0x2125C8u;
    SET_GPR_U32(ctx, 31, 0x2125D0u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x2125D0u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2125D0u) { return; }
    ctx->pc = 0x2125D0u;
}
