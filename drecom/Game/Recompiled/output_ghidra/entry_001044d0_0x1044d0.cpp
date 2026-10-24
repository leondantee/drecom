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

// Function: entry_001044d0
// Address: 0x1044d0 - 0x1044e0
void entry_001044d0_0x1044d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044d0_0x1044d0");
#endif

    switch (ctx->pc) {
        case 0x1044d8u: goto label_1044d8;
        default: break;
    }

    ctx->pc = 0x1044d0u;

    // 0x1044d0: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1044D0u;
    SET_GPR_U32(ctx, 31, 0x1044D8u);
    ctx->pc = 0x1044D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044D0u;
    // 0x1044d4: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1044D0u, 0x1044D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044D8u;
label_1044d8:
    // 0x1044d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1044D8u;
    {
        const bool branch_taken_0x1044d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044D8u;
        // 0x1044dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044d8) {
            ctx->pc = 0x1044F0u;
            return;
        }
    }
    ctx->pc = 0x1044E0u;
}
