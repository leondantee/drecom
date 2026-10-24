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

// Function: entry_0027ca4c
// Address: 0x27ca4c - 0x27ca80
void entry_0027ca4c_0x27ca4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ca4c_0x27ca4c");
#endif

    ctx->pc = 0x27ca4cu;

label_27ca4c:
    // 0x27ca4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27ca50:
    // 0x27ca50: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27ca50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6988)));
label_27ca54:
    // 0x27ca54: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27ca54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27ca58:
    // 0x27ca58: 0x2c81000d  sltiu       $at, $a0, 0xD
    ctx->pc = 0x27ca58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_27ca5c:
    // 0x27ca5c: 0x102000f8  beqz        $at, . + 4 + (0xF8 << 2)
label_27ca60:
    if (ctx->pc == 0x27CA60u) {
        ctx->pc = 0x27CA64u;
        goto label_27ca64;
    }
    ctx->pc = 0x27CA5Cu;
    {
        const bool branch_taken_0x27ca5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca5c) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CA64u;
label_27ca64:
    // 0x27ca64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27ca68:
    // 0x27ca68: 0x244315e0  addiu       $v1, $v0, 0x15E0
    ctx->pc = 0x27ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
label_27ca6c:
    // 0x27ca6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27ca70:
    // 0x27ca70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ca74:
    // 0x27ca74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27ca78:
    // 0x27ca78: 0x400008  jr          $v0
label_27ca7c:
    if (ctx->pc == 0x27CA7Cu) {
        ctx->pc = 0x27CA80u;
        goto label_fallthrough_0x27ca78;
    }
    ctx->pc = 0x27CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x27ca78:
    ctx->pc = 0x27CA80u;
}
