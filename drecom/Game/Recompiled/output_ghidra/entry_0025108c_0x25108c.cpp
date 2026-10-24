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

// Function: entry_0025108c
// Address: 0x25108c - 0x2510bc
void entry_0025108c_0x25108c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025108c_0x25108c");
#endif

    switch (ctx->pc) {
        case 0x2510b4u: goto label_2510b4;
        default: break;
    }

    ctx->pc = 0x25108cu;

label_25108c:
    // 0x25108c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251090:
    // 0x251090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251094:
    // 0x251094: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251098:
    // 0x251098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25109c:
    // 0x25109c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2510a0:
    // 0x2510a0: 0x2442b6f0  addiu       $v0, $v0, -0x4910
    ctx->pc = 0x2510a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
label_2510a4:
    // 0x2510a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2510a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2510a8:
    // 0x2510a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2510ac:
    // 0x2510ac: 0x40f809  jalr        $v0
label_2510b0:
    if (ctx->pc == 0x2510B0u) {
        ctx->pc = 0x2510B4u;
        goto label_2510b4;
    }
    ctx->pc = 0x2510ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2510B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510ACu, 0x2510B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2510B4u;
label_2510b4:
    // 0x2510b4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2510b8:
    if (ctx->pc == 0x2510B8u) {
        ctx->pc = 0x2510BCu;
        goto label_fallthrough_0x2510b4;
    }
    ctx->pc = 0x2510B4u;
    {
        const bool branch_taken_0x2510b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510b4) {
            ctx->pc = 0x251114u;
            return;
        }
    }
label_fallthrough_0x2510b4:
    ctx->pc = 0x2510BCu;
}
