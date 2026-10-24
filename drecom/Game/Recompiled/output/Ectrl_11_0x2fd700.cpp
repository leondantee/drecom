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

// Function: Ectrl_11
// Address: 0x2fd700 - 0x2fd744
void Ectrl_11_0x2fd700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_11_0x2fd700");
#endif

    switch (ctx->pc) {
        case 0x2fd700u: goto label_2fd700;
        case 0x2fd704u: goto label_2fd704;
        case 0x2fd708u: goto label_2fd708;
        case 0x2fd70cu: goto label_2fd70c;
        case 0x2fd710u: goto label_2fd710;
        case 0x2fd714u: goto label_2fd714;
        case 0x2fd718u: goto label_2fd718;
        case 0x2fd71cu: goto label_2fd71c;
        case 0x2fd720u: goto label_2fd720;
        case 0x2fd724u: goto label_2fd724;
        case 0x2fd728u: goto label_2fd728;
        case 0x2fd72cu: goto label_2fd72c;
        case 0x2fd730u: goto label_2fd730;
        case 0x2fd734u: goto label_2fd734;
        case 0x2fd738u: goto label_2fd738;
        case 0x2fd73cu: goto label_2fd73c;
        case 0x2fd740u: goto label_2fd740;
        default: break;
    }

    ctx->pc = 0x2fd700u;

label_2fd700:
    // 0x2fd700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fd704:
    // 0x2fd704: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fd704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fd708:
    // 0x2fd708: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fd708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fd70c:
    // 0x2fd70c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fd70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fd710:
    // 0x2fd710: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fd710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fd714:
    // 0x2fd714: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fd714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fd718:
    // 0x2fd718: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fd718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fd71c:
    // 0x2fd71c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fd720:
    // 0x2fd720: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x2fd720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_2fd724:
    // 0x2fd724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fd724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fd728:
    // 0x2fd728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fd728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fd72c:
    // 0x2fd72c: 0x40f809  jalr        $v0
label_2fd730:
    if (ctx->pc == 0x2FD730u) {
        ctx->pc = 0x2FD734u;
        goto label_2fd734;
    }
    ctx->pc = 0x2FD72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FD734u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD72Cu, 0x2FD734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FD734u;
label_2fd734:
    // 0x2fd734: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fd734u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd738:
    // 0x2fd738: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fd738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fd73c:
    // 0x2fd73c: 0x3e00008  jr          $ra
label_2fd740:
    if (ctx->pc == 0x2FD740u) {
        ctx->pc = 0x2FD744u;
        goto label_fallthrough_0x2fd73c;
    }
    ctx->pc = 0x2FD73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fd73c:
    ctx->pc = 0x2FD744u;
}
