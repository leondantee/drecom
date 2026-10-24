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

// Function: entry_0010f0f8
// Address: 0x10f0f8 - 0x10f104
void entry_0010f0f8_0x10f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f0f8_0x10f0f8");
#endif

    ctx->pc = 0x10f0f8u;

    // 0x10f0f8: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    // 0x10f0fc: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F0FCu;
    SET_GPR_U32(ctx, 31, 0x10F104u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F104u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F104u) { return; }
    ctx->pc = 0x10F104u;
}
