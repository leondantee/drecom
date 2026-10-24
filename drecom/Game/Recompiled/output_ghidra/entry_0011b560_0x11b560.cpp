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

// Function: entry_0011b560
// Address: 0x11b560 - 0x11b588
void entry_0011b560_0x11b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b560_0x11b560");
#endif

    ctx->pc = 0x11b560u;

label_11b560:
    // 0x11b560: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
label_11b564:
    // 0x11b564: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_11b568:
    // 0x11b568: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
label_11b56c:
    if (ctx->pc == 0x11B56Cu) {
        ctx->pc = 0x11B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B568u;
        // 0x11b56c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B570u;
        goto label_11b570;
    }
    ctx->pc = 0x11B568u;
    {
        const bool branch_taken_0x11b568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B568u;
        // 0x11b56c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b568) {
            ctx->pc = 0x11BC44u;
            return;
        }
    }
    ctx->pc = 0x11B570u;
label_11b570:
    // 0x11b570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11b570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11b574:
    // 0x11b574: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x11b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_11b578:
    // 0x11b578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11b57c:
    // 0x11b57c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11b580:
    // 0x11b580: 0x800008  jr          $a0
label_11b584:
    if (ctx->pc == 0x11B584u) {
        ctx->pc = 0x11B588u;
        goto label_fallthrough_0x11b580;
    }
    ctx->pc = 0x11B580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B580u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x11b580:
    ctx->pc = 0x11B588u;
}
