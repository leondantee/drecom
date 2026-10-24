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

// Function: entry_001168c8
// Address: 0x1168c8 - 0x1168d8
void entry_001168c8_0x1168c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001168c8_0x1168c8");
#endif

    switch (ctx->pc) {
        case 0x1168d4u: goto label_1168d4;
        default: break;
    }

    ctx->pc = 0x1168c8u;

    // 0x1168c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1168c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168cc: 0xc046502  jal         func_119408
    ctx->pc = 0x1168CCu;
    SET_GPR_U32(ctx, 31, 0x1168D4u);
    ctx->pc = 0x1168D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168CCu;
    // 0x1168d0: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x1168CCu, 0x1168D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168D4u;
label_1168d4:
    // 0x1168d4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1168d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x1168d8u;
}
