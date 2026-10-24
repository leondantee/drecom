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

// Function: entry_001b33c4
// Address: 0x1b33c4 - 0x1b33d8
void entry_001b33c4_0x1b33c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b33c4_0x1b33c4");
#endif

    switch (ctx->pc) {
        case 0x1b33d4u: goto label_1b33d4;
        default: break;
    }

    ctx->pc = 0x1b33c4u;

    // 0x1b33c4: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1b33c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b33cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B33CCu;
    SET_GPR_U32(ctx, 31, 0x1B33D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B33D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B33D4u) { return; }
    ctx->pc = 0x1B33D4u;
label_1b33d4:
    // 0x1b33d4: 0x0  nop
    ctx->pc = 0x1b33d4u;
    // NOP
    ctx->pc = 0x1b33d8u;
}
