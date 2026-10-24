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

// Function: entry_00213300
// Address: 0x213300 - 0x21331c
void entry_00213300_0x213300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213300_0x213300");
#endif

    ctx->pc = 0x213300u;

label_213300:
    // 0x213300: 0x42000039  di
    ctx->pc = 0x213300u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x213304: 0x40f  sync.p
    ctx->pc = 0x213304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213308: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213308u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x21330c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213310: 0x0  nop
    ctx->pc = 0x213310u;
    // NOP
    // 0x213314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x213314u;
    {
        const bool branch_taken_0x213314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213314) {
            ctx->pc = 0x213300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213300;
        }
    }
    ctx->pc = 0x21331Cu;
}
