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

// Function: Em02_R0_move
// Address: 0x29dd40 - 0x29ddb4
void Em02_R0_move_0x29dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R0_move_0x29dd40");
#endif

    switch (ctx->pc) {
        case 0x29dd40u: goto label_29dd40;
        case 0x29dd44u: goto label_29dd44;
        case 0x29dd48u: goto label_29dd48;
        case 0x29dd4cu: goto label_29dd4c;
        case 0x29dd50u: goto label_29dd50;
        case 0x29dd54u: goto label_29dd54;
        case 0x29dd58u: goto label_29dd58;
        case 0x29dd5cu: goto label_29dd5c;
        case 0x29dd60u: goto label_29dd60;
        case 0x29dd64u: goto label_29dd64;
        case 0x29dd68u: goto label_29dd68;
        case 0x29dd6cu: goto label_29dd6c;
        case 0x29dd70u: goto label_29dd70;
        case 0x29dd74u: goto label_29dd74;
        case 0x29dd78u: goto label_29dd78;
        case 0x29dd7cu: goto label_29dd7c;
        case 0x29dd80u: goto label_29dd80;
        case 0x29dd84u: goto label_29dd84;
        case 0x29dd88u: goto label_29dd88;
        case 0x29dd8cu: goto label_29dd8c;
        case 0x29dd90u: goto label_29dd90;
        case 0x29dd94u: goto label_29dd94;
        case 0x29dd98u: goto label_29dd98;
        case 0x29dd9cu: goto label_29dd9c;
        case 0x29dda0u: goto label_29dda0;
        case 0x29dda4u: goto label_29dda4;
        case 0x29dda8u: goto label_29dda8;
        case 0x29ddacu: goto label_29ddac;
        case 0x29ddb0u: goto label_29ddb0;
        default: break;
    }

    ctx->pc = 0x29dd40u;

label_29dd40:
    // 0x29dd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29dd44:
    // 0x29dd44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29dd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_29dd48:
    // 0x29dd48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x29dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_29dd4c:
    // 0x29dd4c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_29dd50:
    // 0x29dd50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x29dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_29dd54:
    // 0x29dd54: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x29dd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_29dd58:
    // 0x29dd58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29dd5c:
    // 0x29dd5c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29dd60:
    // 0x29dd60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29dd64:
    // 0x29dd64: 0x24426ad0  addiu       $v0, $v0, 0x6AD0
    ctx->pc = 0x29dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27344));
label_29dd68:
    // 0x29dd68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29dd6c:
    // 0x29dd6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29dd70:
    // 0x29dd70: 0x40f809  jalr        $v0
label_29dd74:
    if (ctx->pc == 0x29DD74u) {
        ctx->pc = 0x29DD78u;
        goto label_29dd78;
    }
    ctx->pc = 0x29DD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DD78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD70u, 0x29DD78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DD78u;
label_29dd78:
    // 0x29dd78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_29dd7c:
    // 0x29dd7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_29dd80:
    // 0x29dd80: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x29dd80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_29dd84:
    // 0x29dd84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29dd88:
    // 0x29dd88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29dd8c:
    // 0x29dd8c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29dd90:
    // 0x29dd90: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x29dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
label_29dd94:
    // 0x29dd94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29dd98:
    // 0x29dd98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29dd9c:
    // 0x29dd9c: 0x40f809  jalr        $v0
label_29dda0:
    if (ctx->pc == 0x29DDA0u) {
        ctx->pc = 0x29DDA4u;
        goto label_29dda4;
    }
    ctx->pc = 0x29DD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DDA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD9Cu, 0x29DDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DDA4u;
label_29dda4:
    // 0x29dda4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29dda4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29dda8:
    // 0x29dda8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29dda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29ddac:
    // 0x29ddac: 0x3e00008  jr          $ra
label_29ddb0:
    if (ctx->pc == 0x29DDB0u) {
        ctx->pc = 0x29DDB4u;
        goto label_fallthrough_0x29ddac;
    }
    ctx->pc = 0x29DDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ddac:
    ctx->pc = 0x29DDB4u;
}
