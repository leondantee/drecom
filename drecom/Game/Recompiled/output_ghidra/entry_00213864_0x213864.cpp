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

// Function: entry_00213864
// Address: 0x213864 - 0x213874
void entry_00213864_0x213864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213864_0x213864");
#endif

    switch (ctx->pc) {
        case 0x21386cu: goto label_21386c;
        default: break;
    }

    ctx->pc = 0x213864u;

    // 0x213864: 0xc084a64  jal         func_212990
    ctx->pc = 0x213864u;
    SET_GPR_U32(ctx, 31, 0x21386Cu);
    ctx->pc = 0x213868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213864u;
    // 0x213868: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212990u;
    {
        ctx->pc = 0x21386Cu;
        ps2_syscalls::SuspendThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21386Cu) { return; }
    ctx->pc = 0x21386Cu;
label_21386c:
    // 0x21386c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x21386Cu;
    {
        const bool branch_taken_0x21386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21386c) {
            ctx->pc = 0x213808u;
            return;
        }
    }
    ctx->pc = 0x213874u;
}
