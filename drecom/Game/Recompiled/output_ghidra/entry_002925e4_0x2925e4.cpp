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

// Function: entry_002925e4
// Address: 0x2925e4 - 0x292604
void entry_002925e4_0x2925e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002925e4_0x2925e4");
#endif

    ctx->pc = 0x2925e4u;

label_2925e4:
    // 0x2925e4: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x2925e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
label_2925e8:
    // 0x2925e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2925e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2925ec:
    // 0x2925ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2925ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2925f0:
    // 0x2925f0: 0x244267c0  addiu       $v0, $v0, 0x67C0
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26560));
label_2925f4:
    // 0x2925f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2925f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2925f8:
    // 0x2925f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2925f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2925fc:
    // 0x2925fc: 0x40f809  jalr        $v0
label_292600:
    if (ctx->pc == 0x292600u) {
        ctx->pc = 0x292604u;
        goto label_fallthrough_0x2925fc;
    }
    ctx->pc = 0x2925FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x292604u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2925FCu, 0x292604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x2925fc:
    ctx->pc = 0x292604u;
}
