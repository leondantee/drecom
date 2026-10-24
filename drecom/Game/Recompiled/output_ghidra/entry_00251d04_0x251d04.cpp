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

// Function: entry_00251d04
// Address: 0x251d04 - 0x251d34
void entry_00251d04_0x251d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251d04_0x251d04");
#endif

    switch (ctx->pc) {
        case 0x251d2cu: goto label_251d2c;
        default: break;
    }

    ctx->pc = 0x251d04u;

label_251d04:
    // 0x251d04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d08:
    // 0x251d08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d0c:
    // 0x251d0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251d10:
    // 0x251d10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251d14:
    // 0x251d14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251d18:
    // 0x251d18: 0x2442b720  addiu       $v0, $v0, -0x48E0
    ctx->pc = 0x251d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948640));
label_251d1c:
    // 0x251d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251d20:
    // 0x251d20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251d24:
    // 0x251d24: 0x40f809  jalr        $v0
label_251d28:
    if (ctx->pc == 0x251D28u) {
        ctx->pc = 0x251D2Cu;
        goto label_251d2c;
    }
    ctx->pc = 0x251D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251D2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D24u, 0x251D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251D2Cu;
label_251d2c:
    // 0x251d2c: 0x10000017  b           . + 4 + (0x17 << 2)
label_251d30:
    if (ctx->pc == 0x251D30u) {
        ctx->pc = 0x251D34u;
        goto label_fallthrough_0x251d2c;
    }
    ctx->pc = 0x251D2Cu;
    {
        const bool branch_taken_0x251d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251d2c) {
            ctx->pc = 0x251D8Cu;
            return;
        }
    }
label_fallthrough_0x251d2c:
    ctx->pc = 0x251D34u;
}
