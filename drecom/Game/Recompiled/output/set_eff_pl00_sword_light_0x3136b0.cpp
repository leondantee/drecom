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

// Function: set_eff_pl00_sword_light
// Address: 0x3136b0 - 0x313a04
void set_eff_pl00_sword_light_0x3136b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_sword_light_0x3136b0");
#endif

    switch (ctx->pc) {
        case 0x313720u: goto label_313720;
        case 0x3137bcu: goto label_3137bc;
        case 0x313864u: goto label_313864;
        case 0x3138fcu: goto label_3138fc;
        default: break;
    }

    ctx->pc = 0x3136b0u;

    // 0x3136b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3136b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3136b4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x3136b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x3136b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3136b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3136bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3136bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3136c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3136c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3136c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3136c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3136c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3136c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3136cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3136ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3136d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3136d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3136d4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x3136d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x3136d8: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x3136d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x3136dc: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x3136dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x3136e0: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x3136e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x3136e4: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x3136e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3136e8: 0xe7ad00a8  swc1        $f13, 0xA8($sp)
    ctx->pc = 0x3136e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3136ec: 0xe7ae00b0  swc1        $f14, 0xB0($sp)
    ctx->pc = 0x3136ecu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3136f0: 0xe7af00b8  swc1        $f15, 0xB8($sp)
    ctx->pc = 0x3136f0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3136f4: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x3136f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x3136f8: 0xafa900c8  sw          $t1, 0xC8($sp)
    ctx->pc = 0x3136f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 9));
    // 0x3136fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x3136fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313700: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x313700u;
    {
        const bool branch_taken_0x313700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313700) {
            ctx->pc = 0x313824u;
            goto label_313824;
        }
    }
    ctx->pc = 0x313708u;
    // 0x313708: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x313708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x31370c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31370cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313710: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x313710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313714: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x313714u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313718: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x313718u;
    SET_GPR_U32(ctx, 31, 0x313720u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x313718u, 0x313720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313720u;
label_313720:
    // 0x313720: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313724: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x313724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x313728: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x313728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31372c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31372cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313730: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313734: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313738: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x313738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x31373c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31373cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313740: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313744: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x313744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x313748: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31374c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31374cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313750: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x313750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x313754: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313758: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31375c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x31375cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x313760: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313764: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313768: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x313768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x31376c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313770: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313774: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313774u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313778: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x313778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x31377c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313780: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313780u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313784: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x313784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x313788: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31378c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31378cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313790: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x313790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x313794: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313798: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31379c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x31379cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3137a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3137a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3137a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3137a8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3137a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3137ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3137b0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3137b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3137b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3137B4u;
    SET_GPR_U32(ctx, 31, 0x3137BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3137B4u, 0x3137BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3137BCu;
label_3137bc:
    // 0x3137bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3137c0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3137c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3137c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3137c8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3137c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3137cc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3137ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3137d0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3137d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3137d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3137D4u;
    {
        const bool branch_taken_0x3137d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3137d4) {
            ctx->pc = 0x3137E8u;
            goto label_3137e8;
        }
    }
    ctx->pc = 0x3137DCu;
    // 0x3137dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3137dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3137e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3137E0u;
    {
        const bool branch_taken_0x3137e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3137e0) {
            ctx->pc = 0x313810u;
            goto label_313810;
        }
    }
    ctx->pc = 0x3137E8u;
label_3137e8:
    // 0x3137e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3137ec: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3137ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3137f0: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x3137f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x3137f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3137f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3137f8: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x3137f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x3137fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313800: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x313804: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x313808: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x313808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31380c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x31380cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_313810:
    // 0x313810: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x313810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x313814: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x313814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x313818: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x313818u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x31381c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31381Cu;
    {
        const bool branch_taken_0x31381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31381c) {
            ctx->pc = 0x313954u;
            goto label_313954;
        }
    }
    ctx->pc = 0x313824u;
label_313824:
    // 0x313824: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x313824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313828: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x313828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31382c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31382cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x313830: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x313830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x313834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31383c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x313840: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x313840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x313844: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x313844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x313848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x313848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31384c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31384cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x313850: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x313850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x313854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x313854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313858: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x313858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31385c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31385Cu;
    SET_GPR_U32(ctx, 31, 0x313864u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31385Cu, 0x313864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313864u;
label_313864:
    // 0x313864: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313868: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x313868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x31386c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x313870: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x313870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313878: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31387c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x31387cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x313880: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313884: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313888: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x313888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x31388c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31388cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313890: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313894: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x313894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x313898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31389c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31389cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138a0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x3138a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138ac: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x3138acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138b8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3138b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138c4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3138c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138d0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3138d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138dc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3138dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138e8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3138e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138f0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3138f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3138F4u;
    SET_GPR_U32(ctx, 31, 0x3138FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3138F4u, 0x3138FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138FCu;
label_3138fc:
    // 0x3138fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313900: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x313900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x313904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313908: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x313908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x31390c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x313910: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x313910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x313914: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x313914u;
    {
        const bool branch_taken_0x313914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x313914) {
            ctx->pc = 0x313928u;
            goto label_313928;
        }
    }
    ctx->pc = 0x31391Cu;
    // 0x31391c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x31391cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313920: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x313920u;
    {
        const bool branch_taken_0x313920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313920) {
            ctx->pc = 0x313944u;
            goto label_313944;
        }
    }
    ctx->pc = 0x313928u;
label_313928:
    // 0x313928: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31392c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x31392cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x313930: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313934: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x313934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x313938: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x313938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x31393c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x31393cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x313940: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x313940u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_313944:
    // 0x313944: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x313944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x313948: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x313948u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x31394c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x31394cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x313950: 0x0  nop
    ctx->pc = 0x313950u;
    // NOP
label_313954:
    // 0x313954: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x313954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x313958: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x313958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31395c: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x31395Cu;
    {
        const bool branch_taken_0x31395c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31395c) {
            ctx->pc = 0x3139D4u;
            goto label_3139d4;
        }
    }
    ctx->pc = 0x313964u;
    // 0x313964: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x313964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x313968: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x313968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x31396c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x31396cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x313970: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x313970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x313974: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x313974u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x313978: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x313978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31397c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x31397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x313980: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x313980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313984: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x313984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x313988: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x313988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31398c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x313990: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x313994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313998: 0x0  nop
    ctx->pc = 0x313998u;
    // NOP
    // 0x31399c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3139a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3139a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3139a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3139a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139a8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x3139a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3139ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3139acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3139b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3139b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139b4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x3139b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x3139b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3139bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3139bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139c0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x3139c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x3139c4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3139c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3139c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3139cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3139ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3139d0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3139d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3139d4:
    // 0x3139d4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x3139d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3139d8: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x3139d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3139dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3139dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3139e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3139e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3139e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3139e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3139e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3139e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3139ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3139ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3139f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3139f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3139f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3139f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3139f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x3139f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3139fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3139FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3139FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313A04u;
}
