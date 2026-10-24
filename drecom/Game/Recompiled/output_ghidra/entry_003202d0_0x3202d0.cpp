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

// Function: entry_003202d0
// Address: 0x3202d0 - 0x3202e8
void entry_003202d0_0x3202d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003202d0_0x3202d0");
#endif

    switch (ctx->pc) {
        case 0x3202e0u: goto label_3202e0;
        default: break;
    }

    ctx->pc = 0x3202d0u;

    // 0x3202d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3202d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3202d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3202d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3202d8: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x3202D8u;
    SET_GPR_U32(ctx, 31, 0x3202E0u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x3202E0u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3202E0u) { return; }
    ctx->pc = 0x3202E0u;
label_3202e0:
    // 0x3202e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3202e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3202e4: 0x0  nop
    ctx->pc = 0x3202e4u;
    // NOP
    ctx->pc = 0x3202e8u;
}
