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

// Function: entry_0010dc5c
// Address: 0x10dc5c - 0x10dc70
void entry_0010dc5c_0x10dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc5c_0x10dc5c");
#endif

    switch (ctx->pc) {
        case 0x10dc64u: goto label_10dc64;
        default: break;
    }

    ctx->pc = 0x10dc5cu;

    // 0x10dc5c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DC5Cu;
    SET_GPR_U32(ctx, 31, 0x10DC64u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DC64u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DC64u) { return; }
    ctx->pc = 0x10DC64u;
label_10dc64:
    // 0x10dc64: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10dc68: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x10dc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x10dc6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10dc70u;
}
