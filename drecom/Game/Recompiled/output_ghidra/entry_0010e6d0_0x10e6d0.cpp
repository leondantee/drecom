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

// Function: entry_0010e6d0
// Address: 0x10e6d0 - 0x10e6dc
void entry_0010e6d0_0x10e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e6d0_0x10e6d0");
#endif

    switch (ctx->pc) {
        case 0x10e6d8u: goto label_10e6d8;
        default: break;
    }

    ctx->pc = 0x10e6d0u;

    // 0x10e6d0: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E6D0u;
    SET_GPR_U32(ctx, 31, 0x10E6D8u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E6D8u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E6D8u) { return; }
    ctx->pc = 0x10E6D8u;
label_10e6d8:
    // 0x10e6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e6dcu;
}
