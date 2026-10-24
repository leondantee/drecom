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

// Function: Em1a_R1_die_normal
// Address: 0x360730 - 0x360898
void Em1a_R1_die_normal_0x360730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R1_die_normal_0x360730");
#endif

    switch (ctx->pc) {
        case 0x36079cu: goto label_36079c;
        case 0x3607dcu: goto label_3607dc;
        case 0x3607e8u: goto label_3607e8;
        case 0x3607f8u: goto label_3607f8;
        case 0x360804u: goto label_360804;
        case 0x36084cu: goto label_36084c;
        case 0x36086cu: goto label_36086c;
        case 0x36087cu: goto label_36087c;
        case 0x360888u: goto label_360888;
        default: break;
    }

    ctx->pc = 0x360730u;

    // 0x360730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360734: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x360734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x360738: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x360738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36073c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360740: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x360740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x360744: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x360744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x360748: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x360748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36074c: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x36074Cu;
    {
        const bool branch_taken_0x36074c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36074c) {
            ctx->pc = 0x36085Cu;
            goto label_36085c;
        }
    }
    ctx->pc = 0x360754u;
    // 0x360754: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x360754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x360758: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x360758u;
    {
        const bool branch_taken_0x360758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x360758) {
            ctx->pc = 0x36082Cu;
            goto label_36082c;
        }
    }
    ctx->pc = 0x360760u;
    // 0x360760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360764: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x360764u;
    {
        const bool branch_taken_0x360764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x360764) {
            ctx->pc = 0x3607CCu;
            goto label_3607cc;
        }
    }
    ctx->pc = 0x36076Cu;
    // 0x36076c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36076Cu;
    {
        const bool branch_taken_0x36076c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36076c) {
            ctx->pc = 0x36077Cu;
            goto label_36077c;
        }
    }
    ctx->pc = 0x360774u;
    // 0x360774: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x360774u;
    {
        const bool branch_taken_0x360774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360774) {
            ctx->pc = 0x360888u;
            goto label_360888;
        }
    }
    ctx->pc = 0x36077Cu;
label_36077c:
    // 0x36077c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360784: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360788: 0x24060a05  addiu       $a2, $zero, 0xA05
    ctx->pc = 0x360788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2565));
    // 0x36078c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36078cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360790: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360794: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360794u;
    SET_GPR_U32(ctx, 31, 0x36079Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360794u, 0x36079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36079Cu;
label_36079c:
    // 0x36079c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3607a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3607a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607a4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x3607a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x3607a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607ac: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x3607acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x3607b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3607b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3607b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3607b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3607b8: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x3607b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x3607bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3607bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607c0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3607c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3607c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3607c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3607c8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3607c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3607cc:
    // 0x3607cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3607d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3607d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3607D4u;
    SET_GPR_U32(ctx, 31, 0x3607DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3607D4u, 0x3607DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607DCu;
label_3607dc:
    // 0x3607dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3607E0u;
    SET_GPR_U32(ctx, 31, 0x3607E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3607E0u, 0x3607E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607E8u;
label_3607e8:
    // 0x3607e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3607ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3607f0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3607F0u;
    SET_GPR_U32(ctx, 31, 0x3607F8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3607F0u, 0x3607F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607F8u;
label_3607f8:
    // 0x3607f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607fc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3607FCu;
    SET_GPR_U32(ctx, 31, 0x360804u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3607FCu, 0x360804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360804u;
label_360804:
    // 0x360804: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x360804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360808: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36080c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x36080Cu;
    {
        const bool branch_taken_0x36080c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36080c) {
            ctx->pc = 0x360888u;
            goto label_360888;
        }
    }
    ctx->pc = 0x360814u;
    // 0x360814: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360818: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x360818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x36081c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x360820: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x360820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x360824: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x360824u;
    {
        const bool branch_taken_0x360824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360824) {
            ctx->pc = 0x360888u;
            goto label_360888;
        }
    }
    ctx->pc = 0x36082Cu;
label_36082c:
    // 0x36082c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360830: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360834: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360838: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x360838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36083c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36083cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360840: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360844: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360844u;
    SET_GPR_U32(ctx, 31, 0x36084Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360844u, 0x36084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36084Cu;
label_36084c:
    // 0x36084c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360850: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x360850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x360854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x360854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x360858: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x360858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36085c:
    // 0x36085c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360864: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x360864u;
    SET_GPR_U32(ctx, 31, 0x36086Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x360864u, 0x36086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36086Cu;
label_36086c:
    // 0x36086c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360870: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x360870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x360874: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x360874u;
    SET_GPR_U32(ctx, 31, 0x36087Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x360874u, 0x36087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36087Cu;
label_36087c:
    // 0x36087c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360880: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x360880u;
    SET_GPR_U32(ctx, 31, 0x360888u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x360880u, 0x360888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360888u;
label_360888:
    // 0x360888: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36088c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36088cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x360890: 0x3e00008  jr          $ra
    ctx->pc = 0x360890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360898u;
}
