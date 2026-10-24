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

// Function: entry_00285308
// Address: 0x285308 - 0x2854d8
void entry_00285308_0x285308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285308_0x285308");
#endif

    switch (ctx->pc) {
        case 0x285320u: goto label_285320;
        case 0x285458u: goto label_285458;
        case 0x2854a0u: goto label_2854a0;
        default: break;
    }

    ctx->pc = 0x285308u;

    // 0x285308: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x285308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28530c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x285310: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x285310u;
    {
        const bool branch_taken_0x285310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285310) {
            ctx->pc = 0x2854D8u;
            return;
        }
    }
    ctx->pc = 0x285318u;
    // 0x285318: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x285318u;
    SET_GPR_U32(ctx, 31, 0x285320u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x285318u, 0x285320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285320u;
label_285320:
    // 0x285320: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x285320u;
    {
        const bool branch_taken_0x285320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285320) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285328u;
    // 0x285328: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28532c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x285330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285334: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x285334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x285338: 0x8e1265a0  lw          $s2, 0x65A0($s0)
    ctx->pc = 0x285338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x28533c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28533cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285340: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x285340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285344: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x285348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x285348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28534c: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x28534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x285350: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x285350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285354: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x285358: 0xae020628  sw          $v0, 0x628($s0)
    ctx->pc = 0x285358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    // 0x28535c: 0x96020624  lhu         $v0, 0x624($s0)
    ctx->pc = 0x28535cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x285360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285364: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x285364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x285368: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28536c: 0xa602062c  sh          $v0, 0x62C($s0)
    ctx->pc = 0x28536cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 2));
    // 0x285370: 0x96020626  lhu         $v0, 0x626($s0)
    ctx->pc = 0x285370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1574)));
    // 0x285374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28537c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285380: 0xa602062e  sh          $v0, 0x62E($s0)
    ctx->pc = 0x285380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1582), (uint16_t)GPR_U32(ctx, 2));
    // 0x285384: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x285384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285388: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28538c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285390: 0xae020628  sw          $v0, 0x628($s0)
    ctx->pc = 0x285390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    // 0x285394: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x285394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28539c: 0xae020630  sw          $v0, 0x630($s0)
    ctx->pc = 0x28539cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
    // 0x2853a0: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x2853a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x2853a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853a8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2853a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2853ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853b0: 0xa6020634  sh          $v0, 0x634($s0)
    ctx->pc = 0x2853b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 2));
    // 0x2853b4: 0x9602062e  lhu         $v0, 0x62E($s0)
    ctx->pc = 0x2853b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1582)));
    // 0x2853b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2853bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2853c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853c4: 0xa6020636  sh          $v0, 0x636($s0)
    ctx->pc = 0x2853c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1590), (uint16_t)GPR_U32(ctx, 2));
    // 0x2853c8: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x2853c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2853cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2853ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2853d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2853d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2853d4: 0xae020630  sw          $v0, 0x630($s0)
    ctx->pc = 0x2853d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
    // 0x2853d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2853dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2853dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2853e0: 0xae020638  sw          $v0, 0x638($s0)
    ctx->pc = 0x2853e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 2));
    // 0x2853e4: 0x96020634  lhu         $v0, 0x634($s0)
    ctx->pc = 0x2853e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1588)));
    // 0x2853e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853ec: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2853f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2853f4: 0xa602063c  sh          $v0, 0x63C($s0)
    ctx->pc = 0x2853f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1596), (uint16_t)GPR_U32(ctx, 2));
    // 0x2853f8: 0x96020636  lhu         $v0, 0x636($s0)
    ctx->pc = 0x2853f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1590)));
    // 0x2853fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2853fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285404: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285408: 0xa602063e  sh          $v0, 0x63E($s0)
    ctx->pc = 0x285408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1598), (uint16_t)GPR_U32(ctx, 2));
    // 0x28540c: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x28540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285410: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x285414: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x285414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285418: 0xae020638  sw          $v0, 0x638($s0)
    ctx->pc = 0x285418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 2));
    // 0x28541c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28541cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285420: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x285424: 0xae020640  sw          $v0, 0x640($s0)
    ctx->pc = 0x285424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 2));
    // 0x285428: 0x9602063c  lhu         $v0, 0x63C($s0)
    ctx->pc = 0x285428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1596)));
    // 0x28542c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285430: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x285430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x285434: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285438: 0xa6020644  sh          $v0, 0x644($s0)
    ctx->pc = 0x285438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1604), (uint16_t)GPR_U32(ctx, 2));
    // 0x28543c: 0x9602063e  lhu         $v0, 0x63E($s0)
    ctx->pc = 0x28543cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1598)));
    // 0x285440: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x285444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285448: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x285448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28544c: 0xa6020646  sh          $v0, 0x646($s0)
    ctx->pc = 0x28544cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1606), (uint16_t)GPR_U32(ctx, 2));
    // 0x285450: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x285450u;
    SET_GPR_U32(ctx, 31, 0x285458u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x285450u, 0x285458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285458u;
label_285458:
    // 0x285458: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x285458u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28545c: 0x8e0265a0  lw          $v0, 0x65A0($s0)
    ctx->pc = 0x28545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285460: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x285464: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x285464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x285468: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28546c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285470: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285474: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x285474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285478: 0x7280be28  paddub      $s7, $s4, $zero
    ctx->pc = 0x285478u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28547c: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x28547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x285480: 0x3455008c  ori         $s5, $v0, 0x8C
    ctx->pc = 0x285480u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
    // 0x285484: 0x8e0665a0  lw          $a2, 0x65A0($s0)
    ctx->pc = 0x285484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x285488: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x285488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28548c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x28548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x285490: 0x3445b000  ori         $a1, $v0, 0xB000
    ctx->pc = 0x285490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x285494: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x285494u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285498: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x285498u;
    SET_GPR_U32(ctx, 31, 0x2854A0u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x285498u, 0x2854A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854A0u;
label_2854a0:
    // 0x2854a0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2854a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2854a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2854a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2854a8: 0x1263006d  beq         $s3, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2854A8u;
    {
        const bool branch_taken_0x2854a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2854a8) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x2854B0u;
    // 0x2854b0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2854b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2854b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2854b8: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x2854b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x2854bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2854bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2854c0: 0x8c231b98  lw          $v1, 0x1B98($at)
    ctx->pc = 0x2854c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B98u));
    // 0x2854c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2854c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2854c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2854c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2854cc: 0xac231b98  sw          $v1, 0x1B98($at)
    ctx->pc = 0x2854ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x2854d0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2854D0u;
    {
        const bool branch_taken_0x2854d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2854d0) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x2854D8u;
}
