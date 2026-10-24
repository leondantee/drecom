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

// Function: entry_00213854
// Address: 0x213854 - 0x213864
void entry_00213854_0x213854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213854_0x213854");
#endif

    switch (ctx->pc) {
        case 0x21385cu: goto label_21385c;
        default: break;
    }

    ctx->pc = 0x213854u;

    // 0x213854: 0xc084a34  jal         func_2128D0
    ctx->pc = 0x213854u;
    SET_GPR_U32(ctx, 31, 0x21385Cu);
    ctx->pc = 0x213858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213854u;
    // 0x213858: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2128D0u;
    {
        ctx->pc = 0x21385Cu;
        ps2_syscalls::RotateThreadReadyQueue(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21385Cu) { return; }
    ctx->pc = 0x21385Cu;
label_21385c:
    // 0x21385c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x21385Cu;
    {
        const bool branch_taken_0x21385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21385c) {
            ctx->pc = 0x213808u;
            return;
        }
    }
    ctx->pc = 0x213864u;
}
