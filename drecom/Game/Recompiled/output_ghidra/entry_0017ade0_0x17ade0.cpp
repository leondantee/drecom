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

// Function: entry_0017ade0
// Address: 0x17ade0 - 0x17ae00
void entry_0017ade0_0x17ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ade0_0x17ade0");
#endif

    switch (ctx->pc) {
        case 0x17adf0u: goto label_17adf0;
        default: break;
    }

    ctx->pc = 0x17ade0u;

    // 0x17ade0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17ade4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17ade8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17ADE8u;
    SET_GPR_U32(ctx, 31, 0x17ADF0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17ADF0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ADF0u) { return; }
    ctx->pc = 0x17ADF0u;
label_17adf0:
    // 0x17adf0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17adf4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17adf8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17ADF8u;
    SET_GPR_U32(ctx, 31, 0x17AE00u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17AE00u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AE00u) { return; }
    ctx->pc = 0x17AE00u;
}
