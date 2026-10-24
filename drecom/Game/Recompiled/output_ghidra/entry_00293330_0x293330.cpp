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

// Function: entry_00293330
// Address: 0x293330 - 0x2935a8
void entry_00293330_0x293330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293330_0x293330");
#endif

    switch (ctx->pc) {
        case 0x29335cu: goto label_29335c;
        case 0x293380u: goto label_293380;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933f4u: goto label_2933f4;
        case 0x293404u: goto label_293404;
        case 0x293410u: goto label_293410;
        case 0x293420u: goto label_293420;
        case 0x293430u: goto label_293430;
        case 0x293440u: goto label_293440;
        case 0x29344cu: goto label_29344c;
        case 0x29345cu: goto label_29345c;
        case 0x29346cu: goto label_29346c;
        case 0x29347cu: goto label_29347c;
        case 0x293488u: goto label_293488;
        case 0x293498u: goto label_293498;
        case 0x2934a8u: goto label_2934a8;
        case 0x2934b8u: goto label_2934b8;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934f8u: goto label_2934f8;
        case 0x293504u: goto label_293504;
        case 0x293518u: goto label_293518;
        case 0x293528u: goto label_293528;
        case 0x29353cu: goto label_29353c;
        case 0x29354cu: goto label_29354c;
        case 0x293560u: goto label_293560;
        case 0x293574u: goto label_293574;
        case 0x293588u: goto label_293588;
        case 0x293598u: goto label_293598;
        default: break;
    }

    ctx->pc = 0x293330u;

label_293330:
    // 0x293330: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x293330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_293334:
    // 0x293334: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
label_293338:
    if (ctx->pc == 0x293338u) {
        ctx->pc = 0x29333Cu;
        goto label_29333c;
    }
    ctx->pc = 0x293334u;
    {
        const bool branch_taken_0x293334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293334) {
            ctx->pc = 0x29319Cu;
            return;
        }
    }
    ctx->pc = 0x29333Cu;
label_29333c:
    // 0x29333c: 0x8e425dc4  lw          $v0, 0x5DC4($s2)
    ctx->pc = 0x29333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
label_293340:
    // 0x293340: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x293340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_293344:
    // 0x293344: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x293344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_293348:
    // 0x293348: 0x24426790  addiu       $v0, $v0, 0x6790
    ctx->pc = 0x293348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26512));
label_29334c:
    // 0x29334c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293350:
    // 0x293350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x293350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_293354:
    // 0x293354: 0x40f809  jalr        $v0
label_293358:
    if (ctx->pc == 0x293358u) {
        ctx->pc = 0x29335Cu;
        goto label_29335c;
    }
    ctx->pc = 0x293354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29335Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293354u, 0x29335Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29335Cu;
label_29335c:
    // 0x29335c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293360:
    // 0x293360: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x293360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_293364:
    // 0x293364: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_293368:
    // 0x293368: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x293368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_29336c:
    // 0x29336c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29336cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_293370:
    // 0x293370: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x293370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293374:
    // 0x293374: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x293374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_293378:
    // 0x293378: 0xc05dbd8  jal         func_176F60
label_29337c:
    if (ctx->pc == 0x29337Cu) {
        ctx->pc = 0x293380u;
        goto label_293380;
    }
    ctx->pc = 0x293378u;
    SET_GPR_U32(ctx, 31, 0x293380u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293378u, 0x293380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293380u;
label_293380:
    // 0x293380: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x293380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_293384:
    // 0x293384: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x293384u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293388:
    // 0x293388: 0x92425e04  lbu         $v0, 0x5E04($s2)
    ctx->pc = 0x293388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24068)));
label_29338c:
    // 0x29338c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293390:
    // 0x293390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293394:
    // 0x293394: 0x14620084  bne         $v1, $v0, . + 4 + (0x84 << 2)
label_293398:
    if (ctx->pc == 0x293398u) {
        ctx->pc = 0x29339Cu;
        goto label_29339c;
    }
    ctx->pc = 0x293394u;
    {
        const bool branch_taken_0x293394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293394) {
            ctx->pc = 0x2935A8u;
            return;
        }
    }
    ctx->pc = 0x29339Cu;
label_29339c:
    // 0x29339c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x29339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2933a0:
    // 0x2933a0: 0xc047fe2  jal         func_11FF88
label_2933a4:
    if (ctx->pc == 0x2933A4u) {
        ctx->pc = 0x2933A8u;
        goto label_2933a8;
    }
    ctx->pc = 0x2933A0u;
    SET_GPR_U32(ctx, 31, 0x2933A8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2933A0u, 0x2933A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933A8u;
label_2933a8:
    // 0x2933a8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2933a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2933ac:
    // 0x2933ac: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2933acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2933b0:
    // 0x2933b0: 0xc047c4e  jal         func_11F138
label_2933b4:
    if (ctx->pc == 0x2933B4u) {
        ctx->pc = 0x2933B8u;
        goto label_2933b8;
    }
    ctx->pc = 0x2933B0u;
    SET_GPR_U32(ctx, 31, 0x2933B8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2933B0u, 0x2933B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933B8u;
label_2933b8:
    // 0x2933b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2933b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2933bc:
    // 0x2933bc: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x2933bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2933c0:
    // 0x2933c0: 0xc047af0  jal         func_11EBC0
label_2933c4:
    if (ctx->pc == 0x2933C4u) {
        ctx->pc = 0x2933C8u;
        goto label_2933c8;
    }
    ctx->pc = 0x2933C0u;
    SET_GPR_U32(ctx, 31, 0x2933C8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2933C0u, 0x2933C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933C8u;
label_2933c8:
    // 0x2933c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2933c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2933cc:
    // 0x2933cc: 0xc047c7c  jal         func_11F1F0
label_2933d0:
    if (ctx->pc == 0x2933D0u) {
        ctx->pc = 0x2933D4u;
        goto label_2933d4;
    }
    ctx->pc = 0x2933CCu;
    SET_GPR_U32(ctx, 31, 0x2933D4u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x2933CCu, 0x2933D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933D4u;
label_2933d4:
    // 0x2933d4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2933d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2933d8:
    // 0x2933d8: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x2933d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2933dc:
    // 0x2933dc: 0xc047fe2  jal         func_11FF88
label_2933e0:
    if (ctx->pc == 0x2933E0u) {
        ctx->pc = 0x2933E4u;
        goto label_2933e4;
    }
    ctx->pc = 0x2933DCu;
    SET_GPR_U32(ctx, 31, 0x2933E4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2933DCu, 0x2933E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933E4u;
label_2933e4:
    // 0x2933e4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2933e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2933e8:
    // 0x2933e8: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2933e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2933ec:
    // 0x2933ec: 0xc047c4e  jal         func_11F138
label_2933f0:
    if (ctx->pc == 0x2933F0u) {
        ctx->pc = 0x2933F4u;
        goto label_2933f4;
    }
    ctx->pc = 0x2933ECu;
    SET_GPR_U32(ctx, 31, 0x2933F4u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2933ECu, 0x2933F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933F4u;
label_2933f4:
    // 0x2933f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2933f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2933f8:
    // 0x2933f8: 0x7ba50100  lq          $a1, 0x100($sp)
    ctx->pc = 0x2933f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2933fc:
    // 0x2933fc: 0xc047af0  jal         func_11EBC0
label_293400:
    if (ctx->pc == 0x293400u) {
        ctx->pc = 0x293404u;
        goto label_293404;
    }
    ctx->pc = 0x2933FCu;
    SET_GPR_U32(ctx, 31, 0x293404u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2933FCu, 0x293404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293404u;
label_293404:
    // 0x293404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293408:
    // 0x293408: 0xc047c7c  jal         func_11F1F0
label_29340c:
    if (ctx->pc == 0x29340Cu) {
        ctx->pc = 0x293410u;
        goto label_293410;
    }
    ctx->pc = 0x293408u;
    SET_GPR_U32(ctx, 31, 0x293410u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293408u, 0x293410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293410u;
label_293410:
    // 0x293410: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x293410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_293414:
    // 0x293414: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x293414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293418:
    // 0x293418: 0xc047fe2  jal         func_11FF88
label_29341c:
    if (ctx->pc == 0x29341Cu) {
        ctx->pc = 0x293420u;
        goto label_293420;
    }
    ctx->pc = 0x293418u;
    SET_GPR_U32(ctx, 31, 0x293420u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293418u, 0x293420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293420u;
label_293420:
    // 0x293420: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x293420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_293424:
    // 0x293424: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x293424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_293428:
    // 0x293428: 0xc047c4e  jal         func_11F138
label_29342c:
    if (ctx->pc == 0x29342Cu) {
        ctx->pc = 0x293430u;
        goto label_293430;
    }
    ctx->pc = 0x293428u;
    SET_GPR_U32(ctx, 31, 0x293430u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x293428u, 0x293430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293430u;
label_293430:
    // 0x293430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293434:
    // 0x293434: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x293434u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_293438:
    // 0x293438: 0xc047af0  jal         func_11EBC0
label_29343c:
    if (ctx->pc == 0x29343Cu) {
        ctx->pc = 0x293440u;
        goto label_293440;
    }
    ctx->pc = 0x293438u;
    SET_GPR_U32(ctx, 31, 0x293440u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293438u, 0x293440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293440u;
label_293440:
    // 0x293440: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293444:
    // 0x293444: 0xc047c7c  jal         func_11F1F0
label_293448:
    if (ctx->pc == 0x293448u) {
        ctx->pc = 0x29344Cu;
        goto label_29344c;
    }
    ctx->pc = 0x293444u;
    SET_GPR_U32(ctx, 31, 0x29344Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293444u, 0x29344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29344Cu;
label_29344c:
    // 0x29344c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x29344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_293450:
    // 0x293450: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x293450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293454:
    // 0x293454: 0xc047fe2  jal         func_11FF88
label_293458:
    if (ctx->pc == 0x293458u) {
        ctx->pc = 0x29345Cu;
        goto label_29345c;
    }
    ctx->pc = 0x293454u;
    SET_GPR_U32(ctx, 31, 0x29345Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293454u, 0x29345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29345Cu;
label_29345c:
    // 0x29345c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x29345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_293460:
    // 0x293460: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x293460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293464:
    // 0x293464: 0xc047c4e  jal         func_11F138
label_293468:
    if (ctx->pc == 0x293468u) {
        ctx->pc = 0x29346Cu;
        goto label_29346c;
    }
    ctx->pc = 0x293464u;
    SET_GPR_U32(ctx, 31, 0x29346Cu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x293464u, 0x29346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29346Cu;
label_29346c:
    // 0x29346c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29346cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293470:
    // 0x293470: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x293470u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_293474:
    // 0x293474: 0xc047af0  jal         func_11EBC0
label_293478:
    if (ctx->pc == 0x293478u) {
        ctx->pc = 0x29347Cu;
        goto label_29347c;
    }
    ctx->pc = 0x293474u;
    SET_GPR_U32(ctx, 31, 0x29347Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293474u, 0x29347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29347Cu;
label_29347c:
    // 0x29347c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29347cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293480:
    // 0x293480: 0xc047c7c  jal         func_11F1F0
label_293484:
    if (ctx->pc == 0x293484u) {
        ctx->pc = 0x293488u;
        goto label_293488;
    }
    ctx->pc = 0x293480u;
    SET_GPR_U32(ctx, 31, 0x293488u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293480u, 0x293488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293488u;
label_293488:
    // 0x293488: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x293488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_29348c:
    // 0x29348c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x29348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293490:
    // 0x293490: 0xc047fe2  jal         func_11FF88
label_293494:
    if (ctx->pc == 0x293494u) {
        ctx->pc = 0x293498u;
        goto label_293498;
    }
    ctx->pc = 0x293490u;
    SET_GPR_U32(ctx, 31, 0x293498u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293490u, 0x293498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293498u;
label_293498:
    // 0x293498: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x293498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_29349c:
    // 0x29349c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2934a0:
    // 0x2934a0: 0xc047c4e  jal         func_11F138
label_2934a4:
    if (ctx->pc == 0x2934A4u) {
        ctx->pc = 0x2934A8u;
        goto label_2934a8;
    }
    ctx->pc = 0x2934A0u;
    SET_GPR_U32(ctx, 31, 0x2934A8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2934A0u, 0x2934A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934A8u;
label_2934a8:
    // 0x2934a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934ac:
    // 0x2934ac: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x2934acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2934b0:
    // 0x2934b0: 0xc047af0  jal         func_11EBC0
label_2934b4:
    if (ctx->pc == 0x2934B4u) {
        ctx->pc = 0x2934B8u;
        goto label_2934b8;
    }
    ctx->pc = 0x2934B0u;
    SET_GPR_U32(ctx, 31, 0x2934B8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2934B0u, 0x2934B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934B8u;
label_2934b8:
    // 0x2934b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934bc:
    // 0x2934bc: 0xc047c7c  jal         func_11F1F0
label_2934c0:
    if (ctx->pc == 0x2934C0u) {
        ctx->pc = 0x2934C4u;
        goto label_2934c4;
    }
    ctx->pc = 0x2934BCu;
    SET_GPR_U32(ctx, 31, 0x2934C4u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x2934BCu, 0x2934C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934C4u;
label_2934c4:
    // 0x2934c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2934c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934c8:
    // 0x2934c8: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x2934c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
label_2934cc:
    // 0x2934cc: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x2934ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2934d0:
    // 0x2934d0: 0xc047fe2  jal         func_11FF88
label_2934d4:
    if (ctx->pc == 0x2934D4u) {
        ctx->pc = 0x2934D8u;
        goto label_2934d8;
    }
    ctx->pc = 0x2934D0u;
    SET_GPR_U32(ctx, 31, 0x2934D8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2934D0u, 0x2934D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934D8u;
label_2934d8:
    // 0x2934d8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2934d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2934dc:
    // 0x2934dc: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x2934dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2934e0:
    // 0x2934e0: 0xc047c4e  jal         func_11F138
label_2934e4:
    if (ctx->pc == 0x2934E4u) {
        ctx->pc = 0x2934E8u;
        goto label_2934e8;
    }
    ctx->pc = 0x2934E0u;
    SET_GPR_U32(ctx, 31, 0x2934E8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2934E0u, 0x2934E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934E8u;
label_2934e8:
    // 0x2934e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934ec:
    // 0x2934ec: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x2934ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2934f0:
    // 0x2934f0: 0xc047af0  jal         func_11EBC0
label_2934f4:
    if (ctx->pc == 0x2934F4u) {
        ctx->pc = 0x2934F8u;
        goto label_2934f8;
    }
    ctx->pc = 0x2934F0u;
    SET_GPR_U32(ctx, 31, 0x2934F8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2934F0u, 0x2934F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934F8u;
label_2934f8:
    // 0x2934f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934fc:
    // 0x2934fc: 0xc047c7c  jal         func_11F1F0
label_293500:
    if (ctx->pc == 0x293500u) {
        ctx->pc = 0x293504u;
        goto label_293504;
    }
    ctx->pc = 0x2934FCu;
    SET_GPR_U32(ctx, 31, 0x293504u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x2934FCu, 0x293504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293504u;
label_293504:
    // 0x293504: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x293504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293508:
    // 0x293508: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x293508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
label_29350c:
    // 0x29350c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x29350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293510:
    // 0x293510: 0xc047fe2  jal         func_11FF88
label_293514:
    if (ctx->pc == 0x293514u) {
        ctx->pc = 0x293518u;
        goto label_293518;
    }
    ctx->pc = 0x293510u;
    SET_GPR_U32(ctx, 31, 0x293518u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293510u, 0x293518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293518u;
label_293518:
    // 0x293518: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x293518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_29351c:
    // 0x29351c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_293520:
    // 0x293520: 0xc047c4e  jal         func_11F138
label_293524:
    if (ctx->pc == 0x293524u) {
        ctx->pc = 0x293528u;
        goto label_293528;
    }
    ctx->pc = 0x293520u;
    SET_GPR_U32(ctx, 31, 0x293528u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x293520u, 0x293528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293528u;
label_293528:
    // 0x293528: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x293528u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29352c:
    // 0x29352c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x29352cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293530:
    // 0x293530: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x293530u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_293534:
    // 0x293534: 0xc047af0  jal         func_11EBC0
label_293538:
    if (ctx->pc == 0x293538u) {
        ctx->pc = 0x29353Cu;
        goto label_29353c;
    }
    ctx->pc = 0x293534u;
    SET_GPR_U32(ctx, 31, 0x29353Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293534u, 0x29353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29353Cu;
label_29353c:
    // 0x29353c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x29353cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293540:
    // 0x293540: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x293540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293544:
    // 0x293544: 0xc047c7c  jal         func_11F1F0
label_293548:
    if (ctx->pc == 0x293548u) {
        ctx->pc = 0x29354Cu;
        goto label_29354c;
    }
    ctx->pc = 0x293544u;
    SET_GPR_U32(ctx, 31, 0x29354Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293544u, 0x29354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29354Cu;
label_29354c:
    // 0x29354c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x29354cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293550:
    // 0x293550: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x293550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_293554:
    // 0x293554: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x293554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293558:
    // 0x293558: 0xc047fe2  jal         func_11FF88
label_29355c:
    if (ctx->pc == 0x29355Cu) {
        ctx->pc = 0x293560u;
        goto label_293560;
    }
    ctx->pc = 0x293558u;
    SET_GPR_U32(ctx, 31, 0x293560u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293558u, 0x293560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293560u;
label_293560:
    // 0x293560: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x293560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_293564:
    // 0x293564: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x293564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_293568:
    // 0x293568: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x293568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_29356c:
    // 0x29356c: 0xc047c4e  jal         func_11F138
label_293570:
    if (ctx->pc == 0x293570u) {
        ctx->pc = 0x293574u;
        goto label_293574;
    }
    ctx->pc = 0x29356Cu;
    SET_GPR_U32(ctx, 31, 0x293574u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x29356Cu, 0x293574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293574u;
label_293574:
    // 0x293574: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x293574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293578:
    // 0x293578: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x293578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_29357c:
    // 0x29357c: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x29357cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_293580:
    // 0x293580: 0xc047af0  jal         func_11EBC0
label_293584:
    if (ctx->pc == 0x293584u) {
        ctx->pc = 0x293588u;
        goto label_293588;
    }
    ctx->pc = 0x293580u;
    SET_GPR_U32(ctx, 31, 0x293588u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293580u, 0x293588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293588u;
label_293588:
    // 0x293588: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x293588u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29358c:
    // 0x29358c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x29358cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293590:
    // 0x293590: 0xc047c7c  jal         func_11F1F0
label_293594:
    if (ctx->pc == 0x293594u) {
        ctx->pc = 0x293598u;
        goto label_293598;
    }
    ctx->pc = 0x293590u;
    SET_GPR_U32(ctx, 31, 0x293598u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293590u, 0x293598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293598u;
label_293598:
    // 0x293598: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x293598u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29359c:
    // 0x29359c: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x29359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_2935a0:
    // 0x2935a0: 0x10000086  b           . + 4 + (0x86 << 2)
label_2935a4:
    if (ctx->pc == 0x2935A4u) {
        ctx->pc = 0x2935A8u;
        goto label_fallthrough_0x2935a0;
    }
    ctx->pc = 0x2935A0u;
    {
        const bool branch_taken_0x2935a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935a0) {
            ctx->pc = 0x2937BCu;
            return;
        }
    }
label_fallthrough_0x2935a0:
    ctx->pc = 0x2935A8u;
}
