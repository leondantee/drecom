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

// Function: Om85_R0_damage
// Address: 0x360a90 - 0x360ad8
void Om85_R0_damage_0x360a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om85_R0_damage_0x360a90");
#endif

    switch (ctx->pc) {
        case 0x360a90u: goto label_360a90;
        case 0x360a94u: goto label_360a94;
        case 0x360a98u: goto label_360a98;
        case 0x360a9cu: goto label_360a9c;
        case 0x360aa0u: goto label_360aa0;
        case 0x360aa4u: goto label_360aa4;
        case 0x360aa8u: goto label_360aa8;
        case 0x360aacu: goto label_360aac;
        case 0x360ab0u: goto label_360ab0;
        case 0x360ab4u: goto label_360ab4;
        case 0x360ab8u: goto label_360ab8;
        case 0x360abcu: goto label_360abc;
        case 0x360ac0u: goto label_360ac0;
        case 0x360ac4u: goto label_360ac4;
        case 0x360ac8u: goto label_360ac8;
        case 0x360accu: goto label_360acc;
        case 0x360ad0u: goto label_360ad0;
        case 0x360ad4u: goto label_360ad4;
        default: break;
    }

    ctx->pc = 0x360a90u;

label_360a90:
    // 0x360a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_360a94:
    // 0x360a94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x360a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_360a98:
    // 0x360a98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x360a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_360a9c:
    // 0x360a9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_360aa0:
    // 0x360aa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x360aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_360aa4:
    // 0x360aa4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x360aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_360aa8:
    // 0x360aa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_360aac:
    // 0x360aac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x360aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_360ab0:
    // 0x360ab0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x360ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_360ab4:
    // 0x360ab4: 0x2442ac38  addiu       $v0, $v0, -0x53C8
    ctx->pc = 0x360ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945848));
label_360ab8:
    // 0x360ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_360abc:
    // 0x360abc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_360ac0:
    // 0x360ac0: 0x40f809  jalr        $v0
label_360ac4:
    if (ctx->pc == 0x360AC4u) {
        ctx->pc = 0x360AC8u;
        goto label_360ac8;
    }
    ctx->pc = 0x360AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360AC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360AC0u, 0x360AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360AC8u;
label_360ac8:
    // 0x360ac8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360ac8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360acc:
    // 0x360acc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_360ad0:
    // 0x360ad0: 0x3e00008  jr          $ra
label_360ad4:
    if (ctx->pc == 0x360AD4u) {
        ctx->pc = 0x360AD8u;
        goto label_fallthrough_0x360ad0;
    }
    ctx->pc = 0x360AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x360ad0:
    ctx->pc = 0x360AD8u;
}
