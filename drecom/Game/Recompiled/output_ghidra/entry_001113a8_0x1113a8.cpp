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

// Function: entry_001113a8
// Address: 0x1113a8 - 0x1113b8
void entry_001113a8_0x1113a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113a8_0x1113a8");
#endif

    switch (ctx->pc) {
        case 0x1113b0u: goto label_1113b0;
        default: break;
    }

    ctx->pc = 0x1113a8u;

    // 0x1113a8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113A8u;
    SET_GPR_U32(ctx, 31, 0x1113B0u);
    ctx->pc = 0x1113ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A8u;
    // 0x1113ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113A8u, 0x1113B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113B0u;
label_1113b0:
    // 0x1113b0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1113b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1113b4: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x1113b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x1113b8u;
}
