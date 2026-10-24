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

// Function: Em0d_R0_die
// Address: 0x23f710 - 0x23f758
void Em0d_R0_die_0x23f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R0_die_0x23f710");
#endif

    switch (ctx->pc) {
        case 0x23f710u: goto label_23f710;
        case 0x23f714u: goto label_23f714;
        case 0x23f718u: goto label_23f718;
        case 0x23f71cu: goto label_23f71c;
        case 0x23f720u: goto label_23f720;
        case 0x23f724u: goto label_23f724;
        case 0x23f728u: goto label_23f728;
        case 0x23f72cu: goto label_23f72c;
        case 0x23f730u: goto label_23f730;
        case 0x23f734u: goto label_23f734;
        case 0x23f738u: goto label_23f738;
        case 0x23f73cu: goto label_23f73c;
        case 0x23f740u: goto label_23f740;
        case 0x23f744u: goto label_23f744;
        case 0x23f748u: goto label_23f748;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f750u: goto label_23f750;
        case 0x23f754u: goto label_23f754;
        default: break;
    }

    ctx->pc = 0x23f710u;

label_23f710:
    // 0x23f710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f714:
    // 0x23f714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x23f714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_23f718:
    // 0x23f718: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x23f718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_23f71c:
    // 0x23f71c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23f720:
    // 0x23f720: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23f724:
    // 0x23f724: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x23f724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_23f728:
    // 0x23f728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23f72c:
    // 0x23f72c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23f730:
    // 0x23f730: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x23f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_23f734:
    // 0x23f734: 0x2442b288  addiu       $v0, $v0, -0x4D78
    ctx->pc = 0x23f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947464));
label_23f738:
    // 0x23f738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23f73c:
    // 0x23f73c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f740:
    // 0x23f740: 0x40f809  jalr        $v0
label_23f744:
    if (ctx->pc == 0x23F744u) {
        ctx->pc = 0x23F748u;
        goto label_23f748;
    }
    ctx->pc = 0x23F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F748u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F740u, 0x23F748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F748u;
label_23f748:
    // 0x23f748: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23f748u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23f74c:
    // 0x23f74c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23f74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23f750:
    // 0x23f750: 0x3e00008  jr          $ra
label_23f754:
    if (ctx->pc == 0x23F754u) {
        ctx->pc = 0x23F758u;
        goto label_fallthrough_0x23f750;
    }
    ctx->pc = 0x23F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23f750:
    ctx->pc = 0x23F758u;
}
