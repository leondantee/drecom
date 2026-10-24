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

// Function: set_eff_BlackBall
// Address: 0x2192e0 - 0x219610
void set_eff_BlackBall_0x2192e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_BlackBall_0x2192e0");
#endif

    switch (ctx->pc) {
        case 0x219344u: goto label_219344;
        case 0x2193dcu: goto label_2193dc;
        case 0x219484u: goto label_219484;
        case 0x219518u: goto label_219518;
        default: break;
    }

    ctx->pc = 0x2192e0u;

    // 0x2192e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2192e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2192e4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2192e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2192e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2192e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2192ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2192ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2192f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2192f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2192f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2192f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2192f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2192f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2192fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2192fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219304: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x219304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x219308: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x219308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x21930c: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x21930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x219310: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x219310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x219314: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x219314u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x219318: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x219318u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21931c: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x21931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x219320: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x219320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219324: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x219324u;
    {
        const bool branch_taken_0x219324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219324) {
            ctx->pc = 0x219444u;
            goto label_219444;
        }
    }
    ctx->pc = 0x21932Cu;
    // 0x21932c: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x21932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x219330: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219334: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x219334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x219338: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x219338u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21933c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21933Cu;
    SET_GPR_U32(ctx, 31, 0x219344u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21933Cu, 0x219344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219344u;
label_219344:
    // 0x219344: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219348: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21934c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219350: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219354: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219358: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x219358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21935c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219360: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219364: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x219364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x219368: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21936c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21936cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219370: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219374: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219378: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21937c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21937cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219380: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219384: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219388: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x219388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21938c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219390: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219394: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219398: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x219398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x21939c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2193a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2193a4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2193a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2193a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2193a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2193acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2193b0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2193b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2193b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2193b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2193b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2193bc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2193bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2193c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2193c8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2193c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2193cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193d0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2193d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2193d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2193D4u;
    SET_GPR_U32(ctx, 31, 0x2193DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2193D4u, 0x2193DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193DCu;
label_2193dc:
    // 0x2193dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2193dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193e0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2193e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2193e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2193e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2193e8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2193e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2193ec: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2193ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2193f0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2193f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2193f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2193F4u;
    {
        const bool branch_taken_0x2193f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2193f4) {
            ctx->pc = 0x219408u;
            goto label_219408;
        }
    }
    ctx->pc = 0x2193FCu;
    // 0x2193fc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2193fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219400: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x219400u;
    {
        const bool branch_taken_0x219400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219400) {
            ctx->pc = 0x219430u;
            goto label_219430;
        }
    }
    ctx->pc = 0x219408u;
label_219408:
    // 0x219408: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21940c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21940cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219410: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x219410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x219414: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x219414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219418: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x219418u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21941c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219420: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x219424: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x219424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x219428: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x219428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21942c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x21942cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_219430:
    // 0x219430: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x219430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x219434: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x219434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x219438: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x219438u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21943c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21943Cu;
    {
        const bool branch_taken_0x21943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21943c) {
            ctx->pc = 0x219570u;
            goto label_219570;
        }
    }
    ctx->pc = 0x219444u;
label_219444:
    // 0x219444: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x219444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219448: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x219448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21944c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21944cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x219450: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x219450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x219454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219458: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21945c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21945cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219460: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219464: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219468: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21946c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219470: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x219474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219478: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x219478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21947c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21947Cu;
    SET_GPR_U32(ctx, 31, 0x219484u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21947Cu, 0x219484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219488: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219488u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21948c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219490: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219494: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x219498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21949c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194a4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2194a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2194a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194b0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2194b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194bc: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2194bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194c8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2194c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194d4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2194d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194e0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2194e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194ec: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2194ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194f8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2194f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219504: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21950c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21950cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219510: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219510u;
    SET_GPR_U32(ctx, 31, 0x219518u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219510u, 0x219518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219518u;
label_219518:
    // 0x219518: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21951c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21951cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219524: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219528: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21952c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219530: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219530u;
    {
        const bool branch_taken_0x219530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219530) {
            ctx->pc = 0x219544u;
            goto label_219544;
        }
    }
    ctx->pc = 0x219538u;
    // 0x219538: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219538u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21953c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21953Cu;
    {
        const bool branch_taken_0x21953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21953c) {
            ctx->pc = 0x219560u;
            goto label_219560;
        }
    }
    ctx->pc = 0x219544u;
label_219544:
    // 0x219544: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219548: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21954c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219550: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219550u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x219554: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x219554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x219558: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x219558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21955c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x21955cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_219560:
    // 0x219560: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x219560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x219564: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x219564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x219568: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x219568u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21956c: 0x0  nop
    ctx->pc = 0x21956cu;
    // NOP
label_219570:
    // 0x219570: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x219574: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x219574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219578: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x219578u;
    {
        const bool branch_taken_0x219578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x219578) {
            ctx->pc = 0x2195E0u;
            goto label_2195e0;
        }
    }
    ctx->pc = 0x219580u;
    // 0x219580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219584: 0x0  nop
    ctx->pc = 0x219584u;
    // NOP
    // 0x219588: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x219588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21958c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21958cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219590: 0x0  nop
    ctx->pc = 0x219590u;
    // NOP
    // 0x219594: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x219594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x219598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21959c: 0x0  nop
    ctx->pc = 0x21959cu;
    // NOP
    // 0x2195a0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2195a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2195a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2195a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195a8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2195a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2195ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2195acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2195b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2195b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195b4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2195b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2195b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2195bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2195bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195c0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2195c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2195c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2195c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2195c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195cc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2195ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2195d0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2195d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2195d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2195d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2195dc: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2195dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_2195e0:
    // 0x2195e0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2195e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2195e4: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2195e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2195e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2195e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2195ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2195ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2195f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2195f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2195f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2195f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2195f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2195f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2195fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2195fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219604: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x219604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x219608: 0x3e00008  jr          $ra
    ctx->pc = 0x219608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219610u;
}
