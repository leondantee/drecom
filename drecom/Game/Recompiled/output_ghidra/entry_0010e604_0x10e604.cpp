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

// Function: entry_0010e604
// Address: 0x10e604 - 0x10e614
void entry_0010e604_0x10e604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e604_0x10e604");
#endif

    switch (ctx->pc) {
        case 0x10e610u: goto label_10e610;
        default: break;
    }

    ctx->pc = 0x10e604u;

    // 0x10e604: 0x8c4445b8  lw          $a0, 0x45B8($v0)
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    // 0x10e608: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E608u;
    SET_GPR_U32(ctx, 31, 0x10E610u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E610u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E610u) { return; }
    ctx->pc = 0x10E610u;
label_10e610:
    // 0x10e610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e614u;
}
