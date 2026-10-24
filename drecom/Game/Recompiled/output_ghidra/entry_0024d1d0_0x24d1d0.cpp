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

// Function: entry_0024d1d0
// Address: 0x24d1d0 - 0x24d1f8
void entry_0024d1d0_0x24d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d1d0_0x24d1d0");
#endif

    ctx->pc = 0x24d1d0u;

label_24d1d0:
    // 0x24d1d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1d4:
    // 0x24d1d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24d1d8:
    // 0x24d1d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24d1dc:
    // 0x24d1dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24d1e0:
    // 0x24d1e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24d1e4:
    // 0x24d1e4: 0x2442b6a0  addiu       $v0, $v0, -0x4960
    ctx->pc = 0x24d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
label_24d1e8:
    // 0x24d1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24d1ec:
    // 0x24d1ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24d1f0:
    // 0x24d1f0: 0x40f809  jalr        $v0
label_24d1f4:
    if (ctx->pc == 0x24D1F4u) {
        ctx->pc = 0x24D1F8u;
        goto label_fallthrough_0x24d1f0;
    }
    ctx->pc = 0x24D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D1F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1F0u, 0x24D1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x24d1f0:
    ctx->pc = 0x24D1F8u;
}
