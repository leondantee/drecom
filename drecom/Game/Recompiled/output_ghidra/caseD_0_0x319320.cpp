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

// Function: caseD_0
// Address: 0x319320 - 0x319d28
void caseD_0_0x319320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x319320");
#endif

    switch (ctx->pc) {
        case 0x3193a4u: goto label_3193a4;
        case 0x3193c0u: goto label_3193c0;
        case 0x3193ecu: goto label_3193ec;
        case 0x319408u: goto label_319408;
        case 0x319424u: goto label_319424;
        case 0x3194a8u: goto label_3194a8;
        case 0x3194b4u: goto label_3194b4;
        case 0x319524u: goto label_319524;
        case 0x319530u: goto label_319530;
        case 0x3195a4u: goto label_3195a4;
        case 0x3195b0u: goto label_3195b0;
        case 0x319624u: goto label_319624;
        case 0x319630u: goto label_319630;
        case 0x319698u: goto label_319698;
        case 0x3196d4u: goto label_3196d4;
        case 0x319714u: goto label_319714;
        case 0x319780u: goto label_319780;
        case 0x3197bcu: goto label_3197bc;
        case 0x3197fcu: goto label_3197fc;
        case 0x31986cu: goto label_31986c;
        case 0x3198acu: goto label_3198ac;
        case 0x3198e8u: goto label_3198e8;
        case 0x319984u: goto label_319984;
        case 0x3199c4u: goto label_3199c4;
        case 0x319a04u: goto label_319a04;
        case 0x319aa4u: goto label_319aa4;
        case 0x319aecu: goto label_319aec;
        case 0x319b30u: goto label_319b30;
        case 0x319b98u: goto label_319b98;
        case 0x319bd8u: goto label_319bd8;
        case 0x319c18u: goto label_319c18;
        case 0x319ca0u: goto label_319ca0;
        case 0x319cdcu: goto label_319cdc;
        case 0x319d18u: goto label_319d18;
        default: break;
    }

    ctx->pc = 0x319320u;

    // 0x319320: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x319320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x319324: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319328: 0xac8312b0  sw          $v1, 0x12B0($a0)
    ctx->pc = 0x319328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 3));
    // 0x31932c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x31932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x319330: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x319330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x319334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319338: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31933c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x319340: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x319340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x319344: 0x34a5999a  ori         $a1, $a1, 0x999A
    ctx->pc = 0x319344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x319348: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319348u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31934c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319350: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x319350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x319354: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x319354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x319358: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x319358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31935c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31935cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319360: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319364: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x319364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x319368: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31936c: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31936cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
    // 0x319370: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319374: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x319374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x319378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31937c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319380: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x319380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x319384: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x319384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x319388: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x319388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31938c: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x31938cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x319390: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x319390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x319394: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x319394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x319398: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x319398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31939c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31939Cu;
    SET_GPR_U32(ctx, 31, 0x3193A4u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31939Cu, 0x3193A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193A4u;
label_3193a4:
    // 0x3193a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3193a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3193a8: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x3193a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3193ac: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x3193acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3193b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3193b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3193b4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3193b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3193b8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x3193B8u;
    SET_GPR_U32(ctx, 31, 0x3193C0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x3193B8u, 0x3193C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193C0u;
label_3193c0:
    // 0x3193c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3193c4: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x3193c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3193c8: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x3193c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3193cc: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x3193d0: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x3193d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3193d4: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x3193d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3193d8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3193d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3193dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3193dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3193e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3193e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3193e4: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x3193E4u;
    SET_GPR_U32(ctx, 31, 0x3193ECu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x3193E4u, 0x3193ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193ECu;
label_3193ec:
    // 0x3193ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3193ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3193f0: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x3193f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3193f4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3193f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3193f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3193f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3193fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3193fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x319400: 0xc065580  jal         func_195600
    ctx->pc = 0x319400u;
    SET_GPR_U32(ctx, 31, 0x319408u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x319400u, 0x319408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319408u;
label_319408:
    // 0x319408: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x319408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31940c: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x31940cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x319410: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x319410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x319414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319418: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x319418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31941c: 0xc065580  jal         func_195600
    ctx->pc = 0x31941Cu;
    SET_GPR_U32(ctx, 31, 0x319424u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x31941Cu, 0x319424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319424u;
label_319424:
    // 0x319424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x319424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x319428: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x319428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31942c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x31942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x319430: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x319430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x319434: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x319434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x319438: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x319438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31943c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31943cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319440: 0x0  nop
    ctx->pc = 0x319440u;
    // NOP
    // 0x319444: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31944c: 0x0  nop
    ctx->pc = 0x31944cu;
    // NOP
    // 0x319450: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319454: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x319454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x319458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31945c: 0x0  nop
    ctx->pc = 0x31945cu;
    // NOP
    // 0x319460: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319464: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x319464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x319468: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31946c: 0x0  nop
    ctx->pc = 0x31946cu;
    // NOP
    // 0x319470: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x319470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x319474: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x319474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319478: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x319478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x31947c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319480: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x319480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x319484: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319488: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x319488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x31948c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x31948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x319490: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x319490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x319494: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x319498: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31949c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3194a0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3194A0u;
    SET_GPR_U32(ctx, 31, 0x3194A8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3194A0u, 0x3194A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194A8u;
label_3194a8:
    // 0x3194a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3194a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3194ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3194ACu;
    SET_GPR_U32(ctx, 31, 0x3194B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3194ACu, 0x3194B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194B4u;
label_3194b4:
    // 0x3194b4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x3194b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x3194b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3194b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3194bc: 0x0  nop
    ctx->pc = 0x3194bcu;
    // NOP
    // 0x3194c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3194c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3194c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3194c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3194c8: 0x0  nop
    ctx->pc = 0x3194c8u;
    // NOP
    // 0x3194cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3194ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3194d0: 0x3c06c348  lui         $a2, 0xC348
    ctx->pc = 0x3194d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49992 << 16));
    // 0x3194d4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3194d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3194d8: 0x0  nop
    ctx->pc = 0x3194d8u;
    // NOP
    // 0x3194dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3194dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3194e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3194e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3194e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3194e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3194e8: 0x0  nop
    ctx->pc = 0x3194e8u;
    // NOP
    // 0x3194ec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3194ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3194f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3194f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3194f4: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x3194f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3194f8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3194f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3194fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3194fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x319500: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319504: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x319504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x319508: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x319508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x31950c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31950cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x319510: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x319514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319518: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31951c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31951Cu;
    SET_GPR_U32(ctx, 31, 0x319524u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31951Cu, 0x319524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319524u;
label_319524:
    // 0x319524: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319528: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x319528u;
    SET_GPR_U32(ctx, 31, 0x319530u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319528u, 0x319530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319530u;
label_319530:
    // 0x319530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319534: 0x0  nop
    ctx->pc = 0x319534u;
    // NOP
    // 0x319538: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31953c: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x31953cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x319540: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319540u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319544: 0x0  nop
    ctx->pc = 0x319544u;
    // NOP
    // 0x319548: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31954c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x31954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x319550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319554: 0x0  nop
    ctx->pc = 0x319554u;
    // NOP
    // 0x319558: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31955c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x31955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x319560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319564: 0x0  nop
    ctx->pc = 0x319564u;
    // NOP
    // 0x319568: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x319568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31956c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319570: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x319574: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x319574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x319578: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x319578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31957c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31957cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319580: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x319580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x319584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x319584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x319588: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x319588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31958c: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x31958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x319590: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x319590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x319594: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319598: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31959c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31959Cu;
    SET_GPR_U32(ctx, 31, 0x3195A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31959Cu, 0x3195A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195A4u;
label_3195a4:
    // 0x3195a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3195a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3195a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3195A8u;
    SET_GPR_U32(ctx, 31, 0x3195B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3195A8u, 0x3195B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195B0u;
label_3195b0:
    // 0x3195b0: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x3195b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x3195b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3195b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3195b8: 0x0  nop
    ctx->pc = 0x3195b8u;
    // NOP
    // 0x3195bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3195bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3195c0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3195c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3195c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3195c8: 0x0  nop
    ctx->pc = 0x3195c8u;
    // NOP
    // 0x3195cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3195ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3195d0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x3195d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x3195d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3195d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3195d8: 0x0  nop
    ctx->pc = 0x3195d8u;
    // NOP
    // 0x3195dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3195dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3195e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3195e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3195e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3195e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3195e8: 0x0  nop
    ctx->pc = 0x3195e8u;
    // NOP
    // 0x3195ec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3195ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3195f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3195f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3195f4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3195f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3195f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3195f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3195fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3195fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x319600: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x319600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319604: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x319604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x319608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31960c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31960cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x319610: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x319614: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319614u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319618: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31961c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31961Cu;
    SET_GPR_U32(ctx, 31, 0x319624u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31961Cu, 0x319624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319624u;
label_319624:
    // 0x319624: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319628: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x319628u;
    SET_GPR_U32(ctx, 31, 0x319630u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319628u, 0x319630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319630u;
label_319630:
    // 0x319630: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319634: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x319634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x319638: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x319638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31963c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319640: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x319640u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x319644: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319648: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x319648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31964c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31964cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319650: 0x0  nop
    ctx->pc = 0x319650u;
    // NOP
    // 0x319654: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319658: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31965c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319660: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319664: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x319668: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x319668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31966c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x31966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x319670: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319674: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x319674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x319678: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x319678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31967c: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x31967cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319680: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319684: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319684u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319688: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319688u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31968c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31968cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319690: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319690u;
    SET_GPR_U32(ctx, 31, 0x319698u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319690u, 0x319698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319698u;
label_319698:
    // 0x319698: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31969c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31969cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3196a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3196a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3196a4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3196a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3196a8: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x3196a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x3196ac: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x3196acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3196b0: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x3196b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x3196b4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3196b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3196b8: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x3196b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x3196bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3196bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3196c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3196c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3196c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3196c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3196c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3196c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3196cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3196CCu;
    SET_GPR_U32(ctx, 31, 0x3196D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3196CCu, 0x3196D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196D4u;
label_3196d4:
    // 0x3196d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3196d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3196d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3196dc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3196dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3196e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3196e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3196e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3196e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3196e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3196e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3196ec: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x3196ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3196f0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3196f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3196f4: 0x12983c  dsll32      $s3, $s2, 0
    ctx->pc = 0x3196f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3196f8: 0x36640018  ori         $a0, $s3, 0x18
    ctx->pc = 0x3196f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)24);
    // 0x3196fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3196fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319700: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319704: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319704u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319708: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319708u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31970c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31970Cu;
    SET_GPR_U32(ctx, 31, 0x319714u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31970Cu, 0x319714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319714u;
label_319714:
    // 0x319714: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x319714u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319718: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31971c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x319720: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x319720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319724: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x319724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319728: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x319728u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x31972c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319730: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x319730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x319734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319738: 0x0  nop
    ctx->pc = 0x319738u;
    // NOP
    // 0x31973c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31973cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319740: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319744: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x319748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31974c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x319750: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319754: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x319758: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x319758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31975c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x31975cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x319760: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x319760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x319764: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319768: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31976c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31976cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319770: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319770u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319774: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319774u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319778: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319778u;
    SET_GPR_U32(ctx, 31, 0x319780u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319778u, 0x319780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319780u;
label_319780:
    // 0x319780: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319784: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x319788: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31978c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x319794: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x319794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319798: 0xc72024  and         $a0, $a2, $a3
    ctx->pc = 0x319798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x31979c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31979cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3197a0: 0x34c40018  ori         $a0, $a2, 0x18
    ctx->pc = 0x3197a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
    // 0x3197a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3197a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3197a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3197a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3197ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3197acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3197b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3197b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3197b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3197B4u;
    SET_GPR_U32(ctx, 31, 0x3197BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3197B4u, 0x3197BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197BCu;
label_3197bc:
    // 0x3197bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3197bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3197c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3197c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3197c4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3197c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3197c8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3197c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3197cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3197ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3197d0: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3197d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x3197d4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x3197d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3197d8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x3197d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3197dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3197dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3197e0: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x3197e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x3197e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3197e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3197e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3197e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3197ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3197ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3197f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3197f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3197f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3197F4u;
    SET_GPR_U32(ctx, 31, 0x3197FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3197F4u, 0x3197FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197FCu;
label_3197fc:
    // 0x3197fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3197fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319800: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319804: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x319804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x319808: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x319808u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31980c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319810: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x319810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x319814: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319818: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x319818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x31981c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31981cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319820: 0x0  nop
    ctx->pc = 0x319820u;
    // NOP
    // 0x319824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319828: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31982c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319830: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x319830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319834: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x319834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x319838: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x319838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31983c: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x31983cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x319840: 0x3470ffff  ori         $s0, $v1, 0xFFFF
    ctx->pc = 0x319840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x319844: 0xb01824  and         $v1, $a1, $s0
    ctx->pc = 0x319844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x319848: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x319848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31984c: 0x34860018  ori         $a2, $a0, 0x18
    ctx->pc = 0x31984cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    // 0x319850: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x319850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x319854: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319858: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31985c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31985cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319860: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319860u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319864: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319864u;
    SET_GPR_U32(ctx, 31, 0x31986Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319864u, 0x31986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31986Cu;
label_31986c:
    // 0x31986c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31986cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319870: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319874: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319878: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31987c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319880: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x319880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x319884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319888: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x319888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31988c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319890: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319894: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319898: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319898u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31989c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31989cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3198a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3198a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3198a4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3198A4u;
    SET_GPR_U32(ctx, 31, 0x3198ACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3198A4u, 0x3198ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198ACu;
label_3198ac:
    // 0x3198ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3198acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3198b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3198b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3198b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3198b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3198b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3198b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3198bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3198bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3198c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3198c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3198c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3198c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3198c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3198c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3198cc: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x3198ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x3198d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3198d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3198d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3198d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3198d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3198d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3198dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3198dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3198e0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3198E0u;
    SET_GPR_U32(ctx, 31, 0x3198E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3198E0u, 0x3198E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198E8u;
label_3198e8:
    // 0x3198e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3198ec: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3198ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3198f0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3198f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3198f4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3198f8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3198f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x3198fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3198fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319900: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x319900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x319904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319908: 0x0  nop
    ctx->pc = 0x319908u;
    // NOP
    // 0x31990c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31990cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319910: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319914: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319918: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x319918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31991c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31991cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319920: 0x0  nop
    ctx->pc = 0x319920u;
    // NOP
    // 0x319924: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319928: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31992c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319930: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x319930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
    // 0x319934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319938: 0x0  nop
    ctx->pc = 0x319938u;
    // NOP
    // 0x31993c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31993cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319940: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319944: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319948: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31994c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31994cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x319950: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319954: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x319954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x319958: 0x3474ffff  ori         $s4, $v1, 0xFFFF
    ctx->pc = 0x319958u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31995c: 0x941824  and         $v1, $a0, $s4
    ctx->pc = 0x31995cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x319960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x319960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319964: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x319964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x319968: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31996c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x31996cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x319970: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319970u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319974: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319974u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319978: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319978u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31997c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31997Cu;
    SET_GPR_U32(ctx, 31, 0x319984u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31997Cu, 0x319984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319984u;
label_319984:
    // 0x319984: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x319984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319988: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31998c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x31998cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319990: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x319990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x319994: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319998: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x319998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31999c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x31999cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3199a0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x3199a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3199a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3199a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3199a8: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x3199a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x3199ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3199acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3199b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3199b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3199b4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3199b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3199b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3199b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3199bc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3199BCu;
    SET_GPR_U32(ctx, 31, 0x3199C4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3199BCu, 0x3199C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3199C4u;
label_3199c4:
    // 0x3199c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3199c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3199c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3199c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3199cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3199ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3199d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3199d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3199d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3199d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3199d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3199d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3199dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3199dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3199e0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3199e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3199e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3199e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3199e8: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x3199e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x3199ec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3199ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3199f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3199f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3199f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3199f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3199f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3199f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3199fc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3199FCu;
    SET_GPR_U32(ctx, 31, 0x319A04u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3199FCu, 0x319A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A04u;
label_319a04:
    // 0x319a04: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x319a04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319a08: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319a0c: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x319a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x319a10: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x319a10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x319a14: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319a18: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x319a18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x319a1c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319a20: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x319a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x319a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319a28: 0x0  nop
    ctx->pc = 0x319a28u;
    // NOP
    // 0x319a2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319a30: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319a34: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319a38: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x319a38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x319a3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x319a3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319a40: 0x0  nop
    ctx->pc = 0x319a40u;
    // NOP
    // 0x319a44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319a48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319a4c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319a50: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
    // 0x319a54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319a58: 0x0  nop
    ctx->pc = 0x319a58u;
    // NOP
    // 0x319a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319a60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319a64: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x319a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319a68: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x319a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x319a6c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x319a70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319a74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x319a78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319a7c: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x319a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x319a80: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x319a84: 0x34c70018  ori         $a3, $a2, 0x18
    ctx->pc = 0x319a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
    // 0x319a88: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x319a88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x319a8c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319a90: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319a90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319a94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319a94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319a98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319a98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319a9c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319A9Cu;
    SET_GPR_U32(ctx, 31, 0x319AA4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319A9Cu, 0x319AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AA4u;
label_319aa4:
    // 0x319aa4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x319aa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319aa8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x319aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319aac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x319aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x319ab0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x319ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x319ab4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319ab8: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x319ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x319abc: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x319abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x319ac0: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x319ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x319ac4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x319ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x319ac8: 0x34c20018  ori         $v0, $a2, 0x18
    ctx->pc = 0x319ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
    // 0x319acc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319accu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319ad0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319ad4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x319ad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x319ad8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319ad8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319adc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319adcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319ae0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319ae0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319ae4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319AE4u;
    SET_GPR_U32(ctx, 31, 0x319AECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319AE4u, 0x319AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AECu;
label_319aec:
    // 0x319aec: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x319aecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319af0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319af4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x319af8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x319afc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319b00: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x319b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x319b04: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x319b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x319b08: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x319b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x319b0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x319b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319b10: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319b14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319b18: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x319b18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x319b1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319b1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319b20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319b20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319b24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319b24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319b28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319B28u;
    SET_GPR_U32(ctx, 31, 0x319B30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319B28u, 0x319B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B30u;
label_319b30:
    // 0x319b30: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319b34: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x319b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x319b38: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x319b38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319b3c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319b40: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x319b40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x319b44: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319b48: 0x3c07c396  lui         $a3, 0xC396
    ctx->pc = 0x319b48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50070 << 16));
    // 0x319b4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x319b4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319b50: 0x0  nop
    ctx->pc = 0x319b50u;
    // NOP
    // 0x319b54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319b58: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319b5c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319b60: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x319b64: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x319b68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319b6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x319b70: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x319b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319b74: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x319b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x319b78: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x319b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x319b7c: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319b80: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319b84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319b88: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319b88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319b8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319b8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319b90: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319B90u;
    SET_GPR_U32(ctx, 31, 0x319B98u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319B90u, 0x319B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B98u;
label_319b98:
    // 0x319b98: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319b9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x319b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319ba0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x319ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x319ba4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319ba8: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x319ba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x319bac: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x319bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x319bb0: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x319bb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x319bb4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x319bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x319bb8: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x319bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319bbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319bc0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319bc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319bc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319bcc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319bccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319bd0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319BD0u;
    SET_GPR_U32(ctx, 31, 0x319BD8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319BD0u, 0x319BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BD8u;
label_319bd8:
    // 0x319bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319bdc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319be0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x319be4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x319be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319be8: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x319be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x319bec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x319becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319bf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x319bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x319bf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x319bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319bf8: 0x34670018  ori         $a3, $v1, 0x18
    ctx->pc = 0x319bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x319bfc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x319bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x319c00: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319c04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319c04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319c08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319c08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319c0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319c10: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319C10u;
    SET_GPR_U32(ctx, 31, 0x319C18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319C10u, 0x319C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C18u;
label_319c18:
    // 0x319c18: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x319c18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319c1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319c20: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x319c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x319c24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x319c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319c28: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319c2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x319c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x319c30: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319c34: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x319c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x319c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319c3c: 0x0  nop
    ctx->pc = 0x319c3cu;
    // NOP
    // 0x319c40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319c44: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319c48: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319c4c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x319c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319c54: 0x0  nop
    ctx->pc = 0x319c54u;
    // NOP
    // 0x319c58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319c5c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319c60: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319c64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x319c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319c68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x319c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x319c6c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x319c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319c70: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x319c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x319c74: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x319c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x319c78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x319c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x319c7c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x319c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319c80: 0x34e40018  ori         $a0, $a3, 0x18
    ctx->pc = 0x319c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24);
    // 0x319c84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319c88: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x319c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x319c8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319c8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319c90: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319c90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319c94: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319c94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319c98: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319C98u;
    SET_GPR_U32(ctx, 31, 0x319CA0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319C98u, 0x319CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CA0u;
label_319ca0:
    // 0x319ca0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319ca4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319ca8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x319cac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319cb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x319cb4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x319cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x319cb8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x319cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x319cbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x319cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319cc0: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x319cc4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319cc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319ccc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319cccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319cd0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319cd0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319cd4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319CD4u;
    SET_GPR_U32(ctx, 31, 0x319CDCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319CD4u, 0x319CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CDCu;
label_319cdc:
    // 0x319cdc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319ce0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x319ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319ce4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x319ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x319ce8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x319cec: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x319cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x319cf0: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x319cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x319cf4: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x319cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x319cf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x319cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319cfc: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x319cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x319d00: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319d04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319d04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319d08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319d08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319d0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319d0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319d10: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x319D10u;
    SET_GPR_U32(ctx, 31, 0x319D18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319D10u, 0x319D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D18u;
label_319d18:
    // 0x319d18: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x319d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319d1c: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x319d1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x319d20: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x319d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x319d24: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x319d24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x319d28u;
}
