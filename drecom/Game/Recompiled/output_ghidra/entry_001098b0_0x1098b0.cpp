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

// Function: entry_001098b0
// Address: 0x1098b0 - 0x1098c8
void entry_001098b0_0x1098b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098b0_0x1098b0");
#endif

    switch (ctx->pc) {
        case 0x1098b8u: goto label_1098b8;
        default: break;
    }

    ctx->pc = 0x1098b0u;

label_1098b0:
    // 0x1098b0: 0xc04240a  jal         func_109028
    ctx->pc = 0x1098B0u;
    SET_GPR_U32(ctx, 31, 0x1098B8u);
    ctx->pc = 0x1098B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098B0u;
    // 0x1098b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x1098B0u, 0x1098B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098B8u;
label_1098b8:
    // 0x1098b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1098b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1098bc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1098bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1098c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1098C0u;
    {
        const bool branch_taken_0x1098c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1098C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C0u;
        // 0x1098c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098c0) {
            ctx->pc = 0x1098B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1098b0;
        }
    }
    ctx->pc = 0x1098C8u;
}
