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

// Function: entry_0010df60
// Address: 0x10df60 - 0x10df70
void entry_0010df60_0x10df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df60_0x10df60");
#endif

    switch (ctx->pc) {
        case 0x10df6cu: goto label_10df6c;
        default: break;
    }

    ctx->pc = 0x10df60u;

    // 0x10df60: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10df60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10df64: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DF64u;
    SET_GPR_U32(ctx, 31, 0x10DF6Cu);
    ctx->pc = 0x10DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF64u;
    // 0x10df68: 0x8ca445b8  lw          $a0, 0x45B8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DF6Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DF6Cu) { return; }
    ctx->pc = 0x10DF6Cu;
label_10df6c:
    // 0x10df6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10df70u;
}
