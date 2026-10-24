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

// Function: entry_003335c0
// Address: 0x3335c0 - 0x333634
void entry_003335c0_0x3335c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003335c0_0x3335c0");
#endif

    switch (ctx->pc) {
        case 0x3335f4u: goto label_3335f4;
        default: break;
    }

    ctx->pc = 0x3335c0u;

    // 0x3335c0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3335c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3335c4: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3335c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3335c8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3335c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3335cc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x3335ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x3335d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3335d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3335d4: 0x3c021e03  lui         $v0, 0x1E03
    ctx->pc = 0x3335d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7683 << 16));
    // 0x3335d8: 0x34420509  ori         $v0, $v0, 0x509
    ctx->pc = 0x3335d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1289);
    // 0x3335dc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3335dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3335e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3335e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3335e4: 0x244520e0  addiu       $a1, $v0, 0x20E0
    ctx->pc = 0x3335e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8416));
    // 0x3335e8: 0x8e076850  lw          $a3, 0x6850($s0)
    ctx->pc = 0x3335e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x3335ec: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3335ECu;
    SET_GPR_U32(ctx, 31, 0x3335F4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3335ECu, 0x3335F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3335F4u;
label_3335f4:
    // 0x3335f4: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3335f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3335f8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x3335f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3335fc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3335fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x333600: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x333600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x333604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333608: 0x549823  subu        $s3, $v0, $s4
    ctx->pc = 0x333608u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x33360c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33360cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333610: 0x8c232798  lw          $v1, 0x2798($at)
    ctx->pc = 0x333610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892798u));
    // 0x333614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333618: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x333618u;
    {
        const bool branch_taken_0x333618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333618) {
            ctx->pc = 0x3336E0u;
            return;
        }
    }
    ctx->pc = 0x333620u;
    // 0x333620: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333624: 0x8c352720  lw          $s5, 0x2720($at)
    ctx->pc = 0x333624u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x892720u));
    // 0x333628: 0x6a10002  bgez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x333628u;
    {
        const bool branch_taken_0x333628 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x333628) {
            ctx->pc = 0x333634u;
            return;
        }
    }
    ctx->pc = 0x333630u;
    // 0x333630: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x333630u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    ctx->pc = 0x333634u;
}
