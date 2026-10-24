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

// Function: Em01s_R0_move
// Address: 0x3085c0 - 0x308654
void Em01s_R0_move_0x3085c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R0_move_0x3085c0");
#endif

    switch (ctx->pc) {
        case 0x3085c0u: goto label_3085c0;
        case 0x3085c4u: goto label_3085c4;
        case 0x3085c8u: goto label_3085c8;
        case 0x3085ccu: goto label_3085cc;
        case 0x3085d0u: goto label_3085d0;
        case 0x3085d4u: goto label_3085d4;
        case 0x3085d8u: goto label_3085d8;
        case 0x3085dcu: goto label_3085dc;
        case 0x3085e0u: goto label_3085e0;
        case 0x3085e4u: goto label_3085e4;
        case 0x3085e8u: goto label_3085e8;
        case 0x3085ecu: goto label_3085ec;
        case 0x3085f0u: goto label_3085f0;
        case 0x3085f4u: goto label_3085f4;
        case 0x3085f8u: goto label_3085f8;
        case 0x3085fcu: goto label_3085fc;
        case 0x308600u: goto label_308600;
        case 0x308604u: goto label_308604;
        case 0x308608u: goto label_308608;
        case 0x30860cu: goto label_30860c;
        case 0x308610u: goto label_308610;
        case 0x308614u: goto label_308614;
        case 0x308618u: goto label_308618;
        case 0x30861cu: goto label_30861c;
        case 0x308620u: goto label_308620;
        case 0x308624u: goto label_308624;
        case 0x308628u: goto label_308628;
        case 0x30862cu: goto label_30862c;
        case 0x308630u: goto label_308630;
        case 0x308634u: goto label_308634;
        case 0x308638u: goto label_308638;
        case 0x30863cu: goto label_30863c;
        case 0x308640u: goto label_308640;
        case 0x308644u: goto label_308644;
        case 0x308648u: goto label_308648;
        case 0x30864cu: goto label_30864c;
        case 0x308650u: goto label_308650;
        default: break;
    }

    ctx->pc = 0x3085c0u;

label_3085c0:
    // 0x3085c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3085c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3085c4:
    // 0x3085c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3085c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3085c8:
    // 0x3085c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3085c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3085cc:
    // 0x3085cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3085ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3085d0:
    // 0x3085d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3085d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3085d4:
    // 0x3085d4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3085d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3085d8:
    // 0x3085d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3085d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3085dc:
    // 0x3085dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3085e0:
    // 0x3085e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3085e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3085e4:
    // 0x3085e4: 0x24429440  addiu       $v0, $v0, -0x6BC0
    ctx->pc = 0x3085e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
label_3085e8:
    // 0x3085e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3085e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3085ec:
    // 0x3085ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3085ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3085f0:
    // 0x3085f0: 0x40f809  jalr        $v0
label_3085f4:
    if (ctx->pc == 0x3085F4u) {
        ctx->pc = 0x3085F8u;
        goto label_3085f8;
    }
    ctx->pc = 0x3085F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3085F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3085F0u, 0x3085F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3085F8u;
label_3085f8:
    // 0x3085f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3085f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3085fc:
    // 0x3085fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3085fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_308600:
    // 0x308600: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x308600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_308604:
    // 0x308604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_308608:
    // 0x308608: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x308608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30860c:
    // 0x30860c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_308610:
    // 0x308610: 0x24429470  addiu       $v0, $v0, -0x6B90
    ctx->pc = 0x308610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939760));
label_308614:
    // 0x308614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308618:
    // 0x308618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x308618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30861c:
    // 0x30861c: 0x40f809  jalr        $v0
label_308620:
    if (ctx->pc == 0x308620u) {
        ctx->pc = 0x308624u;
        goto label_308624;
    }
    ctx->pc = 0x30861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308624u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30861Cu, 0x308624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308624u;
label_308624:
    // 0x308624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_308628:
    // 0x308628: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x308628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_30862c:
    // 0x30862c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_308630:
    if (ctx->pc == 0x308630u) {
        ctx->pc = 0x308634u;
        goto label_308634;
    }
    ctx->pc = 0x30862Cu;
    {
        const bool branch_taken_0x30862c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30862c) {
            ctx->pc = 0x308644u;
            goto label_308644;
        }
    }
    ctx->pc = 0x308634u;
label_308634:
    // 0x308634: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_308638:
    // 0x308638: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x308638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_30863c:
    // 0x30863c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_308640:
    // 0x308640: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x308640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_308644:
    // 0x308644: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308644u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_308648:
    // 0x308648: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30864c:
    // 0x30864c: 0x3e00008  jr          $ra
label_308650:
    if (ctx->pc == 0x308650u) {
        ctx->pc = 0x308654u;
        goto label_fallthrough_0x30864c;
    }
    ctx->pc = 0x30864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30864Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30864c:
    ctx->pc = 0x308654u;
}
