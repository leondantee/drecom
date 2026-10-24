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

// Function: Set_effect_pl00_sake_strip
// Address: 0x314710 - 0x3148d4
void Set_effect_pl00_sake_strip_0x314710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_sake_strip_0x314710");
#endif

    switch (ctx->pc) {
        case 0x31472cu: goto label_31472c;
        case 0x31482cu: goto label_31482c;
        case 0x314838u: goto label_314838;
        default: break;
    }

    ctx->pc = 0x314710u;

    // 0x314710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314714: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x314714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x314718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31471c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x314720: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x314720u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314724: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x314724u;
    {
        const bool branch_taken_0x314724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314724) {
            ctx->pc = 0x3148B0u;
            goto label_3148b0;
        }
    }
    ctx->pc = 0x31472Cu;
label_31472c:
    // 0x31472c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x31472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x314730: 0x24421d10  addiu       $v0, $v0, 0x1D10
    ctx->pc = 0x314730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7440));
    // 0x314734: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314738: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31473c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314740: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x314744: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x314744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x314748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x314748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31474c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31474cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314750: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x314750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x314754: 0x24421d10  addiu       $v0, $v0, 0x1D10
    ctx->pc = 0x314754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7440));
    // 0x314758: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31475c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314760: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x314760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314764: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x314768: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x314768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31476c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x314770: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x314770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x314774: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x314774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x314778: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x314778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x31477c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314780: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x314784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314788: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31478c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x314790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x314790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x314794: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314798: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x314798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31479c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x31479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3147a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3147a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3147a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3147a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3147a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3147a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3147ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3147acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3147b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3147b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3147b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3147b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3147b8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x3147b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3147bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3147bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3147c0: 0x24421d20  addiu       $v0, $v0, 0x1D20
    ctx->pc = 0x3147c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
    // 0x3147c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3147c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3147c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3147c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3147cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3147ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3147d0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3147d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3147d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3147d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3147d8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3147d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3147dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3147dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3147e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3147e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3147e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3147e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3147e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3147e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3147ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3147ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3147f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3147f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3147f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3147f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3147f8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3147f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3147fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3147fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x314800: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x314800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x314804: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314808: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31480c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314810: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x314814: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x314814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x314818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x314818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31481c: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x31481cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314820: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x314820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x314824: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x314824u;
    SET_GPR_U32(ctx, 31, 0x31482Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x314824u, 0x31482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31482Cu;
label_31482c:
    // 0x31482c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31482cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x314830: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x314830u;
    SET_GPR_U32(ctx, 31, 0x314838u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x314830u, 0x314838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314838u;
label_314838:
    // 0x314838: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x314838u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31483c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31483cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x314840: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x314840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314844: 0x12030018  beq         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x314844u;
    {
        const bool branch_taken_0x314844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x314844) {
            ctx->pc = 0x3148A8u;
            goto label_3148a8;
        }
    }
    ctx->pc = 0x31484Cu;
    // 0x31484c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x31484cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314854: 0x0  nop
    ctx->pc = 0x314854u;
    // NOP
    // 0x314858: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x314858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x31485c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x31485cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314864: 0x0  nop
    ctx->pc = 0x314864u;
    // NOP
    // 0x314868: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x314868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x31486c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x31486cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314874: 0x0  nop
    ctx->pc = 0x314874u;
    // NOP
    // 0x314878: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x314878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x31487c: 0x3c03429c  lui         $v1, 0x429C
    ctx->pc = 0x31487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17052 << 16));
    // 0x314880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314884: 0x0  nop
    ctx->pc = 0x314884u;
    // NOP
    // 0x314888: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x314888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x31488c: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x31488cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x314890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314894: 0x0  nop
    ctx->pc = 0x314894u;
    // NOP
    // 0x314898: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x314898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x31489c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x31489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3148a0: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x3148a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x3148a4: 0x0  nop
    ctx->pc = 0x3148a4u;
    // NOP
label_3148a8:
    // 0x3148a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3148a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3148ac: 0x0  nop
    ctx->pc = 0x3148acu;
    // NOP
label_3148b0:
    // 0x3148b0: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x3148b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3148b4: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3148B4u;
    {
        const bool branch_taken_0x3148b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3148b4) {
            ctx->pc = 0x31472Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31472c;
        }
    }
    ctx->pc = 0x3148BCu;
    // 0x3148bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3148bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3148c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3148c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3148c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3148c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3148c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3148cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3148CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3148CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3148D4u;
}
