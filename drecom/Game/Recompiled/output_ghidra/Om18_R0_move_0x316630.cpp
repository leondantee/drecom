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

// Function: Om18_R0_move
// Address: 0x316630 - 0x316678
void Om18_R0_move_0x316630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R0_move_0x316630");
#endif

    switch (ctx->pc) {
        case 0x316630u: goto label_316630;
        case 0x316634u: goto label_316634;
        case 0x316638u: goto label_316638;
        case 0x31663cu: goto label_31663c;
        case 0x316640u: goto label_316640;
        case 0x316644u: goto label_316644;
        case 0x316648u: goto label_316648;
        case 0x31664cu: goto label_31664c;
        case 0x316650u: goto label_316650;
        case 0x316654u: goto label_316654;
        case 0x316658u: goto label_316658;
        case 0x31665cu: goto label_31665c;
        case 0x316660u: goto label_316660;
        case 0x316664u: goto label_316664;
        case 0x316668u: goto label_316668;
        case 0x31666cu: goto label_31666c;
        case 0x316670u: goto label_316670;
        case 0x316674u: goto label_316674;
        default: break;
    }

    ctx->pc = 0x316630u;

label_316630:
    // 0x316630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_316634:
    // 0x316634: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x316634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_316638:
    // 0x316638: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x316638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_31663c:
    // 0x31663c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_316640:
    // 0x316640: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x316640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_316644:
    // 0x316644: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x316644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_316648:
    // 0x316648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x316648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31664c:
    // 0x31664c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31664cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_316650:
    // 0x316650: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x316650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_316654:
    // 0x316654: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x316654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_316658:
    // 0x316658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31665c:
    // 0x31665c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316660:
    // 0x316660: 0x40f809  jalr        $v0
label_316664:
    if (ctx->pc == 0x316664u) {
        ctx->pc = 0x316668u;
        goto label_316668;
    }
    ctx->pc = 0x316660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x316668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316660u, 0x316668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316668u;
label_316668:
    // 0x316668: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x316668u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31666c:
    // 0x31666c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31666cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316670:
    // 0x316670: 0x3e00008  jr          $ra
label_316674:
    if (ctx->pc == 0x316674u) {
        ctx->pc = 0x316678u;
        goto label_fallthrough_0x316670;
    }
    ctx->pc = 0x316670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x316670:
    ctx->pc = 0x316678u;
}
