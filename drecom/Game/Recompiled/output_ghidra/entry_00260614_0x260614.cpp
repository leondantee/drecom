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

// Function: entry_00260614
// Address: 0x260614 - 0x260640
void entry_00260614_0x260614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00260614_0x260614");
#endif

    ctx->pc = 0x260614u;

label_260614:
    // 0x260614: 0x2284fffd  addi        $a0, $s4, -0x3
    ctx->pc = 0x260614u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_260618:
    // 0x260618: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x260618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_26061c:
    // 0x26061c: 0x10200245  beqz        $at, . + 4 + (0x245 << 2)
label_260620:
    if (ctx->pc == 0x260620u) {
        ctx->pc = 0x260624u;
        goto label_260624;
    }
    ctx->pc = 0x26061Cu;
    {
        const bool branch_taken_0x26061c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26061c) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260624u;
label_260624:
    // 0x260624: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_260628:
    // 0x260628: 0x24431370  addiu       $v1, $v0, 0x1370
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
label_26062c:
    // 0x26062c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x26062cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_260630:
    // 0x260630: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260634:
    // 0x260634: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x260634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_260638:
    // 0x260638: 0xa00008  jr          $a1
label_26063c:
    if (ctx->pc == 0x26063Cu) {
        ctx->pc = 0x260640u;
        goto label_fallthrough_0x260638;
    }
    ctx->pc = 0x260638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x260638:
    ctx->pc = 0x260640u;
}
