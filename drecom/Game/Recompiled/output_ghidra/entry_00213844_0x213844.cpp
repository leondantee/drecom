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

// Function: entry_00213844
// Address: 0x213844 - 0x213854
void entry_00213844_0x213844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213844_0x213844");
#endif

    switch (ctx->pc) {
        case 0x21384cu: goto label_21384c;
        default: break;
    }

    ctx->pc = 0x213844u;

    // 0x213844: 0xc084a54  jal         func_212950
    ctx->pc = 0x213844u;
    SET_GPR_U32(ctx, 31, 0x21384Cu);
    ctx->pc = 0x213848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213844u;
    // 0x213848: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212950u;
    {
        ctx->pc = 0x21384Cu;
        ps2_syscalls::WakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21384Cu) { return; }
    ctx->pc = 0x21384Cu;
label_21384c:
    // 0x21384c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x21384Cu;
    {
        const bool branch_taken_0x21384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21384c) {
            ctx->pc = 0x213808u;
            return;
        }
    }
    ctx->pc = 0x213854u;
}
