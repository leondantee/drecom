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

// Function: entry_0027bc3c
// Address: 0x27bc3c - 0x27bc70
void entry_0027bc3c_0x27bc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027bc3c_0x27bc3c");
#endif

    ctx->pc = 0x27bc3cu;

label_27bc3c:
    // 0x27bc3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bc40:
    // 0x27bc40: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27bc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6984)));
label_27bc44:
    // 0x27bc44: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27bc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bc48:
    // 0x27bc48: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x27bc48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27bc4c:
    // 0x27bc4c: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
label_27bc50:
    if (ctx->pc == 0x27BC50u) {
        ctx->pc = 0x27BC54u;
        goto label_27bc54;
    }
    ctx->pc = 0x27BC4Cu;
    {
        const bool branch_taken_0x27bc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc4c) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BC54u;
label_27bc54:
    // 0x27bc54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27bc58:
    // 0x27bc58: 0x244315a0  addiu       $v1, $v0, 0x15A0
    ctx->pc = 0x27bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5536));
label_27bc5c:
    // 0x27bc5c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27bc60:
    // 0x27bc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bc64:
    // 0x27bc64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27bc68:
    // 0x27bc68: 0x400008  jr          $v0
label_27bc6c:
    if (ctx->pc == 0x27BC6Cu) {
        ctx->pc = 0x27BC70u;
        goto label_fallthrough_0x27bc68;
    }
    ctx->pc = 0x27BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BC68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x27bc68:
    ctx->pc = 0x27BC70u;
}
