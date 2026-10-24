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

// Function: entry_0024f15c
// Address: 0x24f15c - 0x24f184
void entry_0024f15c_0x24f15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f15c_0x24f15c");
#endif

    ctx->pc = 0x24f15cu;

label_24f15c:
    // 0x24f15c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f160:
    // 0x24f160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f164:
    // 0x24f164: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24f168:
    // 0x24f168: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24f168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24f16c:
    // 0x24f16c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24f170:
    // 0x24f170: 0x2442b6b8  addiu       $v0, $v0, -0x4948
    ctx->pc = 0x24f170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
label_24f174:
    // 0x24f174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24f178:
    // 0x24f178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f17c:
    // 0x24f17c: 0x40f809  jalr        $v0
label_24f180:
    if (ctx->pc == 0x24F180u) {
        ctx->pc = 0x24F184u;
        goto label_fallthrough_0x24f17c;
    }
    ctx->pc = 0x24F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F17Cu, 0x24F184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x24f17c:
    ctx->pc = 0x24F184u;
}
