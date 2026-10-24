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

// Function: entry_0018e708
// Address: 0x18e708 - 0x18e748
void entry_0018e708_0x18e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e708_0x18e708");
#endif

    switch (ctx->pc) {
        case 0x18e72cu: goto label_18e72c;
        default: break;
    }

    ctx->pc = 0x18e708u;

label_18e708:
    // 0x18e708: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e70c:
    // 0x18e70c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x18e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_18e710:
    // 0x18e710: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e714:
    // 0x18e714: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e718:
    // 0x18e718: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
label_18e71c:
    // 0x18e71c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e720:
    // 0x18e720: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e724:
    // 0x18e724: 0x40f809  jalr        $v0
label_18e728:
    if (ctx->pc == 0x18E728u) {
        ctx->pc = 0x18E72Cu;
        goto label_18e72c;
    }
    ctx->pc = 0x18E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E72Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E724u, 0x18E72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E72Cu;
label_18e72c:
    // 0x18e72c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e730:
    // 0x18e730: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e734:
    // 0x18e734: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_18e738:
    if (ctx->pc == 0x18E738u) {
        ctx->pc = 0x18E73Cu;
        goto label_18e73c;
    }
    ctx->pc = 0x18E734u;
    {
        const bool branch_taken_0x18e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e734) {
            ctx->pc = 0x18E748u;
            return;
        }
    }
    ctx->pc = 0x18E73Cu;
label_18e73c:
    // 0x18e73c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e73cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e740:
    // 0x18e740: 0xc0c977c  jal         func_325DF0
label_18e744:
    if (ctx->pc == 0x18E744u) {
        ctx->pc = 0x18E748u;
        goto label_fallthrough_0x18e740;
    }
    ctx->pc = 0x18E740u;
    SET_GPR_U32(ctx, 31, 0x18E748u);
    ctx->pc = 0x325DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DF0u, 0x18E740u, 0x18E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x18e740:
    ctx->pc = 0x18E748u;
}
