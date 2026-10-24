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

// Function: entry_0010e138
// Address: 0x10e138 - 0x10e148
void entry_0010e138_0x10e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e138_0x10e138");
#endif

    switch (ctx->pc) {
        case 0x10e144u: goto label_10e144;
        default: break;
    }

    ctx->pc = 0x10e138u;

    // 0x10e138: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10e138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10e13c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E13Cu;
    SET_GPR_U32(ctx, 31, 0x10E144u);
    ctx->pc = 0x10E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E13Cu;
    // 0x10e140: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E144u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E144u) { return; }
    ctx->pc = 0x10E144u;
label_10e144:
    // 0x10e144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e148u;
}
