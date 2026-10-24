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

// Function: entry_001aaa3c
// Address: 0x1aaa3c - 0x1aaa64
void entry_001aaa3c_0x1aaa3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaa3c_0x1aaa3c");
#endif

    ctx->pc = 0x1aaa3cu;

label_1aaa3c:
    // 0x1aaa3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1aaa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa40:
    // 0x1aaa40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1aaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa44:
    // 0x1aaa44: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1aaa48:
    // 0x1aaa48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1aaa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aaa4c:
    // 0x1aaa4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1aaa50:
    // 0x1aaa50: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x1aaa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_1aaa54:
    // 0x1aaa54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aaa58:
    // 0x1aaa58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aaa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaa5c:
    // 0x1aaa5c: 0x40f809  jalr        $v0
label_1aaa60:
    if (ctx->pc == 0x1AAA60u) {
        ctx->pc = 0x1AAA64u;
        goto label_fallthrough_0x1aaa5c;
    }
    ctx->pc = 0x1AAA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA5Cu, 0x1AAA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1aaa5c:
    ctx->pc = 0x1AAA64u;
}
