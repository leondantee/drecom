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

// Function: entry_0033a3b0
// Address: 0x33a3b0 - 0x33a3c0
void entry_0033a3b0_0x33a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a3b0_0x33a3b0");
#endif

    ctx->pc = 0x33a3b0u;

    // 0x33a3b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a3b4: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a3b8: 0xc084a98  jal         func_212A60
    ctx->pc = 0x33A3B8u;
    SET_GPR_U32(ctx, 31, 0x33A3C0u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x33A3C0u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A3C0u) { return; }
    ctx->pc = 0x33A3C0u;
}
