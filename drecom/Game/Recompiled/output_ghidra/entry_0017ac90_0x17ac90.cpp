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

// Function: entry_0017ac90
// Address: 0x17ac90 - 0x17acb0
void entry_0017ac90_0x17ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac90_0x17ac90");
#endif

    switch (ctx->pc) {
        case 0x17aca0u: goto label_17aca0;
        default: break;
    }

    ctx->pc = 0x17ac90u;

    // 0x17ac90: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ac94: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ac98: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17AC98u;
    SET_GPR_U32(ctx, 31, 0x17ACA0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17ACA0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACA0u) { return; }
    ctx->pc = 0x17ACA0u;
label_17aca0:
    // 0x17aca0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17aca4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17aca8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17ACA8u;
    SET_GPR_U32(ctx, 31, 0x17ACB0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17ACB0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACB0u) { return; }
    ctx->pc = 0x17ACB0u;
}
