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

// Function: caseD_0
// Address: 0x2507ac - 0x2507dc
void caseD_0_0x2507ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2507ac");
#endif

    switch (ctx->pc) {
        case 0x2507acu: goto label_2507ac;
        case 0x2507b0u: goto label_2507b0;
        case 0x2507b4u: goto label_2507b4;
        case 0x2507b8u: goto label_2507b8;
        case 0x2507bcu: goto label_2507bc;
        case 0x2507c0u: goto label_2507c0;
        case 0x2507c4u: goto label_2507c4;
        case 0x2507c8u: goto label_2507c8;
        case 0x2507ccu: goto label_2507cc;
        case 0x2507d0u: goto label_2507d0;
        case 0x2507d4u: goto label_2507d4;
        case 0x2507d8u: goto label_2507d8;
        default: break;
    }

    ctx->pc = 0x2507acu;

label_2507ac:
    // 0x2507ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2507acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507b0:
    // 0x2507b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507b4:
    // 0x2507b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2507b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2507b8:
    // 0x2507b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2507b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2507bc:
    // 0x2507bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2507c0:
    // 0x2507c0: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x2507c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
label_2507c4:
    // 0x2507c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2507c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2507c8:
    // 0x2507c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2507c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2507cc:
    // 0x2507cc: 0x40f809  jalr        $v0
label_2507d0:
    if (ctx->pc == 0x2507D0u) {
        ctx->pc = 0x2507D4u;
        goto label_2507d4;
    }
    ctx->pc = 0x2507CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2507D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507CCu, 0x2507D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2507D4u;
label_2507d4:
    // 0x2507d4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2507d8:
    if (ctx->pc == 0x2507D8u) {
        ctx->pc = 0x2507DCu;
        goto label_fallthrough_0x2507d4;
    }
    ctx->pc = 0x2507D4u;
    {
        const bool branch_taken_0x2507d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2507d4) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x2507d4:
    ctx->pc = 0x2507DCu;
}
