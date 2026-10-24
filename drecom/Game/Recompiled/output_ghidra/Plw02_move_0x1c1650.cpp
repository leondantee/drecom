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

// Function: Plw02_move
// Address: 0x1c1650 - 0x1c16d0
void Plw02_move_0x1c1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_move_0x1c1650");
#endif

    switch (ctx->pc) {
        case 0x1c1650u: goto label_1c1650;
        case 0x1c1654u: goto label_1c1654;
        case 0x1c1658u: goto label_1c1658;
        case 0x1c165cu: goto label_1c165c;
        case 0x1c1660u: goto label_1c1660;
        case 0x1c1664u: goto label_1c1664;
        case 0x1c1668u: goto label_1c1668;
        case 0x1c166cu: goto label_1c166c;
        case 0x1c1670u: goto label_1c1670;
        case 0x1c1674u: goto label_1c1674;
        case 0x1c1678u: goto label_1c1678;
        case 0x1c167cu: goto label_1c167c;
        case 0x1c1680u: goto label_1c1680;
        case 0x1c1684u: goto label_1c1684;
        case 0x1c1688u: goto label_1c1688;
        case 0x1c168cu: goto label_1c168c;
        case 0x1c1690u: goto label_1c1690;
        case 0x1c1694u: goto label_1c1694;
        case 0x1c1698u: goto label_1c1698;
        case 0x1c169cu: goto label_1c169c;
        case 0x1c16a0u: goto label_1c16a0;
        case 0x1c16a4u: goto label_1c16a4;
        case 0x1c16a8u: goto label_1c16a8;
        case 0x1c16acu: goto label_1c16ac;
        case 0x1c16b0u: goto label_1c16b0;
        case 0x1c16b4u: goto label_1c16b4;
        case 0x1c16b8u: goto label_1c16b8;
        case 0x1c16bcu: goto label_1c16bc;
        case 0x1c16c0u: goto label_1c16c0;
        case 0x1c16c4u: goto label_1c16c4;
        case 0x1c16c8u: goto label_1c16c8;
        case 0x1c16ccu: goto label_1c16cc;
        default: break;
    }

    ctx->pc = 0x1c1650u;

label_1c1650:
    // 0x1c1650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c1654:
    // 0x1c1654: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c1654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1c1658:
    // 0x1c1658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c165c:
    // 0x1c165c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1c1660:
    // 0x1c1660: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c1660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c1664:
    // 0x1c1664: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1c1664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c1668:
    // 0x1c1668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c166c:
    // 0x1c166c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1c166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1c1670:
    // 0x1c1670: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x1c1670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
label_1c1674:
    // 0x1c1674: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1c1674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1c1678:
    // 0x1c1678: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x1c1678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
label_1c167c:
    // 0x1c167c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1680:
    // 0x1c1680: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1c1684:
    // 0x1c1684: 0x94620460  lhu         $v0, 0x460($v1)
    ctx->pc = 0x1c1684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1120)));
label_1c1688:
    // 0x1c1688: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1c1688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1c168c:
    // 0x1c168c: 0xa4620460  sh          $v0, 0x460($v1)
    ctx->pc = 0x1c168cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1120), (uint16_t)GPR_U32(ctx, 2));
label_1c1690:
    // 0x1c1690: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1694:
    // 0x1c1694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1698:
    // 0x1c1698: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c1698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c169c:
    // 0x1c169c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c16a0:
    // 0x1c16a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c16a4:
    // 0x1c16a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c16a8:
    // 0x1c16a8: 0x24429110  addiu       $v0, $v0, -0x6EF0
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
label_1c16ac:
    // 0x1c16ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c16b0:
    // 0x1c16b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c16b4:
    // 0x1c16b4: 0x40f809  jalr        $v0
label_1c16b8:
    if (ctx->pc == 0x1C16B8u) {
        ctx->pc = 0x1C16BCu;
        goto label_1c16bc;
    }
    ctx->pc = 0x1C16B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C16BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C16B4u, 0x1C16BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C16BCu;
label_1c16bc:
    // 0x1c16bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c16bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c16c0:
    // 0x1c16c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c16c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c16c4:
    // 0x1c16c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c16c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c16c8:
    // 0x1c16c8: 0x3e00008  jr          $ra
label_1c16cc:
    if (ctx->pc == 0x1C16CCu) {
        ctx->pc = 0x1C16D0u;
        goto label_fallthrough_0x1c16c8;
    }
    ctx->pc = 0x1C16C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C16C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c16c8:
    ctx->pc = 0x1C16D0u;
}
