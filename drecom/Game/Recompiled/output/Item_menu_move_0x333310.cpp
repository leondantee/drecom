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

// Function: Item_menu_move
// Address: 0x333310 - 0x333a24
void Item_menu_move_0x333310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_menu_move_0x333310");
#endif

    switch (ctx->pc) {
        case 0x33336cu: goto label_33336c;
        case 0x333394u: goto label_333394;
        case 0x33340cu: goto label_33340c;
        case 0x333420u: goto label_333420;
        case 0x333440u: goto label_333440;
        case 0x333528u: goto label_333528;
        case 0x3335f4u: goto label_3335f4;
        case 0x3336a4u: goto label_3336a4;
        case 0x3336d8u: goto label_3336d8;
        case 0x333784u: goto label_333784;
        case 0x3337b8u: goto label_3337b8;
        case 0x333840u: goto label_333840;
        case 0x333868u: goto label_333868;
        case 0x333964u: goto label_333964;
        case 0x3339f0u: goto label_3339f0;
        default: break;
    }

    ctx->pc = 0x333310u;

    // 0x333310: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x333310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x333314: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x333314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x333318: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x333318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33331c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x333320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x333320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x333324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x333324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x333328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x333328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33332c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x333330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x333338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33333c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x333340: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x333340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x333344: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x333344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x333348: 0x2442cb10  addiu       $v0, $v0, -0x34F0
    ctx->pc = 0x333348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x33334c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x33334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x333350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x333350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x333354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333358: 0x0  nop
    ctx->pc = 0x333358u;
    // NOP
    // 0x33335c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x33335cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62BF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF50u, _value); } while (0); }
    // 0x333360: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x333360u;
    { uint32_t bits = FAST_READ32(0x62BF50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x333364: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x333364u;
    SET_GPR_U32(ctx, 31, 0x33336Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x333364u, 0x33336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33336Cu;
label_33336c:
    // 0x33336c: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x33336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x333370: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x333370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x333374: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x333374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x333378: 0x3463050a  ori         $v1, $v1, 0x50A
    ctx->pc = 0x333378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x33337c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x33337cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x333380: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x333380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x333384: 0x246520c8  addiu       $a1, $v1, 0x20C8
    ctx->pc = 0x333384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x333388: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x333388u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33338c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x33338Cu;
    SET_GPR_U32(ctx, 31, 0x333394u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x33338Cu, 0x333394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333394u;
label_333394:
    // 0x333394: 0x9203683e  lbu         $v1, 0x683E($s0)
    ctx->pc = 0x333394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26686)));
    // 0x333398: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x333398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33339c: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x33339cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3333a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3333a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3333a4: 0x83f023  subu        $fp, $a0, $v1
    ctx->pc = 0x3333a4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3333a8: 0x13c00081  beqz        $fp, . + 4 + (0x81 << 2)
    ctx->pc = 0x3333A8u;
    {
        const bool branch_taken_0x3333a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x3333a8) {
            ctx->pc = 0x3335B0u;
            goto label_3335b0;
        }
    }
    ctx->pc = 0x3333B0u;
    // 0x3333b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3333b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3333b4: 0x8c230124  lw          $v1, 0x124($at)
    ctx->pc = 0x3333b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0124u));
    // 0x3333b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3333b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3333bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3333bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3333c0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3333C0u;
    {
        const bool branch_taken_0x3333c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3333c0) {
            ctx->pc = 0x3334B8u;
            goto label_3334b8;
        }
    }
    ctx->pc = 0x3333C8u;
    // 0x3333c8: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3333c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3333cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3333ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3333d0: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3333d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
    // 0x3333d4: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3333d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3333d8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3333d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3333dc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3333dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3333e0: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3333E0u;
    {
        const bool branch_taken_0x3333e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3333e0) {
            ctx->pc = 0x333428u;
            goto label_333428;
        }
    }
    ctx->pc = 0x3333E8u;
    // 0x3333e8: 0xa2005deb  sb          $zero, 0x5DEB($s0)
    ctx->pc = 0x3333e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 0));
    // 0x3333ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3333ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3333f0: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x3333f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x3333f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3333f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3333f8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x3333f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3333fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3333fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333400: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x333400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333404: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x333404u;
    SET_GPR_U32(ctx, 31, 0x33340Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x333404u, 0x33340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33340Cu;
label_33340c:
    // 0x33340c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x33340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x333410: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x333410u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333414: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x333414u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333418: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x333418u;
    SET_GPR_U32(ctx, 31, 0x333420u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x333418u, 0x333420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333420u;
label_333420:
    // 0x333420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x333420u;
    {
        const bool branch_taken_0x333420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333420) {
            ctx->pc = 0x33344Cu;
            goto label_33344c;
        }
    }
    ctx->pc = 0x333428u;
label_333428:
    // 0x333428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x333428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33342c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x33342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x333430: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x333430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333434: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x333434u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333438: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x333438u;
    SET_GPR_U32(ctx, 31, 0x333440u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x333438u, 0x333440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333440u;
label_333440:
    // 0x333440: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x333444: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x333444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x333448: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x333448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
label_33344c:
    // 0x33344c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x33344cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333450: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333454: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x333454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333458: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33345c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x33345cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x333460: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x333460u;
    {
        const bool branch_taken_0x333460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333460) {
            ctx->pc = 0x3334B8u;
            goto label_3334b8;
        }
    }
    ctx->pc = 0x333468u;
    // 0x333468: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33346c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333470: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x333470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
    // 0x333474: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333478: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x333478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x33347c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333480: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333484: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x333484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x333488: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33348c: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x33348cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x333490: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x333490u;
    {
        const bool branch_taken_0x333490 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x333490) {
            ctx->pc = 0x3334ACu;
            goto label_3334ac;
        }
    }
    ctx->pc = 0x333498u;
    // 0x333498: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33349c: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x33349cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x3334a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3334a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3334a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3334a8: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x3334a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
label_3334ac:
    // 0x3334ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3334acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3334b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3334b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3334b4: 0xac222798  sw          $v0, 0x2798($at)
    ctx->pc = 0x3334b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
label_3334b8:
    // 0x3334b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3334b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3334bc: 0x8c230124  lw          $v1, 0x124($at)
    ctx->pc = 0x3334bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0124u));
    // 0x3334c0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3334c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3334c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3334c8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3334C8u;
    {
        const bool branch_taken_0x3334c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3334c8) {
            ctx->pc = 0x3335C0u;
            goto label_3335c0;
        }
    }
    ctx->pc = 0x3334D0u;
    // 0x3334d0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3334d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3334d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3334d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3334d8: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3334d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
    // 0x3334dc: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3334dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3334e0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3334e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3334e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3334e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3334e8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x3334e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x3334ec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3334ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3334f0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3334F0u;
    {
        const bool branch_taken_0x3334f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3334f0) {
            ctx->pc = 0x333510u;
            goto label_333510;
        }
    }
    ctx->pc = 0x3334F8u;
    // 0x3334f8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x3334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x3334fc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3334fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333500: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x333500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x333504: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x333504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
    // 0x333508: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x333508u;
    {
        const bool branch_taken_0x333508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333508) {
            ctx->pc = 0x333534u;
            goto label_333534;
        }
    }
    ctx->pc = 0x333510u;
label_333510:
    // 0x333510: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x333510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x333514: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x333514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x333518: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x333518u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33351c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33351cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333520: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x333520u;
    SET_GPR_U32(ctx, 31, 0x333528u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x333520u, 0x333528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333528u;
label_333528:
    // 0x333528: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x333528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x33352c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x333530: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x333530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
label_333534:
    // 0x333534: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x333534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333538: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33353c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33353cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333540: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333548: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x333548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33354c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x33354Cu;
    {
        const bool branch_taken_0x33354c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33354c) {
            ctx->pc = 0x3335C0u;
            goto label_3335c0;
        }
    }
    ctx->pc = 0x333554u;
    // 0x333554: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33355c: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x33355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
    // 0x333560: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333564: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x333564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x333568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33356c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333570: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x333570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x333574: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333578: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x333578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x33357c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x33357cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x333580: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x333580u;
    {
        const bool branch_taken_0x333580 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333580) {
            ctx->pc = 0x33359Cu;
            goto label_33359c;
        }
    }
    ctx->pc = 0x333588u;
    // 0x333588: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33358c: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x33358cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x333590: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x333590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x333594: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333598: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x333598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
label_33359c:
    // 0x33359c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3335a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3335a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3335a4: 0xac222798  sw          $v0, 0x2798($at)
    ctx->pc = 0x3335a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
    // 0x3335a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3335A8u;
    {
        const bool branch_taken_0x3335a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3335a8) {
            ctx->pc = 0x3335C0u;
            goto label_3335c0;
        }
    }
    ctx->pc = 0x3335B0u;
label_3335b0:
    // 0x3335b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3335b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3335b4: 0xae035dc0  sw          $v1, 0x5DC0($s0)
    ctx->pc = 0x3335b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 3));
    // 0x3335b8: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x3335B8u;
    {
        const bool branch_taken_0x3335b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3335b8) {
            ctx->pc = 0x3339F0u;
            goto label_3339f0;
        }
    }
    ctx->pc = 0x3335C0u;
label_3335c0:
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
            goto label_3336e0;
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
            goto label_333634;
        }
    }
    ctx->pc = 0x333630u;
    // 0x333630: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x333630u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_333634:
    // 0x333634: 0x26160620  addiu       $s6, $s0, 0x620
    ctx->pc = 0x333634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x333638: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x333638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x33363c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x33363cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x333640: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x333640u;
    {
        const bool branch_taken_0x333640 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x333640) {
            ctx->pc = 0x3336B0u;
            goto label_3336b0;
        }
    }
    ctx->pc = 0x333648u;
    // 0x333648: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33364c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x33364cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x333650: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x333650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x333654: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333654u;
    {
        const bool branch_taken_0x333654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333654) {
            ctx->pc = 0x333660u;
            goto label_333660;
        }
    }
    ctx->pc = 0x33365Cu;
    // 0x33365c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x33365cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333660:
    // 0x333660: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x333660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x333664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333668: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x333668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33366c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33366Cu;
    {
        const bool branch_taken_0x33366c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33366c) {
            ctx->pc = 0x333678u;
            goto label_333678;
        }
    }
    ctx->pc = 0x333674u;
    // 0x333674: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x333674u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333678:
    // 0x333678: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x333678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x33367c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333680: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x333680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x333684: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333684u;
    {
        const bool branch_taken_0x333684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333684) {
            ctx->pc = 0x333690u;
            goto label_333690;
        }
    }
    ctx->pc = 0x33368Cu;
    // 0x33368c: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x33368cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333690:
    // 0x333690: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x333690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x333694: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333698: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x333698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x33369c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x33369Cu;
    SET_GPR_U32(ctx, 31, 0x3336A4u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x33369Cu, 0x3336A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3336A4u;
label_3336a4:
    // 0x3336a4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3336a4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3336a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3336A8u;
    {
        const bool branch_taken_0x3336a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3336a8) {
            ctx->pc = 0x3336B4u;
            goto label_3336b4;
        }
    }
    ctx->pc = 0x3336B0u;
label_3336b0:
    // 0x3336b0: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x3336b0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3336b4:
    // 0x3336b4: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x3336b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x3336b8: 0x34420096  ori         $v0, $v0, 0x96
    ctx->pc = 0x3336b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x3336bc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3336bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3336c0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x3336c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3336c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3336c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3336c8: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x3336c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x3336cc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3336ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3336d0: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x3336D0u;
    SET_GPR_U32(ctx, 31, 0x3336D8u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x3336D0u, 0x3336D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3336D8u;
label_3336d8:
    // 0x3336d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3336d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3336dc: 0xac202798  sw          $zero, 0x2798($at)
    ctx->pc = 0x3336dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
label_3336e0:
    // 0x3336e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3336e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3336e4: 0x8c232798  lw          $v1, 0x2798($at)
    ctx->pc = 0x3336e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892798u));
    // 0x3336e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3336ec: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3336ECu;
    {
        const bool branch_taken_0x3336ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3336ec) {
            ctx->pc = 0x3337C0u;
            goto label_3337c0;
        }
    }
    ctx->pc = 0x3336F4u;
    // 0x3336f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3336f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3336f8: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x3336f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x3336fc: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333700: 0x2aa10002  slti        $at, $s5, 0x2
    ctx->pc = 0x333700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x333704: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333704u;
    {
        const bool branch_taken_0x333704 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333704) {
            ctx->pc = 0x333710u;
            goto label_333710;
        }
    }
    ctx->pc = 0x33370Cu;
    // 0x33370c: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x33370cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
label_333710:
    // 0x333710: 0x26160620  addiu       $s6, $s0, 0x620
    ctx->pc = 0x333710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x333714: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x333714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x333718: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x333718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x33371c: 0x1a60001c  blez        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x33371Cu;
    {
        const bool branch_taken_0x33371c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x33371c) {
            ctx->pc = 0x333790u;
            goto label_333790;
        }
    }
    ctx->pc = 0x333724u;
    // 0x333724: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333728: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x333728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x33372c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x33372cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333730: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x333730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x333734: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333734u;
    {
        const bool branch_taken_0x333734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333734) {
            ctx->pc = 0x333740u;
            goto label_333740;
        }
    }
    ctx->pc = 0x33373Cu;
    // 0x33373c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x33373cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333740:
    // 0x333740: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x333740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x333744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333748: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x333748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33374c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33374Cu;
    {
        const bool branch_taken_0x33374c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33374c) {
            ctx->pc = 0x333758u;
            goto label_333758;
        }
    }
    ctx->pc = 0x333754u;
    // 0x333754: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x333754u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333758:
    // 0x333758: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x333758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x33375c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333760: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x333760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x333764: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333764u;
    {
        const bool branch_taken_0x333764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333764) {
            ctx->pc = 0x333770u;
            goto label_333770;
        }
    }
    ctx->pc = 0x33376Cu;
    // 0x33376c: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x33376cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333770:
    // 0x333770: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x333770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x333774: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333778: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x333778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x33377c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x33377Cu;
    SET_GPR_U32(ctx, 31, 0x333784u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x33377Cu, 0x333784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333784u;
label_333784:
    // 0x333784: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x333784u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333788u;
    {
        const bool branch_taken_0x333788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333788) {
            ctx->pc = 0x333794u;
            goto label_333794;
        }
    }
    ctx->pc = 0x333790u;
label_333790:
    // 0x333790: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x333790u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_333794:
    // 0x333794: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x333794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x333798: 0x34420096  ori         $v0, $v0, 0x96
    ctx->pc = 0x333798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x33379c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x33379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3337a0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3337a4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3337a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3337a8: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x3337a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x3337ac: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3337acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3337b0: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x3337B0u;
    SET_GPR_U32(ctx, 31, 0x3337B8u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x3337B0u, 0x3337B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337B8u;
label_3337b8:
    // 0x3337b8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3337b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3337bc: 0xac202798  sw          $zero, 0x2798($at)
    ctx->pc = 0x3337bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
label_3337c0:
    // 0x3337c0: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x3337c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x3337c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3337c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3337c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3337C8u;
    {
        const bool branch_taken_0x3337c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3337c8) {
            ctx->pc = 0x333878u;
            goto label_333878;
        }
    }
    ctx->pc = 0x3337D0u;
    // 0x3337d0: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3337d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3337d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3337d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3337d8: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3337d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3337dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3337dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3337e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3337e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3337e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3337e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3337e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3337e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3337ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3337ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3337f0: 0x9042663e  lbu         $v0, 0x663E($v0)
    ctx->pc = 0x3337f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26174)));
    // 0x3337f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3337f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3337f8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3337f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x3337fc: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3337fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x333800: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x333800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333804: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x333804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333808: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x333808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33380c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33380cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x333810: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333818: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33381c: 0x9042663f  lbu         $v0, 0x663F($v0)
    ctx->pc = 0x33381cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26175)));
    // 0x333820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333824: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x333824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x333828: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x333828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x33382c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333830: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x333830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x333834: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x333834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333838: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x333838u;
    SET_GPR_U32(ctx, 31, 0x333840u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x333838u, 0x333840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x333840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x333844: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x333844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x333848: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x333848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x33384c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x33384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x333850: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x333850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x333854: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x333858: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x333858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33385c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33385cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333860: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x333860u;
    SET_GPR_U32(ctx, 31, 0x333868u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x333860u, 0x333868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333868u;
label_333868:
    // 0x333868: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x333868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x33386c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x33386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x333870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x333870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x333874: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x333874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
label_333878:
    // 0x333878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33387c: 0xa202660f  sb          $v0, 0x660F($s0)
    ctx->pc = 0x33387cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26127), (uint8_t)GPR_U32(ctx, 2));
    // 0x333880: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x333880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x333884: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
    ctx->pc = 0x333884u;
    {
        const bool branch_taken_0x333884 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x333884) {
            ctx->pc = 0x3338D0u;
            goto label_3338d0;
        }
    }
    ctx->pc = 0x33388Cu;
    // 0x33388c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33388cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x333890: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x333890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x333894: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x333894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x333898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x333898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33389c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33389Cu;
    {
        const bool branch_taken_0x33389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33389c) {
            ctx->pc = 0x3338D8u;
            goto label_3338d8;
        }
    }
    ctx->pc = 0x3338A4u;
    // 0x3338a4: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x3338a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x3338a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3338a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3338ac: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3338ACu;
    {
        const bool branch_taken_0x3338ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3338ac) {
            ctx->pc = 0x3338D8u;
            goto label_3338d8;
        }
    }
    ctx->pc = 0x3338B4u;
    // 0x3338b4: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x3338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x3338b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3338b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3338bc: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x3338bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
    // 0x3338c0: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x3338c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x3338c4: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x3338c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x3338c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3338C8u;
    {
        const bool branch_taken_0x3338c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3338c8) {
            ctx->pc = 0x3338D8u;
            goto label_3338d8;
        }
    }
    ctx->pc = 0x3338D0u;
label_3338d0:
    // 0x3338d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3338d4: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x3338d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
label_3338d8:
    // 0x3338d8: 0x26115e08  addiu       $s1, $s0, 0x5E08
    ctx->pc = 0x3338d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24072));
    // 0x3338dc: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x3338dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x3338e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3338e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3338e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3338e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3338e8: 0x0  nop
    ctx->pc = 0x3338e8u;
    // NOP
    // 0x3338ec: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x3338ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x3338f0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3338f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3338f4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3338f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3338f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3338f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3338fc: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x3338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333900: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x333900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333908: 0x0  nop
    ctx->pc = 0x333908u;
    // NOP
    // 0x33390c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33390cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333910: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x333910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x333914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333918: 0x0  nop
    ctx->pc = 0x333918u;
    // NOP
    // 0x33391c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x33391cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333920: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x333920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x333924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333928: 0x0  nop
    ctx->pc = 0x333928u;
    // NOP
    // 0x33392c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33392cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x333930: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x333930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x333934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333938: 0x0  nop
    ctx->pc = 0x333938u;
    // NOP
    // 0x33393c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33393cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333940: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x333940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x333944: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x333944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333948: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x333948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33394c: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x33394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x333950: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x333950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x333954: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x333954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x333958: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x33395c: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x33395Cu;
    SET_GPR_U32(ctx, 31, 0x333964u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x33395Cu, 0x333964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333964u;
label_333964:
    // 0x333964: 0x26115f4c  addiu       $s1, $s0, 0x5F4C
    ctx->pc = 0x333964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24396));
    // 0x333968: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x333968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x33396c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x33396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x333970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333974: 0x0  nop
    ctx->pc = 0x333974u;
    // NOP
    // 0x333978: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x333978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x33397c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x33397cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333980: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333984: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x333984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333988: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33398c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x33398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333994: 0x0  nop
    ctx->pc = 0x333994u;
    // NOP
    // 0x333998: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x333998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33399c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3339a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3339a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3339a4: 0x0  nop
    ctx->pc = 0x3339a4u;
    // NOP
    // 0x3339a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3339a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3339ac: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x3339acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x3339b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3339b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3339b4: 0x0  nop
    ctx->pc = 0x3339b4u;
    // NOP
    // 0x3339b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3339b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3339bc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3339c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3339c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3339c4: 0x0  nop
    ctx->pc = 0x3339c4u;
    // NOP
    // 0x3339c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3339c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3339cc: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x3339ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x3339d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3339d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3339d4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x3339d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3339d8: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x3339d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x3339dc: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x3339dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3339e0: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x3339e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x3339e4: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x3339e8: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x3339E8u;
    SET_GPR_U32(ctx, 31, 0x3339F0u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x3339E8u, 0x3339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339F0u;
label_3339f0:
    // 0x3339f0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x3339f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3339f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3339f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3339f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3339f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3339fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3339fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x333a00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x333a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x333a04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x333a04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x333a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333a18: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x333a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x333a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x333A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333A24u;
}
