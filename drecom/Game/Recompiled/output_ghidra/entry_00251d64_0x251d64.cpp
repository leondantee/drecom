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

// Function: entry_00251d64
// Address: 0x251d64 - 0x251d8c
void entry_00251d64_0x251d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251d64_0x251d64");
#endif

    ctx->pc = 0x251d64u;

label_251d64:
    // 0x251d64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d68:
    // 0x251d68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d6c:
    // 0x251d6c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251d70:
    // 0x251d70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251d74:
    // 0x251d74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251d78:
    // 0x251d78: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x251d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
label_251d7c:
    // 0x251d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251d80:
    // 0x251d80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251d84:
    // 0x251d84: 0x40f809  jalr        $v0
label_251d88:
    if (ctx->pc == 0x251D88u) {
        ctx->pc = 0x251D8Cu;
        goto label_fallthrough_0x251d84;
    }
    ctx->pc = 0x251D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251D8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D84u, 0x251D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x251d84:
    ctx->pc = 0x251D8Cu;
}
