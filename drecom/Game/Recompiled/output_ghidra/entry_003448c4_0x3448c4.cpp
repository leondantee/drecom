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

// Function: entry_003448c4
// Address: 0x3448c4 - 0x3448f0
void entry_003448c4_0x3448c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003448c4_0x3448c4");
#endif

    ctx->pc = 0x3448c4u;

label_3448c4:
    // 0x3448c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3448c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3448c8:
    // 0x3448c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3448c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3448cc:
    // 0x3448cc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3448ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3448d0:
    // 0x3448d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3448d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3448d4:
    // 0x3448d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3448d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3448d8:
    // 0x3448d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3448d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3448dc:
    // 0x3448dc: 0x2442a480  addiu       $v0, $v0, -0x5B80
    ctx->pc = 0x3448dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943872));
label_3448e0:
    // 0x3448e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3448e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3448e4:
    // 0x3448e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3448e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3448e8:
    // 0x3448e8: 0x40f809  jalr        $v0
label_3448ec:
    if (ctx->pc == 0x3448ECu) {
        ctx->pc = 0x3448F0u;
        goto label_fallthrough_0x3448e8;
    }
    ctx->pc = 0x3448E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3448F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448E8u, 0x3448F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x3448e8:
    ctx->pc = 0x3448F0u;
}
