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

// Function: Em0b_R0_reset
// Address: 0x1f8090 - 0x1f80e0
void Em0b_R0_reset_0x1f8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R0_reset_0x1f8090");
#endif

    switch (ctx->pc) {
        case 0x1f8090u: goto label_1f8090;
        case 0x1f8094u: goto label_1f8094;
        case 0x1f8098u: goto label_1f8098;
        case 0x1f809cu: goto label_1f809c;
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f80acu: goto label_1f80ac;
        case 0x1f80b0u: goto label_1f80b0;
        case 0x1f80b4u: goto label_1f80b4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80c4u: goto label_1f80c4;
        case 0x1f80c8u: goto label_1f80c8;
        case 0x1f80ccu: goto label_1f80cc;
        case 0x1f80d0u: goto label_1f80d0;
        case 0x1f80d4u: goto label_1f80d4;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80dcu: goto label_1f80dc;
        default: break;
    }

    ctx->pc = 0x1f8090u;

label_1f8090:
    // 0x1f8090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f8094:
    // 0x1f8094: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f8094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1f8098:
    // 0x1f8098: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f8098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1f809c:
    // 0x1f809c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f80a0:
    // 0x1f80a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f80a4:
    // 0x1f80a4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1f80a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_1f80a8:
    // 0x1f80a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f80a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f80ac:
    // 0x1f80ac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f80acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_1f80b0:
    // 0x1f80b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f80b4:
    // 0x1f80b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f80b8:
    // 0x1f80b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f80bc:
    // 0x1f80bc: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x1f80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
label_1f80c0:
    // 0x1f80c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f80c4:
    // 0x1f80c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f80c8:
    // 0x1f80c8: 0x40f809  jalr        $v0
label_1f80cc:
    if (ctx->pc == 0x1F80CCu) {
        ctx->pc = 0x1F80D0u;
        goto label_1f80d0;
    }
    ctx->pc = 0x1F80C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F80D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F80C8u, 0x1F80D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F80D0u;
label_1f80d0:
    // 0x1f80d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f80d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f80d4:
    // 0x1f80d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f80d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f80d8:
    // 0x1f80d8: 0x3e00008  jr          $ra
label_1f80dc:
    if (ctx->pc == 0x1F80DCu) {
        ctx->pc = 0x1F80E0u;
        goto label_fallthrough_0x1f80d8;
    }
    ctx->pc = 0x1F80D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F80D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f80d8:
    ctx->pc = 0x1F80E0u;
}
