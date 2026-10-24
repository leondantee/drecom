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

// Function: entry_0010e858
// Address: 0x10e858 - 0x10e864
void entry_0010e858_0x10e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e858_0x10e858");
#endif

    switch (ctx->pc) {
        case 0x10e860u: goto label_10e860;
        default: break;
    }

    ctx->pc = 0x10e858u;

    // 0x10e858: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E858u;
    SET_GPR_U32(ctx, 31, 0x10E860u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E860u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E860u) { return; }
    ctx->pc = 0x10E860u;
label_10e860:
    // 0x10e860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e864u;
}
