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

// Function: entry_0033a0d4
// Address: 0x33a0d4 - 0x33a0e4
void entry_0033a0d4_0x33a0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a0d4_0x33a0d4");
#endif

    ctx->pc = 0x33a0d4u;

    // 0x33a0d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a0d8: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a0dc: 0xc084a98  jal         func_212A60
    ctx->pc = 0x33A0DCu;
    SET_GPR_U32(ctx, 31, 0x33A0E4u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x33A0E4u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A0E4u) { return; }
    ctx->pc = 0x33A0E4u;
}
