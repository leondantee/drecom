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

// Function: entry_002134c0
// Address: 0x2134c0 - 0x2134dc
void entry_002134c0_0x2134c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002134c0_0x2134c0");
#endif

    ctx->pc = 0x2134c0u;

label_2134c0:
    // 0x2134c0: 0x42000039  di
    ctx->pc = 0x2134c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2134c4: 0x40f  sync.p
    ctx->pc = 0x2134c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2134c8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2134c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2134cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2134ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2134d0: 0x0  nop
    ctx->pc = 0x2134d0u;
    // NOP
    // 0x2134d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2134D4u;
    {
        const bool branch_taken_0x2134d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2134d4) {
            ctx->pc = 0x2134C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2134c0;
        }
    }
    ctx->pc = 0x2134DCu;
}
