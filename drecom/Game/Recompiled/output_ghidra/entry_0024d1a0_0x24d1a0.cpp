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

// Function: entry_0024d1a0
// Address: 0x24d1a0 - 0x24d1d0
void entry_0024d1a0_0x24d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d1a0_0x24d1a0");
#endif

    switch (ctx->pc) {
        case 0x24d1c8u: goto label_24d1c8;
        default: break;
    }

    ctx->pc = 0x24d1a0u;

label_24d1a0:
    // 0x24d1a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1a4:
    // 0x24d1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1a8:
    // 0x24d1a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24d1ac:
    // 0x24d1ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24d1b0:
    // 0x24d1b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24d1b4:
    // 0x24d1b4: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x24d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
label_24d1b8:
    // 0x24d1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24d1bc:
    // 0x24d1bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24d1c0:
    // 0x24d1c0: 0x40f809  jalr        $v0
label_24d1c4:
    if (ctx->pc == 0x24D1C4u) {
        ctx->pc = 0x24D1C8u;
        goto label_24d1c8;
    }
    ctx->pc = 0x24D1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D1C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1C0u, 0x24D1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D1C8u;
label_24d1c8:
    // 0x24d1c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_24d1cc:
    if (ctx->pc == 0x24D1CCu) {
        ctx->pc = 0x24D1D0u;
        goto label_fallthrough_0x24d1c8;
    }
    ctx->pc = 0x24D1C8u;
    {
        const bool branch_taken_0x24d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d1c8) {
            ctx->pc = 0x24D1F8u;
            return;
        }
    }
label_fallthrough_0x24d1c8:
    ctx->pc = 0x24D1D0u;
}
