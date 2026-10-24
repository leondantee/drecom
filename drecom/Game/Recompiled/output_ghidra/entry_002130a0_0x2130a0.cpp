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

// Function: entry_002130a0
// Address: 0x2130a0 - 0x2130c4
void entry_002130a0_0x2130a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002130a0_0x2130a0");
#endif

    ctx->pc = 0x2130a0u;

label_2130a0:
    // 0x2130a0: 0x42000039  di
    ctx->pc = 0x2130a0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2130a4: 0x40f  sync.p
    ctx->pc = 0x2130a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2130a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2130ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2130acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2130b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2130b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2130b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2130B4u;
    {
        const bool branch_taken_0x2130b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2130b4) {
            ctx->pc = 0x2130A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2130a0;
        }
    }
    ctx->pc = 0x2130BCu;
    // 0x2130bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2130BCu;
    {
        const bool branch_taken_0x2130bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130BCu;
        // 0x2130c0: 0x8e42aac4  lw          $v0, -0x553C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130bc) {
            ctx->pc = 0x2130C8u;
            return;
        }
    }
    ctx->pc = 0x2130C4u;
}
