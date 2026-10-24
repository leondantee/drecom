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

// Function: Em0e_dm_ck
// Address: 0x2412d0 - 0x2417d4
void Em0e_dm_ck_0x2412d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_dm_ck_0x2412d0");
#endif

    switch (ctx->pc) {
        case 0x241370u: goto label_241370;
        case 0x24137cu: goto label_24137c;
        case 0x241394u: goto label_241394;
        case 0x2413a0u: goto label_2413a0;
        case 0x2413c4u: goto label_2413c4;
        case 0x2413fcu: goto label_2413fc;
        case 0x241478u: goto label_241478;
        case 0x2414c8u: goto label_2414c8;
        case 0x2414f4u: goto label_2414f4;
        case 0x241574u: goto label_241574;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415f0u: goto label_2415f0;
        case 0x241608u: goto label_241608;
        case 0x241614u: goto label_241614;
        case 0x24162cu: goto label_24162c;
        case 0x241638u: goto label_241638;
        case 0x241650u: goto label_241650;
        case 0x24165cu: goto label_24165c;
        case 0x241674u: goto label_241674;
        case 0x241680u: goto label_241680;
        default: break;
    }

    ctx->pc = 0x2412d0u;

    // 0x2412d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2412d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2412d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2412d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2412d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2412d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2412dc: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2412dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2412e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2412e4: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x2412e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x2412e8: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x2412E8u;
    {
        const bool branch_taken_0x2412e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412e8) {
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x2412F0u;
    // 0x2412f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2412f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2412f4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x2412f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2412f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2412f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2412fc: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x2412fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x241300: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241304: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x241304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x241308: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24130c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x24130cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x241310: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241314: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x241314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x241318: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x241318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24131c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x24131Cu;
    {
        const bool branch_taken_0x24131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24131c) {
            ctx->pc = 0x2413CCu;
            goto label_2413cc;
        }
    }
    ctx->pc = 0x241324u;
    // 0x241324: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241328: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x241328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24132c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24132cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x241330: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241334: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x241334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241338: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x241338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24133c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241340: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x241340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241344: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x241344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x241348: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241350: 0x0  nop
    ctx->pc = 0x241350u;
    // NOP
    // 0x241354: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x241354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x241358: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x241358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x24135c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24135cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241360: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x241364: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241364u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241368: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241368u;
    SET_GPR_U32(ctx, 31, 0x241370u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241368u, 0x241370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241370u;
label_241370:
    // 0x241370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241374: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241374u;
    SET_GPR_U32(ctx, 31, 0x24137Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241374u, 0x24137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24137Cu;
label_24137c:
    // 0x24137c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x24137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x241380: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241380u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241384: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x241388: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241388u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24138c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24138Cu;
    SET_GPR_U32(ctx, 31, 0x241394u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24138Cu, 0x241394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241394u;
label_241394:
    // 0x241394: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241398: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241398u;
    SET_GPR_U32(ctx, 31, 0x2413A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241398u, 0x2413A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413A0u;
label_2413a0:
    // 0x2413a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2413a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2413a4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2413a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2413a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2413ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2413acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2413b0: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x2413b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x2413b4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2413b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2413b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2413b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2413bc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2413BCu;
    SET_GPR_U32(ctx, 31, 0x2413C4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2413BCu, 0x2413C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413C4u;
label_2413c4:
    // 0x2413c4: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2413C4u;
    {
        const bool branch_taken_0x2413c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413c4) {
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x2413CCu;
label_2413cc:
    // 0x2413cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2413d0: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x2413d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2413d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2413d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2413d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2413d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2413dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2413e0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2413e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2413e4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2413e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2413e8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2413e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2413ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2413f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2413f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2413f4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2413F4u;
    SET_GPR_U32(ctx, 31, 0x2413FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2413F4u, 0x2413FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413FCu;
label_2413fc:
    // 0x2413fc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241400: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x241400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x241404: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x241404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x24140c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24140Cu;
    {
        const bool branch_taken_0x24140c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24140c) {
            ctx->pc = 0x241420u;
            goto label_241420;
        }
    }
    ctx->pc = 0x241414u;
    // 0x241414: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24141c: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x24141cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
label_241420:
    // 0x241420: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241424: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x241424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x241428: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x241428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24142c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x241430: 0x2442b2f0  addiu       $v0, $v0, -0x4D10
    ctx->pc = 0x241430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947568));
    // 0x241434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241438: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x241438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24143c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x24143cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x241440: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241444: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241448: 0x8462005e  lh          $v0, 0x5E($v1)
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x24144c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241450: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x241450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x241454: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24145c: 0x8442005e  lh          $v0, 0x5E($v0)
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x241460: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x241460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x241468: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x241468u;
    {
        const bool branch_taken_0x241468 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241468) {
            ctx->pc = 0x2414D0u;
            goto label_2414d0;
        }
    }
    ctx->pc = 0x241470u;
    // 0x241470: 0xc067694  jal         func_19DA50
    ctx->pc = 0x241470u;
    SET_GPR_U32(ctx, 31, 0x241478u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x241470u, 0x241478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241478u;
label_241478:
    // 0x241478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x241478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24147c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x24147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x241480: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x241484: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x241484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241488: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x241488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24148c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241494: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x241494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x241498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24149c: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2414a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2414a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2414a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2414a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2414a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2414ac: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2414acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2414b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2414b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2414b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2414b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2414b8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2414bc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2414bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2414c0: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2414C0u;
    SET_GPR_U32(ctx, 31, 0x2414C8u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2414C0u, 0x2414C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414C8u;
label_2414c8:
    // 0x2414c8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2414C8u;
    {
        const bool branch_taken_0x2414c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2414c8) {
            ctx->pc = 0x241688u;
            goto label_241688;
        }
    }
    ctx->pc = 0x2414D0u;
label_2414d0:
    // 0x2414d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2414d4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2414d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2414d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2414d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2414dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2414dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2414e0: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2414e4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2414e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2414e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2414ec: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2414ECu;
    SET_GPR_U32(ctx, 31, 0x2414F4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2414ECu, 0x2414F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414F4u;
label_2414f4:
    // 0x2414f4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2414f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2414f8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2414f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2414fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2414fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x241500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241504: 0x0  nop
    ctx->pc = 0x241504u;
    // NOP
    // 0x241508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x241508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24150c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x24150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x241510: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241514: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x241514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241518: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x241518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x24151c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24151cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241520: 0x0  nop
    ctx->pc = 0x241520u;
    // NOP
    // 0x241524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x241524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x241528: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x241528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x24152c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241530: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241534: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x241534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x241538: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x24153c: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x24153cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x241540: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241544: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241548: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x24154c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x24154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241550: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x241554: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241554u;
    {
        const bool branch_taken_0x241554 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241554) {
            ctx->pc = 0x241568u;
            goto label_241568;
        }
    }
    ctx->pc = 0x24155Cu;
    // 0x24155c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241560: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241564: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x241564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
label_241568:
    // 0x241568: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x241568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24156c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24156Cu;
    SET_GPR_U32(ctx, 31, 0x241574u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x241574u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x241574u) { return; }
    ctx->pc = 0x241574u;
label_241574:
    // 0x241574: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241578: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x241578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24157c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x241580: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241584: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x241584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241588: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x241588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24158c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241590: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x241590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241594: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x241594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x241598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24159c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2415a0: 0x0  nop
    ctx->pc = 0x2415a0u;
    // NOP
    // 0x2415a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2415a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2415a8: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x2415a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x2415ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2415acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2415b4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2415b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2415B8u;
    SET_GPR_U32(ctx, 31, 0x2415C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2415B8u, 0x2415C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415C0u;
label_2415c0:
    // 0x2415c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2415c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2415c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2415C4u;
    SET_GPR_U32(ctx, 31, 0x2415CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2415C4u, 0x2415CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415CCu;
label_2415cc:
    // 0x2415cc: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x2415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x2415d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2415d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2415d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2415d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2415d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2415DCu;
    SET_GPR_U32(ctx, 31, 0x2415E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2415DCu, 0x2415E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415E4u;
label_2415e4:
    // 0x2415e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2415e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2415e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2415E8u;
    SET_GPR_U32(ctx, 31, 0x2415F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2415E8u, 0x2415F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415F0u;
label_2415f0:
    // 0x2415f0: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x2415f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x2415f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2415f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2415fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2415fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241600: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241600u;
    SET_GPR_U32(ctx, 31, 0x241608u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241600u, 0x241608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241608u;
label_241608:
    // 0x241608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24160c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24160Cu;
    SET_GPR_U32(ctx, 31, 0x241614u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24160Cu, 0x241614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241614u;
label_241614:
    // 0x241614: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x241614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x241618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24161c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x24161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x241620: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241620u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241624: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241624u;
    SET_GPR_U32(ctx, 31, 0x24162Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241624u, 0x24162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24162Cu;
label_24162c:
    // 0x24162c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24162cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241630: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241630u;
    SET_GPR_U32(ctx, 31, 0x241638u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241630u, 0x241638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241638u;
label_241638:
    // 0x241638: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x241638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x24163c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24163cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241640: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x241644: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241644u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241648: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241648u;
    SET_GPR_U32(ctx, 31, 0x241650u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241648u, 0x241650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241650u;
label_241650:
    // 0x241650: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241654: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241654u;
    SET_GPR_U32(ctx, 31, 0x24165Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241654u, 0x24165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24165Cu;
label_24165c:
    // 0x24165c: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x24165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x241660: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241660u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241664: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x241668: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241668u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24166c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24166Cu;
    SET_GPR_U32(ctx, 31, 0x241674u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24166Cu, 0x241674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241674u;
label_241674:
    // 0x241674: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241678: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241678u;
    SET_GPR_U32(ctx, 31, 0x241680u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241678u, 0x241680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241680u;
label_241680:
    // 0x241680: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x241680u;
    {
        const bool branch_taken_0x241680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241680) {
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x241688u;
label_241688:
    // 0x241688: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24168c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x24168cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x241690: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x241690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x241694: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x241694u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x241698: 0x4600026  bltz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x241698u;
    {
        const bool branch_taken_0x241698 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x241698) {
            ctx->pc = 0x241734u;
            goto label_241734;
        }
    }
    ctx->pc = 0x2416A0u;
    // 0x2416a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416a4: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2416a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2416a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2416a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2416ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2416acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2416b0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2416B0u;
    {
        const bool branch_taken_0x2416b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2416b0) {
            ctx->pc = 0x241700u;
            goto label_241700;
        }
    }
    ctx->pc = 0x2416B8u;
    // 0x2416b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2416b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2416bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2416BCu;
    {
        const bool branch_taken_0x2416bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2416bc) {
            ctx->pc = 0x2416CCu;
            goto label_2416cc;
        }
    }
    ctx->pc = 0x2416C4u;
    // 0x2416c4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2416C4u;
    {
        const bool branch_taken_0x2416c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416c4) {
            ctx->pc = 0x2416CCu;
            goto label_2416cc;
        }
    }
    ctx->pc = 0x2416CCu;
label_2416cc:
    // 0x2416cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2416ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2416d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2416d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2416d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2416dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2416e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2416e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2416e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2416ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2416f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2416f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2416f8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2416F8u;
    {
        const bool branch_taken_0x2416f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416f8) {
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x241700u;
label_241700:
    // 0x241700: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241704: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241708: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x241708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24170c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241710: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x241710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x241714: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241718: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x241718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24171c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241720: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x241720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x241724: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241728: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x241728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x24172c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24172Cu;
    {
        const bool branch_taken_0x24172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24172c) {
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x241734u;
label_241734:
    // 0x241734: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241738: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x241738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x24173c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x24173cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x241740: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x241744: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241744u;
    {
        const bool branch_taken_0x241744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241744) {
            ctx->pc = 0x241794u;
            goto label_241794;
        }
    }
    ctx->pc = 0x24174Cu;
    // 0x24174c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241750: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x241750u;
    {
        const bool branch_taken_0x241750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241750) {
            ctx->pc = 0x241760u;
            goto label_241760;
        }
    }
    ctx->pc = 0x241758u;
    // 0x241758: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x241758u;
    {
        const bool branch_taken_0x241758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241758) {
            ctx->pc = 0x241760u;
            goto label_241760;
        }
    }
    ctx->pc = 0x241760u;
label_241760:
    // 0x241760: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241764: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241768: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x241768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24176c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241770: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x241770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x241774: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241778: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x241778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24177c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241780: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x241780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x241784: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241788: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x241788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x24178c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24178Cu;
    {
        const bool branch_taken_0x24178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24178c) {
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x241794u;
label_241794:
    // 0x241794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241798: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24179c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x24179cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2417a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2417a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2417a4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2417a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2417a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2417ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2417acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2417b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2417b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2417b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2417b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2417b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2417b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2417bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2417bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2417c0:
    // 0x2417c0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2417c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2417c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2417c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2417c8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2417cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2417CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2417CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2417D4u;
}
