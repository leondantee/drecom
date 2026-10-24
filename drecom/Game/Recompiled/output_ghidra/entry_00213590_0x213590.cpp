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

// Function: entry_00213590
// Address: 0x213590 - 0x2135ac
void entry_00213590_0x213590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213590_0x213590");
#endif

    ctx->pc = 0x213590u;

label_213590:
    // 0x213590: 0x42000039  di
    ctx->pc = 0x213590u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x213594: 0x40f  sync.p
    ctx->pc = 0x213594u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213598: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213598u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x21359c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2135a0: 0x0  nop
    ctx->pc = 0x2135a0u;
    // NOP
    // 0x2135a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2135A4u;
    {
        const bool branch_taken_0x2135a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2135a4) {
            ctx->pc = 0x213590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213590;
        }
    }
    ctx->pc = 0x2135ACu;
}
