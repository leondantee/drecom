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

// Function: entry_001a0484
// Address: 0x1a0484 - 0x1a0498
void entry_001a0484_0x1a0484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0484_0x1a0484");
#endif

    switch (ctx->pc) {
        case 0x1a0494u: goto label_1a0494;
        default: break;
    }

    ctx->pc = 0x1a0484u;

    // 0x1a0484: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a0488: 0x2444ef60  addiu       $a0, $v0, -0x10A0
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963040));
    // 0x1a048c: 0xc046760  jal         func_119D80
    ctx->pc = 0x1A048Cu;
    SET_GPR_U32(ctx, 31, 0x1A0494u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1A0494u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0494u) { return; }
    ctx->pc = 0x1A0494u;
label_1a0494:
    // 0x1a0494: 0x0  nop
    ctx->pc = 0x1a0494u;
    // NOP
    ctx->pc = 0x1a0498u;
}
