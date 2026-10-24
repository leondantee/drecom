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

// Function: entry_00251cd4
// Address: 0x251cd4 - 0x251d04
void entry_00251cd4_0x251cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251cd4_0x251cd4");
#endif

    switch (ctx->pc) {
        case 0x251cfcu: goto label_251cfc;
        default: break;
    }

    ctx->pc = 0x251cd4u;

label_251cd4:
    // 0x251cd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251cd8:
    // 0x251cd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251cdc:
    // 0x251cdc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251ce0:
    // 0x251ce0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251ce4:
    // 0x251ce4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251ce8:
    // 0x251ce8: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x251ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_251cec:
    // 0x251cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251cf0:
    // 0x251cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251cf4:
    // 0x251cf4: 0x40f809  jalr        $v0
label_251cf8:
    if (ctx->pc == 0x251CF8u) {
        ctx->pc = 0x251CFCu;
        goto label_251cfc;
    }
    ctx->pc = 0x251CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251CFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251CF4u, 0x251CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251CFCu;
label_251cfc:
    // 0x251cfc: 0x10000023  b           . + 4 + (0x23 << 2)
label_251d00:
    if (ctx->pc == 0x251D00u) {
        ctx->pc = 0x251D04u;
        goto label_fallthrough_0x251cfc;
    }
    ctx->pc = 0x251CFCu;
    {
        const bool branch_taken_0x251cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251cfc) {
            ctx->pc = 0x251D8Cu;
            return;
        }
    }
label_fallthrough_0x251cfc:
    ctx->pc = 0x251D04u;
}
