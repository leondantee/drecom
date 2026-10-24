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

// Function: entry_002135f8
// Address: 0x2135f8 - 0x213614
void entry_002135f8_0x2135f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002135f8_0x2135f8");
#endif

    ctx->pc = 0x2135f8u;

label_2135f8:
    // 0x2135f8: 0x42000039  di
    ctx->pc = 0x2135f8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2135fc: 0x40f  sync.p
    ctx->pc = 0x2135fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213600: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213600u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x213604: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x213604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213608: 0x0  nop
    ctx->pc = 0x213608u;
    // NOP
    // 0x21360c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21360Cu;
    {
        const bool branch_taken_0x21360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21360c) {
            ctx->pc = 0x2135F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2135f8;
        }
    }
    ctx->pc = 0x213614u;
}
