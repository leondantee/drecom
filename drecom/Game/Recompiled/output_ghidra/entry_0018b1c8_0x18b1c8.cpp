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

// Function: entry_0018b1c8
// Address: 0x18b1c8 - 0x18b1d8
void entry_0018b1c8_0x18b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b1c8_0x18b1c8");
#endif

    ctx->pc = 0x18b1c8u;

    // 0x18b1c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x18b1cc: 0x2444edd0  addiu       $a0, $v0, -0x1230
    ctx->pc = 0x18b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
    // 0x18b1d0: 0xc046760  jal         func_119D80
    ctx->pc = 0x18B1D0u;
    SET_GPR_U32(ctx, 31, 0x18B1D8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x18B1D8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18B1D8u) { return; }
    ctx->pc = 0x18B1D8u;
}
