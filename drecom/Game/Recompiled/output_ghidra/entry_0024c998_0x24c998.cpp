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

// Function: entry_0024c998
// Address: 0x24c998 - 0x24c9c8
void entry_0024c998_0x24c998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c998_0x24c998");
#endif

    switch (ctx->pc) {
        case 0x24c9c0u: goto label_24c9c0;
        default: break;
    }

    ctx->pc = 0x24c998u;

label_24c998:
    // 0x24c998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c99c:
    // 0x24c99c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c9a0:
    // 0x24c9a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c9a4:
    // 0x24c9a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c9a8:
    // 0x24c9a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c9ac:
    // 0x24c9ac: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x24c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
label_24c9b0:
    // 0x24c9b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c9b4:
    // 0x24c9b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c9b8:
    // 0x24c9b8: 0x40f809  jalr        $v0
label_24c9bc:
    if (ctx->pc == 0x24C9BCu) {
        ctx->pc = 0x24C9C0u;
        goto label_24c9c0;
    }
    ctx->pc = 0x24C9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C9C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9B8u, 0x24C9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C9C0u;
label_24c9c0:
    // 0x24c9c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_24c9c4:
    if (ctx->pc == 0x24C9C4u) {
        ctx->pc = 0x24C9C8u;
        goto label_fallthrough_0x24c9c0;
    }
    ctx->pc = 0x24C9C0u;
    {
        const bool branch_taken_0x24c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9c0) {
            ctx->pc = 0x24C9F0u;
            return;
        }
    }
label_fallthrough_0x24c9c0:
    ctx->pc = 0x24C9C8u;
}
