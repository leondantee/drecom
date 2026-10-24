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

// Function: entry_0033b098
// Address: 0x33b098 - 0x33b0ac
void entry_0033b098_0x33b098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b098_0x33b098");
#endif

    switch (ctx->pc) {
        case 0x33b0a8u: goto label_33b0a8;
        default: break;
    }

    ctx->pc = 0x33b098u;

    // 0x33b098: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33b09c: 0x244428f0  addiu       $a0, $v0, 0x28F0
    ctx->pc = 0x33b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10480));
    // 0x33b0a0: 0xc046760  jal         func_119D80
    ctx->pc = 0x33B0A0u;
    SET_GPR_U32(ctx, 31, 0x33B0A8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33B0A8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33B0A8u) { return; }
    ctx->pc = 0x33B0A8u;
label_33b0a8:
    // 0x33b0a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x33b0acu;
}
