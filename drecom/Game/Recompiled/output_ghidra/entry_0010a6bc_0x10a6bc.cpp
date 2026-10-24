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

// Function: entry_0010a6bc
// Address: 0x10a6bc - 0x10a6dc
void entry_0010a6bc_0x10a6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a6bc_0x10a6bc");
#endif

    ctx->pc = 0x10a6bcu;

label_10a6bc:
    // 0x10a6bc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_10a6c0:
    if (ctx->pc == 0x10A6C0u) {
        ctx->pc = 0x10A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6BCu;
        // 0x10a6c0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6C4u;
        goto label_10a6c4;
    }
    ctx->pc = 0x10A6BCu;
    {
        const bool branch_taken_0x10a6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6BCu;
        // 0x10a6c0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6bc) {
            ctx->pc = 0x10A764u;
            return;
        }
    }
    ctx->pc = 0x10A6C4u;
label_10a6c4:
    // 0x10a6c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x10a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_10a6c8:
    // 0x10a6c8: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x10a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
label_10a6cc:
    // 0x10a6cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10a6d0:
    // 0x10a6d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a6d4:
    // 0x10a6d4: 0x800008  jr          $a0
label_10a6d8:
    if (ctx->pc == 0x10A6D8u) {
        ctx->pc = 0x10A6DCu;
        goto label_fallthrough_0x10a6d4;
    }
    ctx->pc = 0x10A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A6D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10a6d4:
    ctx->pc = 0x10A6DCu;
}
