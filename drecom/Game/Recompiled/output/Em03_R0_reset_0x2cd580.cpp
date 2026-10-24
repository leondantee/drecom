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

// Function: Em03_R0_reset
// Address: 0x2cd580 - 0x2cd5d0
void Em03_R0_reset_0x2cd580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R0_reset_0x2cd580");
#endif

    switch (ctx->pc) {
        case 0x2cd580u: goto label_2cd580;
        case 0x2cd584u: goto label_2cd584;
        case 0x2cd588u: goto label_2cd588;
        case 0x2cd58cu: goto label_2cd58c;
        case 0x2cd590u: goto label_2cd590;
        case 0x2cd594u: goto label_2cd594;
        case 0x2cd598u: goto label_2cd598;
        case 0x2cd59cu: goto label_2cd59c;
        case 0x2cd5a0u: goto label_2cd5a0;
        case 0x2cd5a4u: goto label_2cd5a4;
        case 0x2cd5a8u: goto label_2cd5a8;
        case 0x2cd5acu: goto label_2cd5ac;
        case 0x2cd5b0u: goto label_2cd5b0;
        case 0x2cd5b4u: goto label_2cd5b4;
        case 0x2cd5b8u: goto label_2cd5b8;
        case 0x2cd5bcu: goto label_2cd5bc;
        case 0x2cd5c0u: goto label_2cd5c0;
        case 0x2cd5c4u: goto label_2cd5c4;
        case 0x2cd5c8u: goto label_2cd5c8;
        case 0x2cd5ccu: goto label_2cd5cc;
        default: break;
    }

    ctx->pc = 0x2cd580u;

label_2cd580:
    // 0x2cd580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cd584:
    // 0x2cd584: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2cd584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2cd588:
    // 0x2cd588: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2cd588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2cd58c:
    // 0x2cd58c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2cd58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2cd590:
    // 0x2cd590: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2cd594:
    // 0x2cd594: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2cd594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_2cd598:
    // 0x2cd598: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cd598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cd59c:
    // 0x2cd59c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cd59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2cd5a0:
    // 0x2cd5a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2cd5a4:
    // 0x2cd5a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cd5a8:
    // 0x2cd5a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2cd5ac:
    // 0x2cd5ac: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x2cd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
label_2cd5b0:
    // 0x2cd5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cd5b4:
    // 0x2cd5b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd5b8:
    // 0x2cd5b8: 0x40f809  jalr        $v0
label_2cd5bc:
    if (ctx->pc == 0x2CD5BCu) {
        ctx->pc = 0x2CD5C0u;
        goto label_2cd5c0;
    }
    ctx->pc = 0x2CD5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD5C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD5B8u, 0x2CD5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD5C0u;
label_2cd5c0:
    // 0x2cd5c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2cd5c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd5c4:
    // 0x2cd5c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cd5c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cd5c8:
    // 0x2cd5c8: 0x3e00008  jr          $ra
label_2cd5cc:
    if (ctx->pc == 0x2CD5CCu) {
        ctx->pc = 0x2CD5D0u;
        goto label_fallthrough_0x2cd5c8;
    }
    ctx->pc = 0x2CD5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd5c8:
    ctx->pc = 0x2CD5D0u;
}
