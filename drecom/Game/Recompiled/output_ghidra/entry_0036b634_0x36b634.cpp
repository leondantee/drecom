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

// Function: entry_0036b634
// Address: 0x36b634 - 0x36b674
void entry_0036b634_0x36b634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b634_0x36b634");
#endif

    switch (ctx->pc) {
        case 0x36b660u: goto label_36b660;
        default: break;
    }

    ctx->pc = 0x36b634u;

label_36b634:
    // 0x36b634: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36b634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b638:
    // 0x36b638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36b63c:
    // 0x36b63c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36b640:
    // 0x36b640: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36b644:
    // 0x36b644: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b648:
    // 0x36b648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b64c:
    // 0x36b64c: 0x2442b1f0  addiu       $v0, $v0, -0x4E10
    ctx->pc = 0x36b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
label_36b650:
    // 0x36b650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b654:
    // 0x36b654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b658:
    // 0x36b658: 0x40f809  jalr        $v0
label_36b65c:
    if (ctx->pc == 0x36B65Cu) {
        ctx->pc = 0x36B660u;
        goto label_36b660;
    }
    ctx->pc = 0x36B658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B660u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B658u, 0x36B660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B660u;
label_36b660:
    // 0x36b660: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36b660u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36b664:
    // 0x36b664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b668:
    // 0x36b668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36b66c:
    // 0x36b66c: 0x3e00008  jr          $ra
label_36b670:
    if (ctx->pc == 0x36B670u) {
        ctx->pc = 0x36B674u;
        goto label_fallthrough_0x36b66c;
    }
    ctx->pc = 0x36B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b66c:
    ctx->pc = 0x36B674u;
}
