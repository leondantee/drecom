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

// Function: entry_00213668
// Address: 0x213668 - 0x213684
void entry_00213668_0x213668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213668_0x213668");
#endif

    ctx->pc = 0x213668u;

label_213668:
    // 0x213668: 0x42000039  di
    ctx->pc = 0x213668u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x21366c: 0x40f  sync.p
    ctx->pc = 0x21366cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213670: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213670u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x213674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x213674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213678: 0x0  nop
    ctx->pc = 0x213678u;
    // NOP
    // 0x21367c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21367Cu;
    {
        const bool branch_taken_0x21367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21367c) {
            ctx->pc = 0x213668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213668;
        }
    }
    ctx->pc = 0x213684u;
}
