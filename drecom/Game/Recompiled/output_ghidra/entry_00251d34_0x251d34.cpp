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

// Function: entry_00251d34
// Address: 0x251d34 - 0x251d64
void entry_00251d34_0x251d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251d34_0x251d34");
#endif

    switch (ctx->pc) {
        case 0x251d5cu: goto label_251d5c;
        default: break;
    }

    ctx->pc = 0x251d34u;

label_251d34:
    // 0x251d34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d38:
    // 0x251d38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d3c:
    // 0x251d3c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251d40:
    // 0x251d40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251d44:
    // 0x251d44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251d48:
    // 0x251d48: 0x2442b728  addiu       $v0, $v0, -0x48D8
    ctx->pc = 0x251d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948648));
label_251d4c:
    // 0x251d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251d50:
    // 0x251d50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251d54:
    // 0x251d54: 0x40f809  jalr        $v0
label_251d58:
    if (ctx->pc == 0x251D58u) {
        ctx->pc = 0x251D5Cu;
        goto label_251d5c;
    }
    ctx->pc = 0x251D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251D5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D54u, 0x251D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251D5Cu;
label_251d5c:
    // 0x251d5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_251d60:
    if (ctx->pc == 0x251D60u) {
        ctx->pc = 0x251D64u;
        goto label_fallthrough_0x251d5c;
    }
    ctx->pc = 0x251D5Cu;
    {
        const bool branch_taken_0x251d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251d5c) {
            ctx->pc = 0x251D8Cu;
            return;
        }
    }
label_fallthrough_0x251d5c:
    ctx->pc = 0x251D64u;
}
