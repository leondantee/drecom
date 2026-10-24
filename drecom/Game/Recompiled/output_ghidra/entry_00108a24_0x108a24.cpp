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

// Function: entry_00108a24
// Address: 0x108a24 - 0x108a30
void entry_00108a24_0x108a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a24_0x108a24");
#endif

    switch (ctx->pc) {
        case 0x108a2cu: goto label_108a2c;
        default: break;
    }

    ctx->pc = 0x108a24u;

    // 0x108a24: 0xc0420fe  jal         func_1083F8
    ctx->pc = 0x108A24u;
    SET_GPR_U32(ctx, 31, 0x108A2Cu);
    ctx->pc = 0x108A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A24u;
    // 0x108a28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083F8u, 0x108A24u, 0x108A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A2Cu;
label_108a2c:
    // 0x108a2c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x108a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x108a30u;
}
