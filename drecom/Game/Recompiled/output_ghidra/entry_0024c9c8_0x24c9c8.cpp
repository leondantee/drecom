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

// Function: entry_0024c9c8
// Address: 0x24c9c8 - 0x24c9f0
void entry_0024c9c8_0x24c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c9c8_0x24c9c8");
#endif

    ctx->pc = 0x24c9c8u;

label_24c9c8:
    // 0x24c9c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c9cc:
    // 0x24c9cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c9d0:
    // 0x24c9d0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c9d4:
    // 0x24c9d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c9d8:
    // 0x24c9d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c9dc:
    // 0x24c9dc: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
label_24c9e0:
    // 0x24c9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c9e4:
    // 0x24c9e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c9e8:
    // 0x24c9e8: 0x40f809  jalr        $v0
label_24c9ec:
    if (ctx->pc == 0x24C9ECu) {
        ctx->pc = 0x24C9F0u;
        goto label_fallthrough_0x24c9e8;
    }
    ctx->pc = 0x24C9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C9F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9E8u, 0x24C9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x24c9e8:
    ctx->pc = 0x24C9F0u;
}
