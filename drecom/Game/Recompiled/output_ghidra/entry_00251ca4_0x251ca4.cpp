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

// Function: entry_00251ca4
// Address: 0x251ca4 - 0x251cd4
void entry_00251ca4_0x251ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251ca4_0x251ca4");
#endif

    switch (ctx->pc) {
        case 0x251cccu: goto label_251ccc;
        default: break;
    }

    ctx->pc = 0x251ca4u;

label_251ca4:
    // 0x251ca4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251ca8:
    // 0x251ca8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251cac:
    // 0x251cac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251cb0:
    // 0x251cb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251cb4:
    // 0x251cb4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251cb8:
    // 0x251cb8: 0x2442b708  addiu       $v0, $v0, -0x48F8
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
label_251cbc:
    // 0x251cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251cc0:
    // 0x251cc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251cc4:
    // 0x251cc4: 0x40f809  jalr        $v0
label_251cc8:
    if (ctx->pc == 0x251CC8u) {
        ctx->pc = 0x251CCCu;
        goto label_251ccc;
    }
    ctx->pc = 0x251CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251CCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251CC4u, 0x251CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251CCCu;
label_251ccc:
    // 0x251ccc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_251cd0:
    if (ctx->pc == 0x251CD0u) {
        ctx->pc = 0x251CD4u;
        goto label_fallthrough_0x251ccc;
    }
    ctx->pc = 0x251CCCu;
    {
        const bool branch_taken_0x251ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ccc) {
            ctx->pc = 0x251D8Cu;
            return;
        }
    }
label_fallthrough_0x251ccc:
    ctx->pc = 0x251CD4u;
}
