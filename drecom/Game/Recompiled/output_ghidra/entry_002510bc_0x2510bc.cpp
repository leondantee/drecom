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

// Function: entry_002510bc
// Address: 0x2510bc - 0x2510ec
void entry_002510bc_0x2510bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002510bc_0x2510bc");
#endif

    switch (ctx->pc) {
        case 0x2510e4u: goto label_2510e4;
        default: break;
    }

    ctx->pc = 0x2510bcu;

label_2510bc:
    // 0x2510bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2510bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510c0:
    // 0x2510c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510c4:
    // 0x2510c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2510c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2510c8:
    // 0x2510c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2510c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2510cc:
    // 0x2510cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2510ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2510d0:
    // 0x2510d0: 0x2442b6f8  addiu       $v0, $v0, -0x4908
    ctx->pc = 0x2510d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948600));
label_2510d4:
    // 0x2510d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2510d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2510d8:
    // 0x2510d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2510d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2510dc:
    // 0x2510dc: 0x40f809  jalr        $v0
label_2510e0:
    if (ctx->pc == 0x2510E0u) {
        ctx->pc = 0x2510E4u;
        goto label_2510e4;
    }
    ctx->pc = 0x2510DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2510E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510DCu, 0x2510E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2510E4u;
label_2510e4:
    // 0x2510e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2510e8:
    if (ctx->pc == 0x2510E8u) {
        ctx->pc = 0x2510ECu;
        goto label_fallthrough_0x2510e4;
    }
    ctx->pc = 0x2510E4u;
    {
        const bool branch_taken_0x2510e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510e4) {
            ctx->pc = 0x251114u;
            return;
        }
    }
label_fallthrough_0x2510e4:
    ctx->pc = 0x2510ECu;
}
