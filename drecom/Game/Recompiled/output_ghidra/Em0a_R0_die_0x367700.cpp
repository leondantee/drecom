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

// Function: Em0a_R0_die
// Address: 0x367700 - 0x367774
void Em0a_R0_die_0x367700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R0_die_0x367700");
#endif

    switch (ctx->pc) {
        case 0x367700u: goto label_367700;
        case 0x367704u: goto label_367704;
        case 0x367708u: goto label_367708;
        case 0x36770cu: goto label_36770c;
        case 0x367710u: goto label_367710;
        case 0x367714u: goto label_367714;
        case 0x367718u: goto label_367718;
        case 0x36771cu: goto label_36771c;
        case 0x367720u: goto label_367720;
        case 0x367724u: goto label_367724;
        case 0x367728u: goto label_367728;
        case 0x36772cu: goto label_36772c;
        case 0x367730u: goto label_367730;
        case 0x367734u: goto label_367734;
        case 0x367738u: goto label_367738;
        case 0x36773cu: goto label_36773c;
        case 0x367740u: goto label_367740;
        case 0x367744u: goto label_367744;
        case 0x367748u: goto label_367748;
        case 0x36774cu: goto label_36774c;
        case 0x367750u: goto label_367750;
        case 0x367754u: goto label_367754;
        case 0x367758u: goto label_367758;
        case 0x36775cu: goto label_36775c;
        case 0x367760u: goto label_367760;
        case 0x367764u: goto label_367764;
        case 0x367768u: goto label_367768;
        case 0x36776cu: goto label_36776c;
        case 0x367770u: goto label_367770;
        default: break;
    }

    ctx->pc = 0x367700u;

label_367700:
    // 0x367700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_367704:
    // 0x367704: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x367704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_367708:
    // 0x367708: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x367708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36770c:
    // 0x36770c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367710:
    // 0x367710: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367714:
    // 0x367714: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x367714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_367718:
    // 0x367718: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36771c:
    // 0x36771c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36771cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_367720:
    // 0x367720: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x367720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_367724:
    // 0x367724: 0x2442b028  addiu       $v0, $v0, -0x4FD8
    ctx->pc = 0x367724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946856));
label_367728:
    // 0x367728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36772c:
    // 0x36772c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_367730:
    // 0x367730: 0x40f809  jalr        $v0
label_367734:
    if (ctx->pc == 0x367734u) {
        ctx->pc = 0x367738u;
        goto label_367738;
    }
    ctx->pc = 0x367730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x367738u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367730u, 0x367738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x367738u;
label_367738:
    // 0x367738: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36773c:
    // 0x36773c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367740:
    // 0x367740: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x367740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_367744:
    // 0x367744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367748:
    // 0x367748: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x367748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36774c:
    // 0x36774c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36774cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_367750:
    // 0x367750: 0x2442b030  addiu       $v0, $v0, -0x4FD0
    ctx->pc = 0x367750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946864));
label_367754:
    // 0x367754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_367758:
    // 0x367758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x367758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36775c:
    // 0x36775c: 0x40f809  jalr        $v0
label_367760:
    if (ctx->pc == 0x367760u) {
        ctx->pc = 0x367764u;
        goto label_367764;
    }
    ctx->pc = 0x36775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x367764u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36775Cu, 0x367764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x367764u;
label_367764:
    // 0x367764: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x367764u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367768:
    // 0x367768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x367768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36776c:
    // 0x36776c: 0x3e00008  jr          $ra
label_367770:
    if (ctx->pc == 0x367770u) {
        ctx->pc = 0x367774u;
        goto label_fallthrough_0x36776c;
    }
    ctx->pc = 0x36776Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36776Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36776c:
    ctx->pc = 0x367774u;
}
