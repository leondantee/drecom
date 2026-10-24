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

// Function: entry_0010af08
// Address: 0x10af08 - 0x10af1c
void entry_0010af08_0x10af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af08_0x10af08");
#endif

    switch (ctx->pc) {
        case 0x10af18u: goto label_10af18;
        default: break;
    }

    ctx->pc = 0x10af08u;

    // 0x10af08: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10af08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10af0c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x10af10: 0xc042cec  jal         func_10B3B0
    ctx->pc = 0x10AF10u;
    SET_GPR_U32(ctx, 31, 0x10AF18u);
    ctx->pc = 0x10AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF10u;
    // 0x10af14: 0x24a53c80  addiu       $a1, $a1, 0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B3B0u, 0x10AF10u, 0x10AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF18u;
label_10af18:
    // 0x10af18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10af18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10af1cu;
}
