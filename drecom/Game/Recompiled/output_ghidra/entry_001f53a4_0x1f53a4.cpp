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

// Function: entry_001f53a4
// Address: 0x1f53a4 - 0x1f53e0
void entry_001f53a4_0x1f53a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f53a4_0x1f53a4");
#endif

    switch (ctx->pc) {
        case 0x1f53d0u: goto label_1f53d0;
        default: break;
    }

    ctx->pc = 0x1f53a4u;

label_1f53a4:
    // 0x1f53a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f53a8:
    // 0x1f53a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f53ac:
    // 0x1f53ac: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1f53acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1f53b0:
    // 0x1f53b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f53b4:
    // 0x1f53b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f53b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f53b8:
    // 0x1f53b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f53bc:
    // 0x1f53bc: 0x24429ed0  addiu       $v0, $v0, -0x6130
    ctx->pc = 0x1f53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942416));
label_1f53c0:
    // 0x1f53c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f53c4:
    // 0x1f53c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f53c8:
    // 0x1f53c8: 0x40f809  jalr        $v0
label_1f53cc:
    if (ctx->pc == 0x1F53CCu) {
        ctx->pc = 0x1F53D0u;
        goto label_1f53d0;
    }
    ctx->pc = 0x1F53C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F53D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53C8u, 0x1F53D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F53D0u;
label_1f53d0:
    // 0x1f53d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f53d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f53d4:
    // 0x1f53d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f53d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f53d8:
    // 0x1f53d8: 0x3e00008  jr          $ra
label_1f53dc:
    if (ctx->pc == 0x1F53DCu) {
        ctx->pc = 0x1F53E0u;
        goto label_fallthrough_0x1f53d8;
    }
    ctx->pc = 0x1F53D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f53d8:
    ctx->pc = 0x1F53E0u;
}
