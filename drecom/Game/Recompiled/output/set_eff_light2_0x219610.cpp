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

// Function: set_eff_light2
// Address: 0x219610 - 0x219aa4
void set_eff_light2_0x219610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_light2_0x219610");
#endif

    switch (ctx->pc) {
        case 0x219680u: goto label_219680;
        case 0x219710u: goto label_219710;
        case 0x2197b0u: goto label_2197b0;
        case 0x219840u: goto label_219840;
        case 0x2198dcu: goto label_2198dc;
        case 0x21996cu: goto label_21996c;
        default: break;
    }

    ctx->pc = 0x219610u;

    // 0x219610: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x219610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x219614: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x219614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x219618: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x219618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21961c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x219620: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x219620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x219624: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x219624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x219628: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21962c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x219630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x219634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21963c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x21963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x219640: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x219640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x219644: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x219644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x219648: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x219648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x21964c: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x21964cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x219650: 0xe7ad00d8  swc1        $f13, 0xD8($sp)
    ctx->pc = 0x219650u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x219654: 0xe7ae00e0  swc1        $f14, 0xE0($sp)
    ctx->pc = 0x219654u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x219658: 0xe7af00e8  swc1        $f15, 0xE8($sp)
    ctx->pc = 0x219658u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21965c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x219660: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x219660u;
    {
        const bool branch_taken_0x219660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219660) {
            ctx->pc = 0x21976Cu;
            goto label_21976c;
        }
    }
    ctx->pc = 0x219668u;
    // 0x219668: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x21966c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21966cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219670: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x219670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219674: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x219674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219678: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219678u;
    SET_GPR_U32(ctx, 31, 0x219680u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219678u, 0x219680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219680u;
label_219680:
    // 0x219680: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219684: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219688: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21968c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21968cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219690: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219694: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219698: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219698u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21969c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21969cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196a8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2196a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196b4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2196b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196c0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2196c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196cc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2196ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196d8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2196d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196e4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2196e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196f0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2196f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2196f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2196f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2196f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2196fc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2196fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219700: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219704: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219704u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219708: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219708u;
    SET_GPR_U32(ctx, 31, 0x219710u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219708u, 0x219710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219710u;
label_219710:
    // 0x219710: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219714: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219718: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21971c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21971cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219720: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219724: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219728: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219728u;
    {
        const bool branch_taken_0x219728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219728) {
            ctx->pc = 0x21973Cu;
            goto label_21973c;
        }
    }
    ctx->pc = 0x219730u;
    // 0x219730: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x219730u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219734u;
    {
        const bool branch_taken_0x219734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219734) {
            ctx->pc = 0x219758u;
            goto label_219758;
        }
    }
    ctx->pc = 0x21973Cu;
label_21973c:
    // 0x21973c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21973cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219740: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219744: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219748: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21974c: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x21974cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219750: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x219750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x219754: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x219754u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_219758:
    // 0x219758: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21975c: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21975cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219760: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219764: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x219764u;
    {
        const bool branch_taken_0x219764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219764) {
            ctx->pc = 0x2199CCu;
            goto label_2199cc;
        }
    }
    ctx->pc = 0x21976Cu;
label_21976c:
    // 0x21976c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219774: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x219774u;
    {
        const bool branch_taken_0x219774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219774) {
            ctx->pc = 0x21989Cu;
            goto label_21989c;
        }
    }
    ctx->pc = 0x21977Cu;
    // 0x21977c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x219780: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x219780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x219784: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219788: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21978c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219798: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21979c: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x21979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x2197a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2197a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2197a4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2197a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2197A8u;
    SET_GPR_U32(ctx, 31, 0x2197B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2197A8u, 0x2197B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197B0u;
label_2197b0:
    // 0x2197b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197b4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2197b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2197b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197c0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2197c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197cc: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2197ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197d8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2197d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197e4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2197e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2197f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2197fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219804: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219808: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21980c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219810: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219814: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219818: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21981c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21981cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219820: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219828: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21982c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21982cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219830: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219834: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219838u;
    SET_GPR_U32(ctx, 31, 0x219840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219838u, 0x219840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219840u;
label_219840:
    // 0x219840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219844: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219848: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21984c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21984cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219850: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219854: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219858: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219858u;
    {
        const bool branch_taken_0x219858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219858) {
            ctx->pc = 0x21986Cu;
            goto label_21986c;
        }
    }
    ctx->pc = 0x219860u;
    // 0x219860: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219860u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219864u;
    {
        const bool branch_taken_0x219864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219864) {
            ctx->pc = 0x219888u;
            goto label_219888;
        }
    }
    ctx->pc = 0x21986Cu;
label_21986c:
    // 0x21986c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219870: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219878: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21987c: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219880: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x219880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x219884: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x219884u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_219888:
    // 0x219888: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21988c: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x21988cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219890: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x219890u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219894: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x219894u;
    {
        const bool branch_taken_0x219894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219894) {
            ctx->pc = 0x2199CCu;
            goto label_2199cc;
        }
    }
    ctx->pc = 0x21989Cu;
label_21989c:
    // 0x21989c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x21989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2198a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2198a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2198a4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2198a8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2198a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2198ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2198b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2198b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2198b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2198b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2198b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2198b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2198bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2198bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2198c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2198c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2198c4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2198c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2198c8: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x2198cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2198ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2198d0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2198d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2198d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2198D4u;
    SET_GPR_U32(ctx, 31, 0x2198DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2198D4u, 0x2198DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198DCu;
label_2198dc:
    // 0x2198dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2198e0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2198e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2198e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2198e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2198ec: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2198ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2198f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2198f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2198f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2198f8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2198f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2198fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219900: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219904: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219908: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21990c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21990cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219910: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219914: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219918: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21991c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21991cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219920: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219924: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219928: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21992c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219930: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219934: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219938: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21993c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21993cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219940: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219944: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219948: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21994c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21994cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219950: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219954: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219958: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21995c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21995cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219960: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219960u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219964: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219964u;
    SET_GPR_U32(ctx, 31, 0x21996Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219964u, 0x21996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21996Cu;
label_21996c:
    // 0x21996c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219970: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219974: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219978: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21997c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21997cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219980: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219984: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219984u;
    {
        const bool branch_taken_0x219984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219984) {
            ctx->pc = 0x219998u;
            goto label_219998;
        }
    }
    ctx->pc = 0x21998Cu;
    // 0x21998c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21998cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219990u;
    {
        const bool branch_taken_0x219990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219990) {
            ctx->pc = 0x2199B4u;
            goto label_2199b4;
        }
    }
    ctx->pc = 0x219998u;
label_219998:
    // 0x219998: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21999c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2199a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2199a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2199a4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2199a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2199a8: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x2199a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2199ac: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x2199acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2199b0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2199b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2199b4:
    // 0x2199b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2199b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2199b8: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2199b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2199bc: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2199bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x2199c0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2199c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2199c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2199c8: 0x0  nop
    ctx->pc = 0x2199c8u;
    // NOP
label_2199cc:
    // 0x2199cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2199d0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2199d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2199d4: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2199D4u;
    {
        const bool branch_taken_0x2199d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2199d4) {
            ctx->pc = 0x219A70u;
            goto label_219a70;
        }
    }
    ctx->pc = 0x2199DCu;
    // 0x2199dc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2199dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2199e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2199e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2199e4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2199e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2199e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2199e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2199ec: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2199ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2199f0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2199f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2199f4: 0x3c03414c  lui         $v1, 0x414C
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16716 << 16));
    // 0x2199f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2199f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2199fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2199fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a00: 0x0  nop
    ctx->pc = 0x219a00u;
    // NOP
    // 0x219a04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x219a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x219a08: 0x3c033f8b  lui         $v1, 0x3F8B
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16267 << 16));
    // 0x219a0c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x219a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x219a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a14: 0x0  nop
    ctx->pc = 0x219a14u;
    // NOP
    // 0x219a18: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x219a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x219a1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x219a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219a20: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x219a20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219a24: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x219a24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x219a28: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x219a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219a2c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x219a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x219a30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x219a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a38: 0x0  nop
    ctx->pc = 0x219a38u;
    // NOP
    // 0x219a3c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x219a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x219a40: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x219a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x219a44: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x219a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x219a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a4c: 0x0  nop
    ctx->pc = 0x219a4cu;
    // NOP
    // 0x219a50: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x219a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x219a54: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x219a58: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x219a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x219a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a60: 0x0  nop
    ctx->pc = 0x219a60u;
    // NOP
    // 0x219a64: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x219a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x219a68: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x219a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x219a6c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x219a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_219a70:
    // 0x219a70: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x219a70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219a74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x219a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219a78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x219a78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x219a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x219a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x219a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x219a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a98: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x219a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x219a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x219A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219AA4u;
}
