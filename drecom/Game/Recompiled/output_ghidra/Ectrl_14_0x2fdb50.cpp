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

// Function: Ectrl_14
// Address: 0x2fdb50 - 0x2fdb94
void Ectrl_14_0x2fdb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_14_0x2fdb50");
#endif

    switch (ctx->pc) {
        case 0x2fdb50u: goto label_2fdb50;
        case 0x2fdb54u: goto label_2fdb54;
        case 0x2fdb58u: goto label_2fdb58;
        case 0x2fdb5cu: goto label_2fdb5c;
        case 0x2fdb60u: goto label_2fdb60;
        case 0x2fdb64u: goto label_2fdb64;
        case 0x2fdb68u: goto label_2fdb68;
        case 0x2fdb6cu: goto label_2fdb6c;
        case 0x2fdb70u: goto label_2fdb70;
        case 0x2fdb74u: goto label_2fdb74;
        case 0x2fdb78u: goto label_2fdb78;
        case 0x2fdb7cu: goto label_2fdb7c;
        case 0x2fdb80u: goto label_2fdb80;
        case 0x2fdb84u: goto label_2fdb84;
        case 0x2fdb88u: goto label_2fdb88;
        case 0x2fdb8cu: goto label_2fdb8c;
        case 0x2fdb90u: goto label_2fdb90;
        default: break;
    }

    ctx->pc = 0x2fdb50u;

label_2fdb50:
    // 0x2fdb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fdb54:
    // 0x2fdb54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fdb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fdb58:
    // 0x2fdb58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fdb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fdb5c:
    // 0x2fdb5c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fdb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fdb60:
    // 0x2fdb60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fdb64:
    // 0x2fdb64: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fdb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fdb68:
    // 0x2fdb68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fdb6c:
    // 0x2fdb6c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fdb70:
    // 0x2fdb70: 0x24429120  addiu       $v0, $v0, -0x6EE0
    ctx->pc = 0x2fdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938912));
label_2fdb74:
    // 0x2fdb74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fdb78:
    // 0x2fdb78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fdb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdb7c:
    // 0x2fdb7c: 0x40f809  jalr        $v0
label_2fdb80:
    if (ctx->pc == 0x2FDB80u) {
        ctx->pc = 0x2FDB84u;
        goto label_2fdb84;
    }
    ctx->pc = 0x2FDB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FDB84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB7Cu, 0x2FDB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FDB84u;
label_2fdb84:
    // 0x2fdb84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fdb84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdb88:
    // 0x2fdb88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fdb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fdb8c:
    // 0x2fdb8c: 0x3e00008  jr          $ra
label_2fdb90:
    if (ctx->pc == 0x2FDB90u) {
        ctx->pc = 0x2FDB94u;
        goto label_fallthrough_0x2fdb8c;
    }
    ctx->pc = 0x2FDB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fdb8c:
    ctx->pc = 0x2FDB94u;
}
