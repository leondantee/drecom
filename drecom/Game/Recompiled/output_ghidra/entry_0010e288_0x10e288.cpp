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

// Function: entry_0010e288
// Address: 0x10e288 - 0x10e298
void entry_0010e288_0x10e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e288_0x10e288");
#endif

    switch (ctx->pc) {
        case 0x10e294u: goto label_10e294;
        default: break;
    }

    ctx->pc = 0x10e288u;

    // 0x10e288: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10e28c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E28Cu;
    SET_GPR_U32(ctx, 31, 0x10E294u);
    ctx->pc = 0x10E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E28Cu;
    // 0x10e290: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E294u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E294u) { return; }
    ctx->pc = 0x10E294u;
label_10e294:
    // 0x10e294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e298u;
}
