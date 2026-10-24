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

// Function: Weapon_menu_trans
// Address: 0x2867c0 - 0x28b9c0
void Weapon_menu_trans_0x2867c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_menu_trans_0x2867c0");
#endif

    switch (ctx->pc) {
        case 0x2868a4u: goto label_2868a4;
        case 0x2868f8u: goto label_2868f8;
        case 0x286904u: goto label_286904;
        case 0x286920u: goto label_286920;
        case 0x28692cu: goto label_28692c;
        case 0x286968u: goto label_286968;
        case 0x2869a0u: goto label_2869a0;
        case 0x286ac0u: goto label_286ac0;
        case 0x286afcu: goto label_286afc;
        case 0x286b2cu: goto label_286b2c;
        case 0x286b5cu: goto label_286b5c;
        case 0x286df8u: goto label_286df8;
        case 0x286e80u: goto label_286e80;
        case 0x286ed4u: goto label_286ed4;
        case 0x286ff8u: goto label_286ff8;
        case 0x287038u: goto label_287038;
        case 0x287064u: goto label_287064;
        case 0x287094u: goto label_287094;
        case 0x287310u: goto label_287310;
        case 0x287388u: goto label_287388;
        case 0x28741cu: goto label_28741c;
        case 0x287468u: goto label_287468;
        case 0x287578u: goto label_287578;
        case 0x2875b8u: goto label_2875b8;
        case 0x2875e8u: goto label_2875e8;
        case 0x287618u: goto label_287618;
        case 0x2878b4u: goto label_2878b4;
        case 0x287944u: goto label_287944;
        case 0x287974u: goto label_287974;
        case 0x287a28u: goto label_287a28;
        case 0x287a64u: goto label_287a64;
        case 0x287a94u: goto label_287a94;
        case 0x287ac4u: goto label_287ac4;
        case 0x287d30u: goto label_287d30;
        case 0x287dacu: goto label_287dac;
        case 0x287e38u: goto label_287e38;
        case 0x287e7cu: goto label_287e7c;
        case 0x287f58u: goto label_287f58;
        case 0x287f98u: goto label_287f98;
        case 0x287fc4u: goto label_287fc4;
        case 0x287ff0u: goto label_287ff0;
        case 0x28825cu: goto label_28825c;
        case 0x2882c4u: goto label_2882c4;
        case 0x288344u: goto label_288344;
        case 0x2883c0u: goto label_2883c0;
        case 0x288454u: goto label_288454;
        case 0x288494u: goto label_288494;
        case 0x2884c0u: goto label_2884c0;
        case 0x2884f0u: goto label_2884f0;
        case 0x28862cu: goto label_28862c;
        case 0x2886acu: goto label_2886ac;
        case 0x288708u: goto label_288708;
        case 0x288790u: goto label_288790;
        case 0x2887ccu: goto label_2887cc;
        case 0x2887fcu: goto label_2887fc;
        case 0x28882cu: goto label_28882c;
        case 0x288964u: goto label_288964;
        case 0x2889e8u: goto label_2889e8;
        case 0x288a6cu: goto label_288a6c;
        case 0x288b80u: goto label_288b80;
        case 0x288bc0u: goto label_288bc0;
        case 0x288bf0u: goto label_288bf0;
        case 0x288c20u: goto label_288c20;
        case 0x288ea8u: goto label_288ea8;
        case 0x288f30u: goto label_288f30;
        case 0x288f98u: goto label_288f98;
        case 0x2890d4u: goto label_2890d4;
        case 0x289114u: goto label_289114;
        case 0x289140u: goto label_289140;
        case 0x289170u: goto label_289170;
        case 0x2893d8u: goto label_2893d8;
        case 0x289448u: goto label_289448;
        case 0x2894ecu: goto label_2894ec;
        case 0x289540u: goto label_289540;
        case 0x289664u: goto label_289664;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896d4u: goto label_2896d4;
        case 0x289704u: goto label_289704;
        case 0x2898ecu: goto label_2898ec;
        case 0x289974u: goto label_289974;
        case 0x2899ccu: goto label_2899cc;
        case 0x289a00u: goto label_289a00;
        case 0x289aacu: goto label_289aac;
        case 0x289ab8u: goto label_289ab8;
        case 0x289adcu: goto label_289adc;
        case 0x289af0u: goto label_289af0;
        case 0x289b00u: goto label_289b00;
        case 0x289b30u: goto label_289b30;
        case 0x289b7cu: goto label_289b7c;
        case 0x289c68u: goto label_289c68;
        case 0x289ca8u: goto label_289ca8;
        case 0x289cd8u: goto label_289cd8;
        case 0x289d04u: goto label_289d04;
        case 0x289f74u: goto label_289f74;
        case 0x289fecu: goto label_289fec;
        case 0x28a078u: goto label_28a078;
        case 0x28a0f8u: goto label_28a0f8;
        case 0x28a104u: goto label_28a104;
        case 0x28a120u: goto label_28a120;
        case 0x28a130u: goto label_28a130;
        case 0x28a168u: goto label_28a168;
        case 0x28a1a8u: goto label_28a1a8;
        case 0x28a1f4u: goto label_28a1f4;
        case 0x28a2e8u: goto label_28a2e8;
        case 0x28a328u: goto label_28a328;
        case 0x28a358u: goto label_28a358;
        case 0x28a388u: goto label_28a388;
        case 0x28a558u: goto label_28a558;
        case 0x28a5c8u: goto label_28a5c8;
        case 0x28a648u: goto label_28a648;
        case 0x28a6b8u: goto label_28a6b8;
        case 0x28a75cu: goto label_28a75c;
        case 0x28a7a4u: goto label_28a7a4;
        case 0x28a7d4u: goto label_28a7d4;
        case 0x28a804u: goto label_28a804;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a9bcu: goto label_28a9bc;
        case 0x28aa18u: goto label_28aa18;
        case 0x28aab8u: goto label_28aab8;
        case 0x28aaf8u: goto label_28aaf8;
        case 0x28ab24u: goto label_28ab24;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae78u: goto label_28ae78;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aedcu: goto label_28aedc;
        case 0x28af60u: goto label_28af60;
        case 0x28af6cu: goto label_28af6c;
        case 0x28b114u: goto label_28b114;
        case 0x28b124u: goto label_28b124;
        case 0x28b158u: goto label_28b158;
        case 0x28b168u: goto label_28b168;
        case 0x28b198u: goto label_28b198;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b204u: goto label_28b204;
        case 0x28b214u: goto label_28b214;
        case 0x28b240u: goto label_28b240;
        case 0x28b250u: goto label_28b250;
        case 0x28b278u: goto label_28b278;
        case 0x28b284u: goto label_28b284;
        case 0x28b314u: goto label_28b314;
        case 0x28b340u: goto label_28b340;
        case 0x28b364u: goto label_28b364;
        case 0x28b390u: goto label_28b390;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b438u: goto label_28b438;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b66cu: goto label_28b66c;
        case 0x28b678u: goto label_28b678;
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b718u: goto label_28b718;
        case 0x28b728u: goto label_28b728;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b76cu: goto label_28b76c;
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7acu: goto label_28b7ac;
        case 0x28b83cu: goto label_28b83c;
        case 0x28b860u: goto label_28b860;
        case 0x28b890u: goto label_28b890;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b908u: goto label_28b908;
        case 0x28b934u: goto label_28b934;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b980u: goto label_28b980;
        default: break;
    }

    ctx->pc = 0x2867c0u;

    // 0x2867c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2867c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2867c4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2867c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2867c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2867c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2867cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2867ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2867d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2867d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2867d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2867d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2867d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2867d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2867dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2867dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2867e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2867e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2867e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2867e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2867e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2867e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2867ec: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x2867ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x2867f0: 0x24c36150  addiu       $v1, $a2, 0x6150
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24912));
    // 0x2867f4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2867f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2867f8: 0x26470a68  addiu       $a3, $s2, 0xA68
    ctx->pc = 0x2867f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    // 0x2867fc: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x2867fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286800: 0x26431ee8  addiu       $v1, $s2, 0x1EE8
    ctx->pc = 0x286800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7912));
    // 0x286804: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x286804u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286808: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x286808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x28680c: 0x24e61bb0  addiu       $a2, $a3, 0x1BB0
    ctx->pc = 0x28680cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 7088));
    // 0x286810: 0xafa60144  sw          $a2, 0x144($sp)
    ctx->pc = 0x286810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 6));
    // 0x286814: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x286818: 0x24621e30  addiu       $v0, $v1, 0x1E30
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
    // 0x28681c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x28681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x286820: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x286824: 0x24c66190  addiu       $a2, $a2, 0x6190
    ctx->pc = 0x286824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24976));
    // 0x286828: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x286828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28682c: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x28682cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x396190u));
    // 0x286830: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x286830u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x286834: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x286834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x286838: 0x8c27013c  lw          $a3, 0x13C($at)
    ctx->pc = 0x286838u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28683c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x28683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x286840: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x286840u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x286844: 0x0  nop
    ctx->pc = 0x286844u;
    // NOP
    // 0x286848: 0x0  nop
    ctx->pc = 0x286848u;
    // NOP
    // 0x28684c: 0x1810  mfhi        $v1
    ctx->pc = 0x28684cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286850: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286850u;
    {
        const bool branch_taken_0x286850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286850) {
            ctx->pc = 0x286870u;
            goto label_286870;
        }
    }
    ctx->pc = 0x286858u;
    // 0x286858: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x286858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28685c: 0x8c262030  lw          $a2, 0x2030($at)
    ctx->pc = 0x28685cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622030u));
    // 0x286860: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x286860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286864: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x286864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x286868: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x286868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28686c: 0xac222030  sw          $v0, 0x2030($at)
    ctx->pc = 0x28686cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622030u, _value); } while (0);
label_286870:
    // 0x286870: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x286870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x286874: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286878: 0x3c071e00  lui         $a3, 0x1E00
    ctx->pc = 0x286878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7680 << 16));
    // 0x28687c: 0x34e8190a  ori         $t0, $a3, 0x190A
    ctx->pc = 0x28687cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6410);
    // 0x286880: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x286880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x286884: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x286884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286888: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x286888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28688c: 0x24461680  addiu       $a2, $v0, 0x1680
    ctx->pc = 0x28688cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x286890: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x286890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286894: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x286894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x286898: 0x8c262030  lw          $a2, 0x2030($at)
    ctx->pc = 0x286898u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622030u));
    // 0x28689c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28689Cu;
    SET_GPR_U32(ctx, 31, 0x2868A4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28689Cu, 0x2868A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868A4u;
label_2868a4:
    // 0x2868a4: 0x8e475dc8  lw          $a3, 0x5DC8($s2)
    ctx->pc = 0x2868a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x2868a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2868a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2868ac: 0x14e60005  bne         $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2868ACu;
    {
        const bool branch_taken_0x2868ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x2868ac) {
            ctx->pc = 0x2868C4u;
            goto label_2868c4;
        }
    }
    ctx->pc = 0x2868B4u;
    // 0x2868b4: 0x8e435dcc  lw          $v1, 0x5DCC($s2)
    ctx->pc = 0x2868b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x2868b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2868bc: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2868BCu;
    {
        const bool branch_taken_0x2868bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2868bc) {
            ctx->pc = 0x2868ECu;
            goto label_2868ec;
        }
    }
    ctx->pc = 0x2868C4u;
label_2868c4:
    // 0x2868c4: 0x92466624  lbu         $a2, 0x6624($s2)
    ctx->pc = 0x2868c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26148)));
    // 0x2868c8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2868c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2868cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2868ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2868d0: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2868D0u;
    {
        const bool branch_taken_0x2868d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2868d0) {
            ctx->pc = 0x2868ECu;
            goto label_2868ec;
        }
    }
    ctx->pc = 0x2868D8u;
    // 0x2868d8: 0x92435e04  lbu         $v1, 0x5E04($s2)
    ctx->pc = 0x2868d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24068)));
    // 0x2868dc: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x2868dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2868e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2868e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2868e4: 0x1507001d  bne         $t0, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2868E4u;
    {
        const bool branch_taken_0x2868e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x2868e4) {
            ctx->pc = 0x28695Cu;
            goto label_28695c;
        }
    }
    ctx->pc = 0x2868ECu;
label_2868ec:
    // 0x2868ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2868ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2868f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2868F0u;
    {
        const bool branch_taken_0x2868f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2868f0) {
            ctx->pc = 0x286948u;
            goto label_286948;
        }
    }
    ctx->pc = 0x2868F8u;
label_2868f8:
    // 0x2868f8: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x2868f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2868fc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2868FCu;
    SET_GPR_U32(ctx, 31, 0x286904u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2868FCu, 0x286904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286904u;
label_286904:
    // 0x286904: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x286904u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286908: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x286908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
    // 0x28690c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x286910: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x286910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286914: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x286914u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286918: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x286918u;
    SET_GPR_U32(ctx, 31, 0x286920u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x286918u, 0x286920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286920u;
label_286920:
    // 0x286920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x286920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286924: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x286924u;
    SET_GPR_U32(ctx, 31, 0x28692Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x286924u, 0x28692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28692Cu;
label_28692c:
    // 0x28692c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28692cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286930: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x286930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x286934: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x286934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x286938: 0xad0300d0  sw          $v1, 0xD0($t0)
    ctx->pc = 0x286938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 208), GPR_U32(ctx, 3));
    // 0x28693c: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x28693cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x286940: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x286940u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286944: 0x0  nop
    ctx->pc = 0x286944u;
    // NOP
label_286948:
    // 0x286948: 0x2ae60004  slti        $a2, $s7, 0x4
    ctx->pc = 0x286948u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28694c: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28694Cu;
    {
        const bool branch_taken_0x28694c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28694c) {
            ctx->pc = 0x2868F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2868f8;
        }
    }
    ctx->pc = 0x286954u;
    // 0x286954: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286954u;
    {
        const bool branch_taken_0x286954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286954) {
            ctx->pc = 0x2869C8u;
            goto label_2869c8;
        }
    }
    ctx->pc = 0x28695Cu;
label_28695c:
    // 0x28695c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28695cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x286960: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x286960u;
    {
        const bool branch_taken_0x286960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286960) {
            ctx->pc = 0x2869B8u;
            goto label_2869b8;
        }
    }
    ctx->pc = 0x286968u;
label_286968:
    // 0x286968: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x286968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28696c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28696cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286970: 0xc6415e00  lwc1        $f1, 0x5E00($s2)
    ctx->pc = 0x286970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286978: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x28697c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x28697cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286980: 0x0  nop
    ctx->pc = 0x286980u;
    // NOP
    // 0x286984: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x286984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x286988: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x286988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
    // 0x28698c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28698cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286990: 0x0  nop
    ctx->pc = 0x286990u;
    // NOP
    // 0x286994: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x286994u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286998: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286998u;
    SET_GPR_U32(ctx, 31, 0x2869A0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286998u, 0x2869A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869A0u;
label_2869a0:
    // 0x2869a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2869a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2869a4: 0x173080  sll         $a2, $s7, 2
    ctx->pc = 0x2869a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2869a8: 0xdd4821  addu        $t1, $a2, $sp
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2869ac: 0xad2300d0  sw          $v1, 0xD0($t1)
    ctx->pc = 0x2869acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 208), GPR_U32(ctx, 3));
    // 0x2869b0: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x2869b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2869b4: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x2869b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2869b8:
    // 0x2869b8: 0x2ae80004  slti        $t0, $s7, 0x4
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2869bc: 0x1500ffea  bnez        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2869BCu;
    {
        const bool branch_taken_0x2869bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2869bc) {
            ctx->pc = 0x286968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286968;
        }
    }
    ctx->pc = 0x2869C4u;
    // 0x2869c4: 0x0  nop
    ctx->pc = 0x2869c4u;
    // NOP
label_2869c8:
    // 0x2869c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2869c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2869cc: 0x24625f98  addiu       $v0, $v1, 0x5F98
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24472));
    // 0x2869d0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2869d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2869d4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2869d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2869d8: 0x24c261a0  addiu       $v0, $a2, 0x61A0
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24992));
    // 0x2869dc: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2869dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2869e0: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2869e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2869e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2869e8: 0x1033023  subu        $a2, $t0, $v1
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2869ec: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x2869ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x2869f0: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2869f4: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x2869f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2869f8: 0x1471823  subu        $v1, $t2, $a3
    ctx->pc = 0x2869f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2869fc: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x2869fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x286a00: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286a04: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x286a08: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x286a08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286a0c: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x286a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286a10: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x286a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x286a14: 0x70e0f628  paddub      $fp, $a3, $zero
    ctx->pc = 0x286a14u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286a18: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x286a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286a1c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x286a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a20: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x286a20u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x286a24: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x286a24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286a28: 0x70c04e28  paddub      $t1, $a2, $zero
    ctx->pc = 0x286a28u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286a2c: 0x2695821  addu        $t3, $s3, $t1
    ctx->pc = 0x286a2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x286a30: 0x7160ae28  paddub      $s5, $t3, $zero
    ctx->pc = 0x286a30u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x286a34: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286a38: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x286a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a3c: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x286a40: 0x71004e28  paddub      $t1, $t0, $zero
    ctx->pc = 0x286a40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286a44: 0x71205628  paddub      $t2, $t1, $zero
    ctx->pc = 0x286a44u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x286a48: 0x3ca6021  addu        $t4, $fp, $t2
    ctx->pc = 0x286a48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 10)));
    // 0x286a4c: 0xafac0130  sw          $t4, 0x130($sp)
    ctx->pc = 0x286a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 12));
    // 0x286a50: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x286a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a58: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x286a58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x286a5c: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x286a5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286a60: 0x70e05e28  paddub      $t3, $a3, $zero
    ctx->pc = 0x286a60u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286a64: 0x26b3023  subu        $a2, $s3, $t3
    ctx->pc = 0x286a64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x286a68: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x286a68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286a6c: 0x8fa8013c  lw          $t0, 0x13C($sp)
    ctx->pc = 0x286a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a74: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x286a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x286a78: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x286a78u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286a7c: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x286a7cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x286a80: 0x3c91823  subu        $v1, $fp, $t1
    ctx->pc = 0x286a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x286a84: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x286a84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286a88: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x286a8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x286a8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286a90: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x286a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286a94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x286a94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x286a98: 0x3c094420  lui         $t1, 0x4420
    ctx->pc = 0x286a98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17440 << 16));
    // 0x286a9c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x286a9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286aa0: 0x0  nop
    ctx->pc = 0x286aa0u;
    // NOP
    // 0x286aa4: 0x46006082  mul.s       $f2, $f12, $f0
    ctx->pc = 0x286aa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x286aa8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x286aa8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286aac: 0x0  nop
    ctx->pc = 0x286aacu;
    // NOP
    // 0x286ab0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x286ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286ab4: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x286ab4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286ab8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286AB8u;
    SET_GPR_U32(ctx, 31, 0x286AC0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286AB8u, 0x286AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AC0u;
label_286ac0:
    // 0x286ac0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x286ac0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286ac4: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x286ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x286ac8: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x286ac8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286acc: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x286accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286ad0: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x286ad0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x286ad4: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x286ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x286ad8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x286ad8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286adc: 0x0  nop
    ctx->pc = 0x286adcu;
    // NOP
    // 0x286ae0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x286ae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286ae4: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x286ae4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286ae8: 0x0  nop
    ctx->pc = 0x286ae8u;
    // NOP
    // 0x286aec: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x286aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286af0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x286af0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286af4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286AF4u;
    SET_GPR_U32(ctx, 31, 0x286AFCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286AF4u, 0x286AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AFCu;
label_286afc:
    // 0x286afc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x286afcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286b00: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x286b00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286b04: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x286b04u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286b08: 0x0  nop
    ctx->pc = 0x286b08u;
    // NOP
    // 0x286b0c: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x286b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286b10: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x286b14: 0x34e8cccd  ori         $t0, $a3, 0xCCCD
    ctx->pc = 0x286b14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x286b18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x286b18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b1c: 0x0  nop
    ctx->pc = 0x286b1cu;
    // NOP
    // 0x286b20: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x286b20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286b24: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286B24u;
    SET_GPR_U32(ctx, 31, 0x286B2Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286B24u, 0x286B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B2Cu;
label_286b2c:
    // 0x286b2c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x286b2cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286b30: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x286b30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x286b34: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x286b34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b38: 0x0  nop
    ctx->pc = 0x286b38u;
    // NOP
    // 0x286b3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286b40: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x286b44: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x286b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x286b48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x286b48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b4c: 0x0  nop
    ctx->pc = 0x286b4cu;
    // NOP
    // 0x286b50: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x286b50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286b54: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286B54u;
    SET_GPR_U32(ctx, 31, 0x286B5Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286B54u, 0x286B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B5Cu;
label_286b5c:
    // 0x286b5c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x286b5cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286b60: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x286b60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x286b64: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x286b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x286b68: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x286b6c: 0x34662b16  ori         $a2, $v1, 0x2B16
    ctx->pc = 0x286b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x286b70: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x286b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x286b74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x286b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x286b78: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286b7c: 0x35070040  ori         $a3, $t0, 0x40
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x286b80: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x286b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x286b84: 0x824b5dea  lb          $t3, 0x5DEA($s2)
    ctx->pc = 0x286b84u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x286b88: 0xb163c  dsll32      $v0, $t3, 24
    ctx->pc = 0x286b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 24));
    // 0x286b8c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x286b8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x286b90: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286B90u;
    {
        const bool branch_taken_0x286b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286b90) {
            ctx->pc = 0x286BD0u;
            goto label_286bd0;
        }
    }
    ctx->pc = 0x286B98u;
    // 0x286b98: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x286b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x286b9c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x286b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x286ba0: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x286ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x286ba4: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x286ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x286ba8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x286ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286bac: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x286bacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286bb0: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x286bb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x286bb4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x286bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x286bb8: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x286bbc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x286bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x286bc0: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x286bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x286bc4: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x286bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x286bc8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x286BC8u;
    {
        const bool branch_taken_0x286bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286bc8) {
            ctx->pc = 0x286C60u;
            goto label_286c60;
        }
    }
    ctx->pc = 0x286BD0u;
label_286bd0:
    // 0x286bd0: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x286bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286bd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286bd8: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x286bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x286bdc: 0x34a25556  ori         $v0, $a1, 0x5556
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x286be0: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x286be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286be4: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x286be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x286be8: 0x0  nop
    ctx->pc = 0x286be8u;
    // NOP
    // 0x286bec: 0x1810  mfhi        $v1
    ctx->pc = 0x286becu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286bf0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286bf4: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x286bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x286bf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286bfc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x286c00: 0x34665556  ori         $a2, $v1, 0x5556
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x286c04: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x286c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286c08: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x286c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x286c0c: 0x0  nop
    ctx->pc = 0x286c0cu;
    // NOP
    // 0x286c10: 0x2010  mfhi        $a0
    ctx->pc = 0x286c10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x286c14: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x286c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286c18: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x286c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x286c1c: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x286c20: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x286c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x286c24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c28: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x286c2c: 0x34865556  ori         $a2, $a0, 0x5556
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x286c30: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x286c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286c34: 0x74fc2  srl         $t1, $a3, 31
    ctx->pc = 0x286c34u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x286c38: 0x0  nop
    ctx->pc = 0x286c38u;
    // NOP
    // 0x286c3c: 0x4010  mfhi        $t0
    ctx->pc = 0x286c3cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x286c40: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x286c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x286c44: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x286c48: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x286c4c: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x286c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x286c50: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x286c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x286c54: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x286c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x286c58: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x286c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x286c5c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x286c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_286c60:
    // 0x286c60: 0x8e435dc0  lw          $v1, 0x5DC0($s2)
    ctx->pc = 0x286c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x286c64: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x286c64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286c68: 0x146a0025  bne         $v1, $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x286C68u;
    {
        const bool branch_taken_0x286c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x286c68) {
            ctx->pc = 0x286D00u;
            goto label_286d00;
        }
    }
    ctx->pc = 0x286C70u;
    // 0x286c70: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286c74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c78: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x286c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x286c7c: 0x34ab5556  ori         $t3, $a1, 0x5556
    ctx->pc = 0x286c7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x286c80: 0x1660018  mult        $zero, $t3, $a2
    ctx->pc = 0x286c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286c84: 0x64fc2  srl         $t1, $a2, 31
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x286c88: 0x0  nop
    ctx->pc = 0x286c88u;
    // NOP
    // 0x286c8c: 0x3010  mfhi        $a2
    ctx->pc = 0x286c8cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x286c90: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x286c94: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x286c98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x286c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c9c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x286c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x286ca0: 0x34685556  ori         $t0, $v1, 0x5556
    ctx->pc = 0x286ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x286ca4: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x286ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286ca8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x286ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x286cac: 0x0  nop
    ctx->pc = 0x286cacu;
    // NOP
    // 0x286cb0: 0x3010  mfhi        $a2
    ctx->pc = 0x286cb0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x286cb4: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x286cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x286cb8: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x286cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x286cbc: 0x834825  or          $t1, $a0, $v1
    ctx->pc = 0x286cbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x286cc0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x286cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x286cc4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286cc8: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x286cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x286ccc: 0x34e55556  ori         $a1, $a3, 0x5556
    ctx->pc = 0x286cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x286cd0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x286cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286cd4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x286cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x286cd8: 0x0  nop
    ctx->pc = 0x286cd8u;
    // NOP
    // 0x286cdc: 0x2010  mfhi        $a0
    ctx->pc = 0x286cdcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x286ce0: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x286ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286ce4: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x286ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x286ce8: 0x693825  or          $a3, $v1, $t1
    ctx->pc = 0x286ce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x286cec: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x286cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x286cf0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x286cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x286cf4: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x286cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x286cf8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x286cfc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x286cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_286d00:
    // 0x286d00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286d04: 0x35900  sll         $t3, $v1, 4
    ctx->pc = 0x286d04u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x286d08: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286d0c: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x286d10: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x286d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x286d14: 0x1633825  or          $a3, $t3, $v1
    ctx->pc = 0x286d14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x286d18: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x286d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x286d1c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x286d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x286d20: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x286d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286d24: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x286d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x286d28: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x286d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286d2c: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x286d30: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x286d34: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x286d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x286d38: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x286d3c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x286d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x286d40: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x286d40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x286d44: 0x25077000  addiu       $a3, $t0, 0x7000
    ctx->pc = 0x286d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x286d48: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x286d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x286d4c: 0x1e40c0  sll         $t0, $fp, 3
    ctx->pc = 0x286d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x286d50: 0x25037900  addiu       $v1, $t0, 0x7900
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
    // 0x286d54: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x286d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x286d58: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x286d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x286d5c: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x286d60: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x286d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x286d64: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x286d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x286d68: 0x2613001c  addiu       $s3, $s0, 0x1C
    ctx->pc = 0x286d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x286d6c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x286d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x286d70: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x286d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x286d74: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x286d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x286d78: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x286d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286d7c: 0x245e7000  addiu       $fp, $v0, 0x7000
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x286d80: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x286d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x286d84: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x286d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x286d88: 0x8fb50130  lw          $s5, 0x130($sp)
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x286d8c: 0x1530c0  sll         $a2, $s5, 3
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x286d90: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x286d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x286d94: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x286d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x286d98: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x286d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x286d9c: 0x46b025  or          $s6, $v0, $a2
    ctx->pc = 0x286d9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x286da0: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x286da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x286da4: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x286da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x286da8: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x286da8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x286dac: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x286db0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x286db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x286db4: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x286db4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286db8: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x286db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x286dbc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x286dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x286dc0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x286dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x286dc4: 0x244600a6  addiu       $a2, $v0, 0xA6
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 166));
    // 0x286dc8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x286dcc: 0x66b021  addu        $s6, $v1, $a2
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x286dd0: 0x1638c0  sll         $a3, $s6, 3
    ctx->pc = 0x286dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x286dd4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x286dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x286dd8: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x286dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x286ddc: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x286de0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x286de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x286de4: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x286de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x286de8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x286de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286dec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x286decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x286df0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x286DF0u;
    SET_GPR_U32(ctx, 31, 0x286DF8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x286DF0u, 0x286DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DF8u;
label_286df8:
    // 0x286df8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x286df8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286dfc: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x286dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x286e00: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x286e00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286e04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x286e08: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x286e08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x286e0c: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x286e10: 0x34c71009  ori         $a3, $a2, 0x1009
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x286e14: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x286e14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x286e18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286e1c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x286e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x286e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x286e24: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x286e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x286e28: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x286e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x286e2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x286e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286e30: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x286e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286e34: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x286e34u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x286e38: 0x83bb8  dsll        $a3, $t0, 14
    ctx->pc = 0x286e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 14);
    // 0x286e3c: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x286e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x286e40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x286e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286e44: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x286e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e48: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x286e48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x286e4c: 0x61e38  dsll        $v1, $a2, 24
    ctx->pc = 0x286e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 24);
    // 0x286e50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x286e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286e54: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x286e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286e58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286e5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286e60: 0x340bc  dsll32      $t0, $v1, 2
    ctx->pc = 0x286e60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 2));
    // 0x286e64: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x286e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x286e68: 0xfe870008  sd          $a3, 0x8($s4)
    ctx->pc = 0x286e68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 7));
    // 0x286e6c: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x286e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x286e70: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x286e70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286e74: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x286e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x286e78: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x286E78u;
    SET_GPR_U32(ctx, 31, 0x286E80u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x286E78u, 0x286E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E80u;
label_286e80:
    // 0x286e80: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x286e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x286e84: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x286e84u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286e88: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x286e8c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286e90: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x286e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x286e94: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x286e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x286e98: 0x34c71043  ori         $a3, $a2, 0x1043
    ctx->pc = 0x286e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x286e9c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x286e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286ea0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x286ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x286ea4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x286ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x286ea8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x286ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x286eac: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x286eb0: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x286eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x286eb4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x286eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286eb8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x286eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x286ebc: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x286ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x286ec0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x286ec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286ec4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x286ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286ec8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x286ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286ecc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x286ECCu;
    SET_GPR_U32(ctx, 31, 0x286ED4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x286ECCu, 0x286ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286ED4u;
label_286ed4:
    // 0x286ed4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x286ed4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286ed8: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x286ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286edc: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x286edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286ee0: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x286ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x286ee4: 0x82425de9  lb          $v0, 0x5DE9($s2)
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24041)));
    // 0x286ee8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x286eec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x286eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x286ef0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x286ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286ef4: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x286ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286ef8: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x286ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x286efc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x286efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x286f00: 0x24c35fe0  addiu       $v1, $a2, 0x5FE0
    ctx->pc = 0x286f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24544));
    // 0x286f04: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x286f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x286f08: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x286f08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286f0c: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x286f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x286f10: 0x250361a8  addiu       $v1, $t0, 0x61A8
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 25000));
    // 0x286f14: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x286f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x286f18: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286f1c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x286f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286f20: 0xc93823  subu        $a3, $a2, $t1
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x286f24: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x286f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x286f28: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286f2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x286f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286f30: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x286f34: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x286f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x286f38: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x286f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286f3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x286f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286f40: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x286f40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286f44: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x286f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286f48: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x286f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x286f4c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x286f4cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f50: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x286f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286f54: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286f58: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x286f5c: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x286f5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f60: 0x70e04e28  paddub      $t1, $a3, $zero
    ctx->pc = 0x286f60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286f64: 0x2693021  addu        $a2, $s3, $t1
    ctx->pc = 0x286f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x286f68: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x286f68u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286f6c: 0x8fa9013c  lw          $t1, 0x13C($sp)
    ctx->pc = 0x286f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286f70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x286f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286f74: 0x94043  sra         $t0, $t1, 1
    ctx->pc = 0x286f74u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 1));
    // 0x286f78: 0x71001e28  paddub      $v1, $t0, $zero
    ctx->pc = 0x286f78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286f7c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x286f7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f80: 0x3c64021  addu        $t0, $fp, $a2
    ctx->pc = 0x286f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x286f84: 0xafa80130  sw          $t0, 0x130($sp)
    ctx->pc = 0x286f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 8));
    // 0x286f88: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286f8c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286f90: 0x94043  sra         $t0, $t1, 1
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 1));
    // 0x286f94: 0x71001e28  paddub      $v1, $t0, $zero
    ctx->pc = 0x286f94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286f98: 0x70604e28  paddub      $t1, $v1, $zero
    ctx->pc = 0x286f98u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f9c: 0x2694023  subu        $t0, $s3, $t1
    ctx->pc = 0x286f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x286fa0: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x286fa0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286fa4: 0x8faa013c  lw          $t2, 0x13C($sp)
    ctx->pc = 0x286fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286fa8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286fac: 0xa1843  sra         $v1, $t2, 1
    ctx->pc = 0x286facu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
    // 0x286fb0: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x286fb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286fb4: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x286fb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286fb8: 0x3c71823  subu        $v1, $fp, $a3
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x286fbc: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x286fbcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286fc0: 0x3c0b4120  lui         $t3, 0x4120
    ctx->pc = 0x286fc0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16672 << 16));
    // 0x286fc4: 0x448b6000  mtc1        $t3, $f12
    ctx->pc = 0x286fc4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286fc8: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x286fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fcc: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x286fccu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x286fd0: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x286fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x286fd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x286fd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286fd8: 0x0  nop
    ctx->pc = 0x286fd8u;
    // NOP
    // 0x286fdc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x286fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286fe0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x286fe0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286fe4: 0x0  nop
    ctx->pc = 0x286fe4u;
    // NOP
    // 0x286fe8: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x286fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286fec: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x286fecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286ff0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286FF0u;
    SET_GPR_U32(ctx, 31, 0x286FF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286FF0u, 0x286FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FF8u;
label_286ff8:
    // 0x286ff8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x286ff8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286ffc: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x286ffcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287000: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x287000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x287004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x287004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287008: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28700c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x28700cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287010: 0x3c0a4420  lui         $t2, 0x4420
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17440 << 16));
    // 0x287014: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x287014u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287018: 0x0  nop
    ctx->pc = 0x287018u;
    // NOP
    // 0x28701c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28701cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287020: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x287020u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287024: 0x0  nop
    ctx->pc = 0x287024u;
    // NOP
    // 0x287028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x287028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28702c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x28702cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x287030: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287030u;
    SET_GPR_U32(ctx, 31, 0x287038u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287030u, 0x287038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287038u;
label_287038:
    // 0x287038: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x287038u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28703c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x28703cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287040: 0x0  nop
    ctx->pc = 0x287040u;
    // NOP
    // 0x287044: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x287044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x287048: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x287048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28704c: 0x3469cccd  ori         $t1, $v1, 0xCCCD
    ctx->pc = 0x28704cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x287050: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x287050u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287054: 0x0  nop
    ctx->pc = 0x287054u;
    // NOP
    // 0x287058: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x287058u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28705c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28705Cu;
    SET_GPR_U32(ctx, 31, 0x287064u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28705Cu, 0x287064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287064u;
label_287064:
    // 0x287064: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x287064u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287068: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x287068u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28706c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28706cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287070: 0x0  nop
    ctx->pc = 0x287070u;
    // NOP
    // 0x287074: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x287074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287078: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x287078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28707c: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x28707cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x287080: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x287080u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287084: 0x0  nop
    ctx->pc = 0x287084u;
    // NOP
    // 0x287088: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287088u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28708c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28708Cu;
    SET_GPR_U32(ctx, 31, 0x287094u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28708Cu, 0x287094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287094u;
label_287094:
    // 0x287094: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x287094u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287098: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x287098u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28709c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x28709cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2870a0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2870a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2870a4: 0x3c086400  lui         $t0, 0x6400
    ctx->pc = 0x2870a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25600 << 16));
    // 0x2870a8: 0x35062b16  ori         $a2, $t0, 0x2B16
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)11030);
    // 0x2870ac: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x2870acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x2870b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2870b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2870b4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2870b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2870b8: 0x34e90040  ori         $t1, $a3, 0x40
    ctx->pc = 0x2870b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x2870bc: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x2870bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x2870c0: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x2870c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x2870c4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2870c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2870c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2870c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2870cc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2870CCu;
    {
        const bool branch_taken_0x2870cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2870cc) {
            ctx->pc = 0x28710Cu;
            goto label_28710c;
        }
    }
    ctx->pc = 0x2870D4u;
    // 0x2870d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2870d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2870d8: 0x25400  sll         $t2, $v0, 16
    ctx->pc = 0x2870d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2870dc: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2870dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2870e0: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2870e4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x2870e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2870e8: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x2870e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2870ec: 0x1475825  or          $t3, $t2, $a3
    ctx->pc = 0x2870ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x2870f0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2870f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2870f4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2870f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2870f8: 0x6b3025  or          $a2, $v1, $t3
    ctx->pc = 0x2870f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2870fc: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2870fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287100: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x287100u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x287104: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x287104u;
    {
        const bool branch_taken_0x287104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287104) {
            ctx->pc = 0x28719Cu;
            goto label_28719c;
        }
    }
    ctx->pc = 0x28710Cu;
label_28710c:
    // 0x28710c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287114: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x287118: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x287118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x28711c: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x28711cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287120: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287124: 0x0  nop
    ctx->pc = 0x287124u;
    // NOP
    // 0x287128: 0x3010  mfhi        $a2
    ctx->pc = 0x287128u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x28712c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287130: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287134: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287138: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x287138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x28713c: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x28713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x287140: 0x6a0018  mult        $zero, $v1, $t2
    ctx->pc = 0x287140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287144: 0xa2fc2  srl         $a1, $t2, 31
    ctx->pc = 0x287144u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x287148: 0x0  nop
    ctx->pc = 0x287148u;
    // NOP
    // 0x28714c: 0x2010  mfhi        $a0
    ctx->pc = 0x28714cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x287150: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x287150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x287154: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x287154u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x287158: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x287158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x28715c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x28715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287160: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x287160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287164: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x287164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x287168: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x28716c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x28716cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287170: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x287170u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x287174: 0x0  nop
    ctx->pc = 0x287174u;
    // NOP
    // 0x287178: 0x3010  mfhi        $a2
    ctx->pc = 0x287178u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x28717c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x287180: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x287180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x287184: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x287184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x287188: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x287188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28718c: 0x53600  sll         $a2, $a1, 24
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x287190: 0xc72025  or          $a0, $a2, $a3
    ctx->pc = 0x287190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x287194: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287198: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x287198u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_28719c:
    // 0x28719c: 0x8e485dc0  lw          $t0, 0x5DC0($s2)
    ctx->pc = 0x28719cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x2871a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2871a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2871a4: 0x15040025  bne         $t0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2871A4u;
    {
        const bool branch_taken_0x2871a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x2871a4) {
            ctx->pc = 0x28723Cu;
            goto label_28723c;
        }
    }
    ctx->pc = 0x2871ACu;
    // 0x2871ac: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2871acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2871b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2871b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2871b4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x2871b8: 0x34465556  ori         $a2, $v0, 0x5556
    ctx->pc = 0x2871b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x2871bc: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x2871bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2871c0: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x2871c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2871c4: 0x0  nop
    ctx->pc = 0x2871c4u;
    // NOP
    // 0x2871c8: 0x3810  mfhi        $a3
    ctx->pc = 0x2871c8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2871cc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2871ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2871d0: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x2871d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2871d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2871d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2871d8: 0x3c0b5555  lui         $t3, 0x5555
    ctx->pc = 0x2871d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21845 << 16));
    // 0x2871dc: 0x35625556  ori         $v0, $t3, 0x5556
    ctx->pc = 0x2871dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)21846);
    // 0x2871e0: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x2871e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2871e4: 0xa2fc2  srl         $a1, $t2, 31
    ctx->pc = 0x2871e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x2871e8: 0x0  nop
    ctx->pc = 0x2871e8u;
    // NOP
    // 0x2871ec: 0x4810  mfhi        $t1
    ctx->pc = 0x2871ecu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2871f0: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x2871f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2871f4: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x2871f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2871f8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2871f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2871fc: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2871fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287200: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x287200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287204: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x287204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x287208: 0x34a35556  ori         $v1, $a1, 0x5556
    ctx->pc = 0x287208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x28720c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x28720cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287210: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x287214: 0x0  nop
    ctx->pc = 0x287214u;
    // NOP
    // 0x287218: 0x4010  mfhi        $t0
    ctx->pc = 0x287218u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x28721c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x28721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x287220: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x287220u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x287224: 0x1222025  or          $a0, $t1, $v0
    ctx->pc = 0x287224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x287228: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28722c: 0x62e00  sll         $a1, $a2, 24
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x287230: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x287234: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x287234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287238: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x287238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_28723c:
    // 0x28723c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x28723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287240: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x287240u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x287244: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x287244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287248: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x287248u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28724c: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x28724cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x287250: 0x1031025  or          $v0, $t0, $v1
    ctx->pc = 0x287250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x287254: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x287254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x287258: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x287258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28725c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287260: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x287260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x287264: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x287264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287268: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x287268u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x28726c: 0xa3400  sll         $a2, $t2, 16
    ctx->pc = 0x28726cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x287270: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x287270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x287274: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x287274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x287278: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x287278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x28727c: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x287280: 0x25067000  addiu       $a2, $t0, 0x7000
    ctx->pc = 0x287280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x287284: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x287284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x287288: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x287288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28728c: 0x24c87900  addiu       $t0, $a2, 0x7900
    ctx->pc = 0x28728cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x287290: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x287290u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x287294: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x287294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x287298: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x287298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28729c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28729cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2872a0: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x2872a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2872a4: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2872a8: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x2872a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x2872ac: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x2872acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2872b0: 0x24c87000  addiu       $t0, $a2, 0x7000
    ctx->pc = 0x2872b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x2872b4: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x2872b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2872b8: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x2872b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2872bc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2872bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2872c0: 0x24e67900  addiu       $a2, $a3, 0x7900
    ctx->pc = 0x2872c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x2872c4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2872c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2872c8: 0x669825  or          $s3, $v1, $a2
    ctx->pc = 0x2872c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2872cc: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x2872ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2872d0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2872d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2872d4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2872d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2872d8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2872d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2872dc: 0x341efff9  ori         $fp, $zero, 0xFFF9
    ctx->pc = 0x2872dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2872e0: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2872e4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2872e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2872e8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2872e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2872ec: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x2872ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x2872f0: 0x8fb50144  lw          $s5, 0x144($sp)
    ctx->pc = 0x2872f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2872f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2872f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2872f8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2872f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2872fc: 0x24c3e6b8  addiu       $v1, $a2, -0x1948
    ctx->pc = 0x2872fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960824));
    // 0x287300: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x287300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287304: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x287304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x287308: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x287308u;
    SET_GPR_U32(ctx, 31, 0x287310u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x287310u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x287310u) { return; }
    ctx->pc = 0x287310u;
label_287310:
    // 0x287310: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x287310u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287314: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x287314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x287318: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x287318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x28731c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x28731cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x287320: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x287320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x287324: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x287324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x287328: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x287328u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x28732c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x287330: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x287330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287334: 0x23378  dsll        $a2, $v0, 13
    ctx->pc = 0x287334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 13);
    // 0x287338: 0x61cbe  dsrl32      $v1, $a2, 18
    ctx->pc = 0x287338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) >> (32 + 18));
    // 0x28733c: 0x67b02d  daddu       $s6, $v1, $a3
    ctx->pc = 0x28733cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x287340: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x287340u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x287344: 0x32c63fff  andi        $a2, $s6, 0x3FFF
    ctx->pc = 0x287344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16383);
    // 0x287348: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x287348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x28734c: 0x3c15fff8  lui         $s5, 0xFFF8
    ctx->pc = 0x28734cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65528 << 16));
    // 0x287350: 0x36a6001f  ori         $a2, $s5, 0x1F
    ctx->pc = 0x287350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)31);
    // 0x287354: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x287354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x287358: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x287358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28735c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x28735cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x287360: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x287360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x287364: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x287364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x287368: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x287368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x28736c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x287370: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x287370u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x287374: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x287374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287378: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x287378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28737c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28737cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x287380: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287380u;
    SET_GPR_U32(ctx, 31, 0x287388u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287380u, 0x287388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287388u;
label_287388:
    // 0x287388: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287388u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28738c: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x28738cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x287390: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x287390u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287394: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x287394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x287398: 0x24670028  addiu       $a3, $v1, 0x28
    ctx->pc = 0x287398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x28739c: 0xafa70144  sw          $a3, 0x144($sp)
    ctx->pc = 0x28739cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    // 0x2873a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2873a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2873a4: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x2873a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x2873a8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2873ac: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x2873acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x2873b0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2873b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x2873b4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2873b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2873b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2873b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2873bc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2873bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2873c0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x2873c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x2873c4: 0x3448000a  ori         $t0, $v0, 0xA
    ctx->pc = 0x2873c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x2873c8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x2873c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2873cc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2873ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2873d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2873d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2873d4: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x2873d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x2873d8: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x2873d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2873dc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2873dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2873e0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2873e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2873e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2873e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2873e8: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x2873e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x2873ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2873ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2873f0: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2873f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2873f4: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x2873f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2873f8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2873f8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2873fc: 0x730bc  dsll32      $a2, $a3, 2
    ctx->pc = 0x2873fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 2));
    // 0x287400: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x287400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x287404: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x287404u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287408: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x287408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28740c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28740cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287410: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x287410u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x287414: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287414u;
    SET_GPR_U32(ctx, 31, 0x28741Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287414u, 0x28741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28741Cu;
label_28741c:
    // 0x28741c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28741cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287420: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x287420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x287424: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x287424u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287428: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x287428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28742c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287430: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x287430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x287434: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x287434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x287438: 0x34c31043  ori         $v1, $a2, 0x1043
    ctx->pc = 0x287438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x28743c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28743cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287440: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x287440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x287444: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x287444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x287448: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x287448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28744c: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x28744cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x287450: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x287450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287454: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x287454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287458: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x287458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28745c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x28745cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287460: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287460u;
    SET_GPR_U32(ctx, 31, 0x287468u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287460u, 0x287468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287468u;
label_287468:
    // 0x287468: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x287468u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28746c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28746cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287470: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x287470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x287474: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x287474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x287478: 0x9243660c  lbu         $v1, 0x660C($s2)
    ctx->pc = 0x287478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26124)));
    // 0x28747c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x287480: 0x14400133  bnez        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x287480u;
    {
        const bool branch_taken_0x287480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287480) {
            ctx->pc = 0x287950u;
            goto label_287950;
        }
    }
    ctx->pc = 0x287488u;
    // 0x287488: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x287488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28748c: 0x24625fc0  addiu       $v0, $v1, 0x5FC0
    ctx->pc = 0x28748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
    // 0x287490: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x287490u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287494: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x287494u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x287498: 0x250761b0  addiu       $a3, $t0, 0x61B0
    ctx->pc = 0x287498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 25008));
    // 0x28749c: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28749cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x2874a0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2874a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2874a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2874a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2874a8: 0xc33823  subu        $a3, $a2, $v1
    ctx->pc = 0x2874a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2874ac: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x2874acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x2874b0: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x2874b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2874b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2874b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2874b8: 0x1033023  subu        $a2, $t0, $v1
    ctx->pc = 0x2874b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2874bc: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x2874bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x2874c0: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2874c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2874c4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x2874c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2874c8: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x2874c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2874cc: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2874ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2874d0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2874d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2874d4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2874d4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2874d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2874d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2874dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2874dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2874e0: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x2874e0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2874e4: 0x71001628  paddub      $v0, $t0, $zero
    ctx->pc = 0x2874e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2874e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2874e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2874ec: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x2874ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2874f0: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x2874f0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2874f4: 0x8faa013c  lw          $t2, 0x13C($sp)
    ctx->pc = 0x2874f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2874f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2874f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2874fc: 0xa4843  sra         $t1, $t2, 1
    ctx->pc = 0x2874fcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 1));
    // 0x287500: 0x71201e28  paddub      $v1, $t1, $zero
    ctx->pc = 0x287500u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x287504: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x287504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287508: 0x3c64821  addu        $t1, $fp, $a2
    ctx->pc = 0x287508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28750c: 0xafa90130  sw          $t1, 0x130($sp)
    ctx->pc = 0x28750cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 9));
    // 0x287510: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x287510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x287514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x287514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287518: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x287518u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x28751c: 0x70c04628  paddub      $t0, $a2, $zero
    ctx->pc = 0x28751cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287520: 0x2684823  subu        $t1, $s3, $t0
    ctx->pc = 0x287520u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x287524: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x287524u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x287528: 0x8fab013c  lw          $t3, 0x13C($sp)
    ctx->pc = 0x287528u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28752c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287530: 0xb4843  sra         $t1, $t3, 1
    ctx->pc = 0x287530u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 1));
    // 0x287534: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x287534u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x287538: 0x3c85023  subu        $t2, $fp, $t0
    ctx->pc = 0x287538u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x28753c: 0x7140f628  paddub      $fp, $t2, $zero
    ctx->pc = 0x28753cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x287540: 0x3c0c4120  lui         $t4, 0x4120
    ctx->pc = 0x287540u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16672 << 16));
    // 0x287544: 0x448c6000  mtc1        $t4, $f12
    ctx->pc = 0x287544u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287548: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28754c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x28754cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287550: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x287550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x287554: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x287554u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287558: 0x0  nop
    ctx->pc = 0x287558u;
    // NOP
    // 0x28755c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x28755cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287560: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x287560u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287564: 0x0  nop
    ctx->pc = 0x287564u;
    // NOP
    // 0x287568: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28756c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x28756cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287570: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287570u;
    SET_GPR_U32(ctx, 31, 0x287578u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287570u, 0x287578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287578u;
label_287578:
    // 0x287578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28757c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28757cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287580: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x287580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x287584: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x287584u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287588: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28758c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x28758cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287590: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x287590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x287594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x287594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287598: 0x0  nop
    ctx->pc = 0x287598u;
    // NOP
    // 0x28759c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x28759cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2875a0: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x2875a0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2875a4: 0x0  nop
    ctx->pc = 0x2875a4u;
    // NOP
    // 0x2875a8: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x2875a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2875ac: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2875acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2875b0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2875B0u;
    SET_GPR_U32(ctx, 31, 0x2875B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2875B0u, 0x2875B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875B8u;
label_2875b8:
    // 0x2875b8: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x2875b8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2875bc: 0x7160ae28  paddub      $s5, $t3, $zero
    ctx->pc = 0x2875bcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2875c0: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x2875c0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2875c4: 0x0  nop
    ctx->pc = 0x2875c4u;
    // NOP
    // 0x2875c8: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x2875c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2875cc: 0x3c083f4c  lui         $t0, 0x3F4C
    ctx->pc = 0x2875ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16204 << 16));
    // 0x2875d0: 0x3506cccd  ori         $a2, $t0, 0xCCCD
    ctx->pc = 0x2875d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x2875d4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2875d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2875d8: 0x0  nop
    ctx->pc = 0x2875d8u;
    // NOP
    // 0x2875dc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2875dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2875e0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2875E0u;
    SET_GPR_U32(ctx, 31, 0x2875E8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2875E0u, 0x2875E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875E8u;
label_2875e8:
    // 0x2875e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2875e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2875ec: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2875ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2875f0: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x2875f0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2875f4: 0x0  nop
    ctx->pc = 0x2875f4u;
    // NOP
    // 0x2875f8: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x2875f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2875fc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2875fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x287600: 0x344acccd  ori         $t2, $v0, 0xCCCD
    ctx->pc = 0x287600u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x287604: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x287604u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287608: 0x0  nop
    ctx->pc = 0x287608u;
    // NOP
    // 0x28760c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28760cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287610: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287610u;
    SET_GPR_U32(ctx, 31, 0x287618u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287610u, 0x287618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287618u;
label_287618:
    // 0x287618: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x287618u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28761c: 0x7120ae28  paddub      $s5, $t1, $zero
    ctx->pc = 0x28761cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x287620: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x287620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x287624: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x287624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x287628: 0x3c096400  lui         $t1, 0x6400
    ctx->pc = 0x287628u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)25600 << 16));
    // 0x28762c: 0x35272b16  ori         $a3, $t1, 0x2B16
    ctx->pc = 0x28762cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11030);
    // 0x287630: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x287630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x287634: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x287634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x287638: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x287638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28763c: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x28763cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x287640: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x287640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x287644: 0x82475dea  lb          $a3, 0x5DEA($s2)
    ctx->pc = 0x287644u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x287648: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x287648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x28764c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x28764cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x287650: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x287650u;
    {
        const bool branch_taken_0x287650 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x287650) {
            ctx->pc = 0x287690u;
            goto label_287690;
        }
    }
    ctx->pc = 0x287658u;
    // 0x287658: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x287658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28765c: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x28765cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x287660: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x287660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287664: 0x93200  sll         $a2, $t1, 8
    ctx->pc = 0x287664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x287668: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x287668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28766c: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x28766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x287670: 0xe25025  or          $t2, $a3, $v0
    ctx->pc = 0x287670u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x287674: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x287674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287678: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x287678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28767c: 0x6a4025  or          $t0, $v1, $t2
    ctx->pc = 0x28767cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x287680: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x287680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287684: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x287684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x287688: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x287688u;
    {
        const bool branch_taken_0x287688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287688) {
            ctx->pc = 0x287720u;
            goto label_287720;
        }
    }
    ctx->pc = 0x287690u;
label_287690:
    // 0x287690: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x287690u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287698: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x287698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x28769c: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x28769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x2876a0: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x2876a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2876a4: 0xb4fc2  srl         $t1, $t3, 31
    ctx->pc = 0x2876a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2876a8: 0x0  nop
    ctx->pc = 0x2876a8u;
    // NOP
    // 0x2876ac: 0x1810  mfhi        $v1
    ctx->pc = 0x2876acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2876b0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2876b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2876b4: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x2876b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2876b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2876b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2876bc: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x2876bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x2876c0: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x2876c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x2876c4: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x2876c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2876c8: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x2876c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2876cc: 0x0  nop
    ctx->pc = 0x2876ccu;
    // NOP
    // 0x2876d0: 0x5010  mfhi        $t2
    ctx->pc = 0x2876d0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2876d4: 0x1464821  addu        $t1, $t2, $a2
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2876d8: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x2876d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x2876dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2876dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2876e0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2876e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2876e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2876e8: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2876e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2876ec: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x2876ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2876f0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2876f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2876f4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2876f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2876f8: 0x0  nop
    ctx->pc = 0x2876f8u;
    // NOP
    // 0x2876fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2876fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x287700: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x287700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x287704: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x287704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x287708: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x287708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28770c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x28770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287710: 0x43600  sll         $a2, $a0, 24
    ctx->pc = 0x287710u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x287714: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x287714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x287718: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x287718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28771c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28771cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_287720:
    // 0x287720: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x287720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x287724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287728: 0x14e50025  bne         $a3, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x287728u;
    {
        const bool branch_taken_0x287728 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x287728) {
            ctx->pc = 0x2877C0u;
            goto label_2877c0;
        }
    }
    ctx->pc = 0x287730u;
    // 0x287730: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287734: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x287734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287738: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x287738u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x28773c: 0x35095556  ori         $t1, $t0, 0x5556
    ctx->pc = 0x28773cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x287740: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x287740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287744: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x287744u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x287748: 0x0  nop
    ctx->pc = 0x287748u;
    // NOP
    // 0x28774c: 0x3810  mfhi        $a3
    ctx->pc = 0x28774cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x287750: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x287754: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x287754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28775c: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x28775cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x287760: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x287760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x287764: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x287764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287768: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x287768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x28776c: 0x0  nop
    ctx->pc = 0x28776cu;
    // NOP
    // 0x287770: 0x5010  mfhi        $t2
    ctx->pc = 0x287770u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x287774: 0x1433021  addu        $a2, $t2, $v1
    ctx->pc = 0x287774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x287778: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x287778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x28777c: 0xa25825  or          $t3, $a1, $v0
    ctx->pc = 0x28777cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x287780: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x287780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287784: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x287784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287788: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x287788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x28778c: 0x34865556  ori         $a2, $a0, 0x5556
    ctx->pc = 0x28778cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x287790: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x287790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287794: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x287794u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x287798: 0x0  nop
    ctx->pc = 0x287798u;
    // NOP
    // 0x28779c: 0x3010  mfhi        $a2
    ctx->pc = 0x28779cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2877a0: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x2877a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2877a4: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x2877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2877a8: 0x6b2825  or          $a1, $v1, $t3
    ctx->pc = 0x2877a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2877ac: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2877acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2877b0: 0x64600  sll         $t0, $a2, 24
    ctx->pc = 0x2877b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2877b4: 0x1051825  or          $v1, $t0, $a1
    ctx->pc = 0x2877b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x2877b8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2877b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2877bc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2877bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_2877c0:
    // 0x2877c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2877c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2877c4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2877c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2877c8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2877c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2877cc: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x2877ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2877d0: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x2877d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2877d4: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x2877d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2877d8: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x2877d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2877dc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2877dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x2877e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2877e4: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2877e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2877e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2877ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2877ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2877f0: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x2877f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2877f4: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x2877f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2877f8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2877f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2877fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2877fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x287800: 0x135900  sll         $t3, $s3, 4
    ctx->pc = 0x287800u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x287804: 0x256a7000  addiu       $t2, $t3, 0x7000
    ctx->pc = 0x287804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 28672));
    // 0x287808: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x287808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x28780c: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x28780cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x287810: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x287810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x287814: 0x74400  sll         $t0, $a3, 16
    ctx->pc = 0x287814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x287818: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x287818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x28781c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x28781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x287820: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x287820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x287824: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x287824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x287828: 0x2608001c  addiu       $t0, $s0, 0x1C
    ctx->pc = 0x287828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28782c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x28782cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x287830: 0x153900  sll         $a3, $s5, 4
    ctx->pc = 0x287830u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x287834: 0x24e67000  addiu       $a2, $a3, 0x7000
    ctx->pc = 0x287834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x287838: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x287838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28783c: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x28783cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x287840: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x287840u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x287844: 0x24e67900  addiu       $a2, $a3, 0x7900
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x287848: 0x64400  sll         $t0, $a2, 16
    ctx->pc = 0x287848u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28784c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x28784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x287850: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x287854: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x287854u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x287858: 0x3407fffa  ori         $a3, $zero, 0xFFFA
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x28785c: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x28785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x287860: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x287860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x287864: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x287864u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287868: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x287868u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28786c: 0x266200a6  addiu       $v0, $s3, 0xA6
    ctx->pc = 0x28786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 166));
    // 0x287870: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x287870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x287874: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x287874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287878: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x287878u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28787c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28787cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287880: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x287880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x287884: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x287884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x287888: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x287888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28788c: 0x2a8c0  sll         $s5, $v0, 3
    ctx->pc = 0x28788cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x287890: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x287894: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x287894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x287898: 0x753021  addu        $a2, $v1, $s5
    ctx->pc = 0x287898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x28789c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x28789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x2878a0: 0x2656001c  addiu       $s6, $s2, 0x1C
    ctx->pc = 0x2878a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2878a4: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x2878a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2878a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2878a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2878ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2878ACu;
    SET_GPR_U32(ctx, 31, 0x2878B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2878ACu, 0x2878B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878B4u;
label_2878b4:
    // 0x2878b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2878b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2878b8: 0x2608002c  addiu       $t0, $s0, 0x2C
    ctx->pc = 0x2878b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2878bc: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x2878bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2878c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2878c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2878c4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2878c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2878c8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2878cc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2878ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2878d0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2878d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2878d4: 0x34471009  ori         $a3, $v0, 0x1009
    ctx->pc = 0x2878d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x2878d8: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2878d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x2878dc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2878dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2878e0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2878e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2878e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2878e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2878e8: 0x3b138  dsll        $s6, $v1, 4
    ctx->pc = 0x2878e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << 4);
    // 0x2878ec: 0x36c7000a  ori         $a3, $s6, 0xA
    ctx->pc = 0x2878ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)10);
    // 0x2878f0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2878f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2878f4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2878f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2878f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2878f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2878fc: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x2878fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x287900: 0xe6a825  or          $s5, $a3, $a2
    ctx->pc = 0x287900u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x287904: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x287904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287908: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x287908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28790c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x28790cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x287910: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x287910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x287914: 0x952825  or          $a1, $a0, $s5
    ctx->pc = 0x287914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x287918: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x287918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28791c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x287920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x287920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287924: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x287924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x287928: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x287928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x28792c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x28792cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287930: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287934: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x287934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287938: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x287938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28793c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28793Cu;
    SET_GPR_U32(ctx, 31, 0x287944u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28793Cu, 0x287944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287944u;
label_287944:
    // 0x287944: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287948: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x287948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28794c: 0x70e0a628  paddub      $s4, $a3, $zero
    ctx->pc = 0x28794cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_287950:
    // 0x287950: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x287950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x287954: 0x24675f00  addiu       $a3, $v1, 0x5F00
    ctx->pc = 0x287954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24320));
    // 0x287958: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x287958u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28795c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28795cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x287960: 0x24c361b8  addiu       $v1, $a2, 0x61B8
    ctx->pc = 0x287960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 25016));
    // 0x287964: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x287964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x287968: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x287968u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28796c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x28796Cu;
    {
        const bool branch_taken_0x28796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28796c) {
            ctx->pc = 0x287DD8u;
            goto label_287dd8;
        }
    }
    ctx->pc = 0x287974u;
label_287974:
    // 0x287974: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x287974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287978: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x287978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28797c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28797cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287980: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287984: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x287984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x287988: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x287988u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28798c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x28798cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287990: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x287990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287994: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x287994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x287998: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x287998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x28799c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2879a0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2879a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2879a4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2879a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2879a8: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x2879a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x2879ac: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2879acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2879b0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2879b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2879b4: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2879b4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2879b8: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2879bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2879c0: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x2879c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2879c4: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x2879c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2879c8: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x2879c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2879cc: 0x3c23021  addu        $a2, $fp, $v0
    ctx->pc = 0x2879ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2879d0: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x2879d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x2879d4: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x2879d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2879d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2879d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2879dc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2879dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2879e0: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x2879e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2879e4: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x2879e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2879e8: 0x3c33023  subu        $a2, $fp, $v1
    ctx->pc = 0x2879e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2879ec: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x2879ecu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2879f0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2879f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2879f4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2879f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2879f8: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x2879f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2879fc: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x2879fcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287a00: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x287a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x287a04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x287a04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a08: 0x0  nop
    ctx->pc = 0x287a08u;
    // NOP
    // 0x287a0c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287a0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287a10: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x287a10u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287a14: 0x0  nop
    ctx->pc = 0x287a14u;
    // NOP
    // 0x287a18: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287a1c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287a1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287a20: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287A20u;
    SET_GPR_U32(ctx, 31, 0x287A28u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287A20u, 0x287A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A28u;
label_287a28:
    // 0x287a28: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x287a28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287a2c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x287a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x287a30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x287a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287a34: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287a38: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x287a38u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287a3c: 0x3c084420  lui         $t0, 0x4420
    ctx->pc = 0x287a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17440 << 16));
    // 0x287a40: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x287a40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a44: 0x0  nop
    ctx->pc = 0x287a44u;
    // NOP
    // 0x287a48: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287a4c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x287a4cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287a50: 0x0  nop
    ctx->pc = 0x287a50u;
    // NOP
    // 0x287a54: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287a58: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287a58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287a5c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287A5Cu;
    SET_GPR_U32(ctx, 31, 0x287A64u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287A5Cu, 0x287A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A64u;
label_287a64:
    // 0x287a64: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x287a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287a68: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x287a68u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287a6c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x287a6cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287a70: 0x0  nop
    ctx->pc = 0x287a70u;
    // NOP
    // 0x287a74: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287a78: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x287a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x287a7c: 0x34c8cccd  ori         $t0, $a2, 0xCCCD
    ctx->pc = 0x287a7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x287a80: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x287a80u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a84: 0x0  nop
    ctx->pc = 0x287a84u;
    // NOP
    // 0x287a88: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287a8c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287A8Cu;
    SET_GPR_U32(ctx, 31, 0x287A94u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287A8Cu, 0x287A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A94u;
label_287a94:
    // 0x287a94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287a94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287a98: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x287a98u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287a9c: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x287a9cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287aa0: 0x0  nop
    ctx->pc = 0x287aa0u;
    // NOP
    // 0x287aa4: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287aa8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x287aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x287aac: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x287aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x287ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287ab4: 0x0  nop
    ctx->pc = 0x287ab4u;
    // NOP
    // 0x287ab8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287ab8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287abc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287ABCu;
    SET_GPR_U32(ctx, 31, 0x287AC4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287ABCu, 0x287AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AC4u;
label_287ac4:
    // 0x287ac4: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x287ac4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287ac8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x287ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x287acc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x287accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x287ad0: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x287ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x287ad4: 0x34c72b16  ori         $a3, $a2, 0x2B16
    ctx->pc = 0x287ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x287ad8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x287ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x287adc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x287adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x287ae0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x287ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x287ae4: 0x34670040  ori         $a3, $v1, 0x40
    ctx->pc = 0x287ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x287ae8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x287ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x287aec: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x287aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287af0: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x287af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x287af4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x287af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287af8: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x287af8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x287afc: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x287afcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x287b00: 0x674025  or          $t0, $v1, $a3
    ctx->pc = 0x287b00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x287b04: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x287b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x287b08: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x287b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x287b0c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x287b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287b10: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x287b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x287b14: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x287b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287b18: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x287b18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x287b1c: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x287b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x287b20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x287b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x287b24: 0x260a0020  addiu       $t2, $s0, 0x20
    ctx->pc = 0x287b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x287b28: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x287b28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x287b2c: 0x82475dea  lb          $a3, 0x5DEA($s2)
    ctx->pc = 0x287b2cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x287b30: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x287b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x287b34: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x287b34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x287b38: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x287b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x287b3c: 0x16e9000f  bne         $s7, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x287B3Cu;
    {
        const bool branch_taken_0x287b3c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 9));
        if (branch_taken_0x287b3c) {
            ctx->pc = 0x287B7Cu;
            goto label_287b7c;
        }
    }
    ctx->pc = 0x287B44u;
    // 0x287b44: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287b48: 0x64c00  sll         $t1, $a2, 16
    ctx->pc = 0x287b48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x287b4c: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x287b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287b50: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x287b54: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x287b54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287b58: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x287b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x287b5c: 0x1264025  or          $t0, $t1, $a2
    ctx->pc = 0x287b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x287b60: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x287b60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287b64: 0x95e00  sll         $t3, $t1, 24
    ctx->pc = 0x287b64u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x287b68: 0x1681825  or          $v1, $t3, $t0
    ctx->pc = 0x287b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x287b6c: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x287b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287b70: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x287b70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x287b74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x287B74u;
    {
        const bool branch_taken_0x287b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b74) {
            ctx->pc = 0x287C10u;
            goto label_287c10;
        }
    }
    ctx->pc = 0x287B7Cu;
label_287b7c:
    // 0x287b7c: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287b80: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x287b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287b84: 0x3c0c5555  lui         $t4, 0x5555
    ctx->pc = 0x287b84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)21845 << 16));
    // 0x287b88: 0x358a5556  ori         $t2, $t4, 0x5556
    ctx->pc = 0x287b88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21846);
    // 0x287b8c: 0x1490018  mult        $zero, $t2, $t1
    ctx->pc = 0x287b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287b90: 0x937c2  srl         $a2, $t1, 31
    ctx->pc = 0x287b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x287b94: 0x0  nop
    ctx->pc = 0x287b94u;
    // NOP
    // 0x287b98: 0x1810  mfhi        $v1
    ctx->pc = 0x287b98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287b9c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x287b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x287ba0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x287ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287ba4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x287ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287ba8: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x287ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x287bac: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x287bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x287bb0: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x287bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287bb4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287bb8: 0x0  nop
    ctx->pc = 0x287bb8u;
    // NOP
    // 0x287bbc: 0x5010  mfhi        $t2
    ctx->pc = 0x287bbcu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x287bc0: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x287bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x287bc4: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x287bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x287bc8: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x287bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x287bcc: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x287bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287bd0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x287bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287bd4: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x287bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x287bd8: 0x35025556  ori         $v0, $t0, 0x5556
    ctx->pc = 0x287bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x287bdc: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x287bdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287be0: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x287be0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x287be4: 0x0  nop
    ctx->pc = 0x287be4u;
    // NOP
    // 0x287be8: 0x3010  mfhi        $a2
    ctx->pc = 0x287be8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x287bec: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x287becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x287bf0: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x287bf4: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x287bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x287bf8: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287bfc: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x287c00: 0x691025  or          $v0, $v1, $t1
    ctx->pc = 0x287c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x287c04: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287c08: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x287c08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x287c0c: 0x0  nop
    ctx->pc = 0x287c0cu;
    // NOP
label_287c10:
    // 0x287c10: 0x8e465dc0  lw          $a2, 0x5DC0($s2)
    ctx->pc = 0x287c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x287c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x287c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287c18: 0x14c30025  bne         $a2, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x287C18u;
    {
        const bool branch_taken_0x287c18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x287c18) {
            ctx->pc = 0x287CB0u;
            goto label_287cb0;
        }
    }
    ctx->pc = 0x287C20u;
    // 0x287c20: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x287c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287c24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287c28: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x287c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x287c2c: 0x344b5556  ori         $t3, $v0, 0x5556
    ctx->pc = 0x287c2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x287c30: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x287c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287c34: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x287c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x287c38: 0x0  nop
    ctx->pc = 0x287c38u;
    // NOP
    // 0x287c3c: 0x3010  mfhi        $a2
    ctx->pc = 0x287c3cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x287c40: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x287c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287c44: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x287c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287c48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287c4c: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x287c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x287c50: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x287c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x287c54: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x287c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287c58: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287c5c: 0x0  nop
    ctx->pc = 0x287c5cu;
    // NOP
    // 0x287c60: 0x3010  mfhi        $a2
    ctx->pc = 0x287c60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x287c64: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x287c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287c68: 0x65200  sll         $t2, $a2, 8
    ctx->pc = 0x287c68u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x287c6c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x287c6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x287c70: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x287c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287c74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287c78: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x287c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x287c7c: 0x34855556  ori         $a1, $a0, 0x5556
    ctx->pc = 0x287c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x287c80: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x287c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287c84: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287c88: 0x0  nop
    ctx->pc = 0x287c88u;
    // NOP
    // 0x287c8c: 0x3810  mfhi        $a3
    ctx->pc = 0x287c8cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x287c90: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x287c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287c94: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x287c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x287c98: 0x893025  or          $a2, $a0, $t1
    ctx->pc = 0x287c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x287c9c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x287c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287ca0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x287ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x287ca4: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x287ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x287ca8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x287ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287cac: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x287cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_287cb0:
    // 0x287cb0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x287cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x287cb4: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x287cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x287cb8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x287cb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x287cbc: 0x1e28c0  sll         $a1, $fp, 3
    ctx->pc = 0x287cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x287cc0: 0x24a67900  addiu       $a2, $a1, 0x7900
    ctx->pc = 0x287cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x287cc4: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x287cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x287cc8: 0xe44825  or          $t1, $a3, $a0
    ctx->pc = 0x287cc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x287ccc: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x287cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x287cd0: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x287cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x287cd4: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x287cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x287cd8: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x287cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x287cdc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x287cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x287ce0: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x287ce4: 0x24a67000  addiu       $a2, $a1, 0x7000
    ctx->pc = 0x287ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x287ce8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x287ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x287cec: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x287cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x287cf0: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x287cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x287cf4: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x287cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x287cf8: 0x35400  sll         $t2, $v1, 16
    ctx->pc = 0x287cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x287cfc: 0x4a3025  or          $a2, $v0, $t2
    ctx->pc = 0x287cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x287d00: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x287d04: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x287d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x287d08: 0x340bfff9  ori         $t3, $zero, 0xFFF9
    ctx->pc = 0x287d08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x287d0c: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x287d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x287d10: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x287d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x287d14: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x287d14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x287d18: 0x2526e640  addiu       $a2, $t1, -0x19C0
    ctx->pc = 0x287d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960704));
    // 0x287d1c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x287d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x287d20: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x287d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287d24: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x287d24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x287d28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287D28u;
    SET_GPR_U32(ctx, 31, 0x287D30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287D28u, 0x287D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D30u;
label_287d30:
    // 0x287d30: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x287d34: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x287d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x287d38: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x287d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x287d3c: 0x34681009  ori         $t0, $v1, 0x1009
    ctx->pc = 0x287d3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x287d40: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x287d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x287d44: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x287d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287d48: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x287d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x287d4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x287d4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x287d50: 0x64138  dsll        $t0, $a2, 4
    ctx->pc = 0x287d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 4);
    // 0x287d54: 0x3503000a  ori         $v1, $t0, 0xA
    ctx->pc = 0x287d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
    // 0x287d58: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x287d58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287d5c: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x287d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x287d60: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x287d60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x287d64: 0x433b8  dsll        $a2, $a0, 14
    ctx->pc = 0x287d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 14);
    // 0x287d68: 0x662825  or          $a1, $v1, $a2
    ctx->pc = 0x287d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x287d6c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x287d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287d70: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x287d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x287d74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287d78: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x287d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
    // 0x287d7c: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x287d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x287d80: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287d84: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x287d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287d88: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x287d88u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x287d8c: 0x718bc  dsll32      $v1, $a3, 2
    ctx->pc = 0x287d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 2));
    // 0x287d90: 0x681025  or          $v0, $v1, $t0
    ctx->pc = 0x287d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x287d94: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x287d94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287d98: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x287d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287d9c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x287d9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287da0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x287da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x287da4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287DA4u;
    SET_GPR_U32(ctx, 31, 0x287DACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287DA4u, 0x287DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DACu;
label_287dac:
    // 0x287dac: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x287dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x287db0: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x287db0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287db4: 0x260b002c  addiu       $t3, $s0, 0x2C
    ctx->pc = 0x287db4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x287db8: 0x71608628  paddub      $s0, $t3, $zero
    ctx->pc = 0x287db8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x287dbc: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x287dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x287dc0: 0x71408e28  paddub      $s1, $t2, $zero
    ctx->pc = 0x287dc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x287dc4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287dc8: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x287dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x287dcc: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x287dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x287dd0: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x287dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x287dd4: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x287dd4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_287dd8:
    // 0x287dd8: 0x9248683f  lbu         $t0, 0x683F($s2)
    ctx->pc = 0x287dd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x287ddc: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x287ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x287de0: 0x2e6182a  slt         $v1, $s7, $a2
    ctx->pc = 0x287de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287de4: 0x1460fee3  bnez        $v1, . + 4 + (-0x11D << 2)
    ctx->pc = 0x287DE4u;
    {
        const bool branch_taken_0x287de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287de4) {
            ctx->pc = 0x287974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287974;
        }
    }
    ctx->pc = 0x287DECu;
    // 0x287dec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x287df0: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x287df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287df4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x287df4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x287df8: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x287df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x287dfc: 0x34c71043  ori         $a3, $a2, 0x1043
    ctx->pc = 0x287dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x287e00: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x287e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e04: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x287e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x287e08: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x287e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x287e0c: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x287e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x287e10: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x287e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x287e14: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x287e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x287e18: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x287e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e1c: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x287e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x287e20: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x287e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287e24: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x287e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287e28: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x287e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e2c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x287e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287e30: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287E30u;
    SET_GPR_U32(ctx, 31, 0x287E38u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287E30u, 0x287E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E38u;
label_287e38:
    // 0x287e38: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x287e38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287e3c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x287e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x287e40: 0x24d30010  addiu       $s3, $a2, 0x10
    ctx->pc = 0x287e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x287e44: 0xafb30128  sw          $s3, 0x128($sp)
    ctx->pc = 0x287e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 19));
    // 0x287e48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x287e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x287e4c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x287e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x287e50: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x287e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287e54: 0x245e5f30  addiu       $fp, $v0, 0x5F30
    ctx->pc = 0x287e54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
    // 0x287e58: 0x73c08e28  paddub      $s1, $fp, $zero
    ctx->pc = 0x287e58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x287e5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x287e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x287e60: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x287e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x287e64: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x287e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x287e68: 0x245561e0  addiu       $s5, $v0, 0x61E0
    ctx->pc = 0x287e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25056));
    // 0x287e6c: 0xafb50138  sw          $s5, 0x138($sp)
    ctx->pc = 0x287e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 21));
    // 0x287e70: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x287e70u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x287e74: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x287E74u;
    {
        const bool branch_taken_0x287e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287e74) {
            ctx->pc = 0x288380u;
            goto label_288380;
        }
    }
    ctx->pc = 0x287E7Cu;
label_287e7c:
    // 0x287e7c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287e80: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x287e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x287e84: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x287e84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287e88: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287e8c: 0x8cd60004  lw          $s6, 0x4($a2)
    ctx->pc = 0x287e8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x287e90: 0x72c0f628  paddub      $fp, $s6, $zero
    ctx->pc = 0x287e90u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x287e94: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x287e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287e98: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x287e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287e9c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x287e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x287ea0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x287ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x287ea4: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x287ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287ea8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x287ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287eac: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x287eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x287eb0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x287eb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287eb4: 0xe23023  subu        $a2, $a3, $v0
    ctx->pc = 0x287eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x287eb8: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x287eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x287ebc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x287ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x287ec0: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x287ec0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ec4: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x287ec4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x287ec8: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x287ec8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287ecc: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x287eccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287ed0: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x287ed4: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x287ed4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287ed8: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x287ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x287edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x287edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ee0: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x287ee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x287ee4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x287ee4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287ee8: 0x3c73021  addu        $a2, $fp, $a3
    ctx->pc = 0x287ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x287eec: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x287eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x287ef0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x287ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x287ef4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ef8: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x287ef8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x287efc: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x287efcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287f00: 0x2624023  subu        $t0, $s3, $v0
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x287f04: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x287f04u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287f08: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x287f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x287f0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287f10: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x287f10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x287f14: 0x70c01e28  paddub      $v1, $a2, $zero
    ctx->pc = 0x287f14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287f18: 0x3c31023  subu        $v0, $fp, $v1
    ctx->pc = 0x287f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x287f1c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x287f1cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287f20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x287f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x287f24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x287f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287f28: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f2c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x287f2cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287f30: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x287f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x287f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x287f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287f38: 0x0  nop
    ctx->pc = 0x287f38u;
    // NOP
    // 0x287f3c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287f40: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x287f40u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287f44: 0x0  nop
    ctx->pc = 0x287f44u;
    // NOP
    // 0x287f48: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287f4c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287f4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287f50: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287F50u;
    SET_GPR_U32(ctx, 31, 0x287F58u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287F50u, 0x287F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F58u;
label_287f58:
    // 0x287f58: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x287f58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287f5c: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x287f5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287f60: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x287f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x287f64: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x287f64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287f68: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f6c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x287f6cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287f70: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x287f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x287f74: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x287f74u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287f78: 0x0  nop
    ctx->pc = 0x287f78u;
    // NOP
    // 0x287f7c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287f80: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x287f80u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287f84: 0x0  nop
    ctx->pc = 0x287f84u;
    // NOP
    // 0x287f88: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287f8c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287f8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287f90: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287F90u;
    SET_GPR_U32(ctx, 31, 0x287F98u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287F90u, 0x287F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F98u;
label_287f98:
    // 0x287f98: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x287f98u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287f9c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x287f9cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287fa0: 0x0  nop
    ctx->pc = 0x287fa0u;
    // NOP
    // 0x287fa4: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287fa8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x287fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x287fac: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x287facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x287fb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x287fb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287fb4: 0x0  nop
    ctx->pc = 0x287fb4u;
    // NOP
    // 0x287fb8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287fb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287fbc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287FBCu;
    SET_GPR_U32(ctx, 31, 0x287FC4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287FBCu, 0x287FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FC4u;
label_287fc4:
    // 0x287fc4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x287fc4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287fc8: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x287fc8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287fcc: 0x0  nop
    ctx->pc = 0x287fccu;
    // NOP
    // 0x287fd0: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287fd4: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x287fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x287fd8: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x287fd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x287fdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x287fdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287fe0: 0x0  nop
    ctx->pc = 0x287fe0u;
    // NOP
    // 0x287fe4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287fe4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287fe8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287FE8u;
    SET_GPR_U32(ctx, 31, 0x287FF0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287FE8u, 0x287FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FF0u;
label_287ff0:
    // 0x287ff0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287ff0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287ff4: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x287ff4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287ff8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x287ffc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x287ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x288000: 0x3c076400  lui         $a3, 0x6400
    ctx->pc = 0x288000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25600 << 16));
    // 0x288004: 0x34e62b16  ori         $a2, $a3, 0x2B16
    ctx->pc = 0x288004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)11030);
    // 0x288008: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x288008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x28800c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28800cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288010: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288014: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x288018: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x288018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28801c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x28801cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288020: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x288020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x288024: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x288024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288028: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x288028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x28802c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28802cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288030: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x288030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x288034: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x288034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288038: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28803c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288040: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x288040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x288044: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x288044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288048: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x288048u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28804c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288050: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x288050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x288054: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x288054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288058: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x288058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x28805c: 0x82435dea  lb          $v1, 0x5DEA($s2)
    ctx->pc = 0x28805cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x288060: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x288060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x288064: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x288064u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x288068: 0x24c9ffff  addiu       $t1, $a2, -0x1
    ctx->pc = 0x288068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28806c: 0x12e90027  beq         $s7, $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x28806Cu;
    {
        const bool branch_taken_0x28806c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 9));
        if (branch_taken_0x28806c) {
            ctx->pc = 0x28810Cu;
            goto label_28810c;
        }
    }
    ctx->pc = 0x288074u;
    // 0x288074: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x288074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288078: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x288078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28807c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x28807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x288080: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x288080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x288084: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x288084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288088: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x288088u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x28808c: 0x0  nop
    ctx->pc = 0x28808cu;
    // NOP
    // 0x288090: 0x1010  mfhi        $v0
    ctx->pc = 0x288090u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x288094: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x288094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x288098: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x288098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28809c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28809cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2880a0: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2880a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2880a4: 0x34ea5556  ori         $t2, $a3, 0x5556
    ctx->pc = 0x2880a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2880a8: 0x1430018  mult        $zero, $t2, $v1
    ctx->pc = 0x2880a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2880ac: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2880acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2880b0: 0x0  nop
    ctx->pc = 0x2880b0u;
    // NOP
    // 0x2880b4: 0x4810  mfhi        $t1
    ctx->pc = 0x2880b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2880b8: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x2880b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2880bc: 0x64a00  sll         $t1, $a2, 8
    ctx->pc = 0x2880bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2880c0: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x2880c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2880c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2880c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2880c8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2880c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2880cc: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x2880ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x2880d0: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x2880d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x2880d4: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x2880d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2880d8: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x2880d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2880dc: 0x0  nop
    ctx->pc = 0x2880dcu;
    // NOP
    // 0x2880e0: 0x5810  mfhi        $t3
    ctx->pc = 0x2880e0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x2880e4: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2880e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2880e8: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x2880e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2880ec: 0x1074825  or          $t1, $t0, $a3
    ctx->pc = 0x2880ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2880f0: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x2880f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2880f4: 0x85600  sll         $t2, $t0, 24
    ctx->pc = 0x2880f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2880f8: 0x1496025  or          $t4, $t2, $t1
    ctx->pc = 0x2880f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2880fc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2880fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288100: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x288100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x288104: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x288104u;
    {
        const bool branch_taken_0x288104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288104) {
            ctx->pc = 0x288140u;
            goto label_288140;
        }
    }
    ctx->pc = 0x28810Cu;
label_28810c:
    // 0x28810c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288110: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x288110u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x288114: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x288114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288118: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x288118u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28811c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x28811cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288120: 0xcb4025  or          $t0, $a2, $t3
    ctx->pc = 0x288120u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x288124: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x288124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x288128: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x288128u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28812c: 0xa1600  sll         $v0, $t2, 24
    ctx->pc = 0x28812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x288130: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x288130u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288134: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288138: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x288138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x28813c: 0x0  nop
    ctx->pc = 0x28813cu;
    // NOP
label_288140:
    // 0x288140: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x288140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x288144: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x288144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288148: 0x14e90025  bne         $a3, $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x288148u;
    {
        const bool branch_taken_0x288148 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x288148) {
            ctx->pc = 0x2881E0u;
            goto label_2881e0;
        }
    }
    ctx->pc = 0x288150u;
    // 0x288150: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x288150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288154: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x288154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288158: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x288158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x28815c: 0x34c75556  ori         $a3, $a2, 0x5556
    ctx->pc = 0x28815cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x288160: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x288160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288164: 0x247c2  srl         $t0, $v0, 31
    ctx->pc = 0x288164u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x288168: 0x0  nop
    ctx->pc = 0x288168u;
    // NOP
    // 0x28816c: 0x3810  mfhi        $a3
    ctx->pc = 0x28816cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x288170: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x288170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x288174: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x288174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288178: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x288178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28817c: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x28817cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x288180: 0x35425556  ori         $v0, $t2, 0x5556
    ctx->pc = 0x288180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x288184: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x288184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288188: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x288188u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x28818c: 0x0  nop
    ctx->pc = 0x28818cu;
    // NOP
    // 0x288190: 0x1810  mfhi        $v1
    ctx->pc = 0x288190u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288194: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x288194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x288198: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x288198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28819c: 0x1275825  or          $t3, $t1, $a3
    ctx->pc = 0x28819cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2881a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2881a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2881a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2881a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2881a8: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x2881ac: 0x35265556  ori         $a2, $t1, 0x5556
    ctx->pc = 0x2881acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21846);
    // 0x2881b0: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x2881b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2881b4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2881b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2881b8: 0x0  nop
    ctx->pc = 0x2881b8u;
    // NOP
    // 0x2881bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2881bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2881c0: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x2881c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2881c4: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x2881c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2881c8: 0xeb1825  or          $v1, $a3, $t3
    ctx->pc = 0x2881c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x2881cc: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2881ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2881d0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2881d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2881d4: 0xc35025  or          $t2, $a2, $v1
    ctx->pc = 0x2881d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2881d8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2881d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2881dc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x2881dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_2881e0:
    // 0x2881e0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2881e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2881e4: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x2881e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2881e8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2881e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2881ec: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x2881ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2881f0: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x2881f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x2881f4: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x2881f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2881f8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2881f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2881fc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2881fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x288200: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x288200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x288204: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x288204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x288208: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28820c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28820cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x288210: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x288210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x288214: 0x24447000  addiu       $a0, $v0, 0x7000
    ctx->pc = 0x288214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x288218: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x288218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28821c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x288220: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x288220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288224: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x288224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x288228: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28822c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x28822cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x288230: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x288230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288234: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x288234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x288238: 0x3409fff9  ori         $t1, $zero, 0xFFF9
    ctx->pc = 0x288238u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28823c: 0x26080028  addiu       $t0, $s0, 0x28
    ctx->pc = 0x28823cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x288240: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x288240u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x288244: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x288244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x288248: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x288248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x28824c: 0x24e5e668  addiu       $a1, $a3, -0x1998
    ctx->pc = 0x28824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960744));
    // 0x288250: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x288250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x288254: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x288254u;
    SET_GPR_U32(ctx, 31, 0x28825Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28825Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28825Cu) { return; }
    ctx->pc = 0x28825Cu;
label_28825c:
    // 0x28825c: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x28825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x288260: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x288260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x288264: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x288264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x288268: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x288268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28826c: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x28826cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x288270: 0xdce60018  ld          $a2, 0x18($a3)
    ctx->pc = 0x288270u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x288274: 0x61378  dsll        $v0, $a2, 13
    ctx->pc = 0x288274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 13);
    // 0x288278: 0x25cbe  dsrl32      $t3, $v0, 18
    ctx->pc = 0x288278u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x28827c: 0x16a282d  daddu       $a1, $t3, $t2
    ctx->pc = 0x28827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
    // 0x288280: 0xdce90018  ld          $t1, 0x18($a3)
    ctx->pc = 0x288280u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x288284: 0x30a63fff  andi        $a2, $a1, 0x3FFF
    ctx->pc = 0x288284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x288288: 0x6217c  dsll32      $a0, $a2, 5
    ctx->pc = 0x288288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 5));
    // 0x28828c: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x28828cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x288290: 0x34c2001f  ori         $v0, $a2, 0x1F
    ctx->pc = 0x288290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x288294: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288298: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x288298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28829c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x28829cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2882a0: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2882a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2882a4: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x2882a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2882a8: 0x1281824  and         $v1, $t1, $t0
    ctx->pc = 0x2882a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x2882ac: 0x644825  or          $t1, $v1, $a0
    ctx->pc = 0x2882acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2882b0: 0xfce90018  sd          $t1, 0x18($a3)
    ctx->pc = 0x2882b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 9));
    // 0x2882b4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x2882b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2882b8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2882b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2882bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2882BCu;
    SET_GPR_U32(ctx, 31, 0x2882C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2882BCu, 0x2882C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882C4u;
label_2882c4:
    // 0x2882c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2882c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2882c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2882c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2882cc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x2882ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x2882d0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2882d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2882d4: 0x34671009  ori         $a3, $v1, 0x1009
    ctx->pc = 0x2882d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x2882d8: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2882d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x2882dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2882dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2882e0: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x2882e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2882e4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2882e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2882e8: 0x81938  dsll        $v1, $t0, 4
    ctx->pc = 0x2882e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 4);
    // 0x2882ec: 0x3467000a  ori         $a3, $v1, 0xA
    ctx->pc = 0x2882ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2882f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2882f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2882f4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2882f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2882f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2882f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2882fc: 0x233b8  dsll        $a2, $v0, 14
    ctx->pc = 0x2882fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 14);
    // 0x288300: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x288300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x288304: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288308: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x288308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28830c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x28830cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x288310: 0xb5638  dsll        $t2, $t3, 24
    ctx->pc = 0x288310u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) << 24);
    // 0x288314: 0x1423025  or          $a2, $t2, $v0
    ctx->pc = 0x288314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x288318: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28831c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x28831cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288320: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x288320u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x288324: 0x740bc  dsll32      $t0, $a3, 2
    ctx->pc = 0x288324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 2));
    // 0x288328: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x288328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x28832c: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x28832cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x288330: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x288330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288334: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x288334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288338: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x288338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28833c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28833Cu;
    SET_GPR_U32(ctx, 31, 0x288344u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28833Cu, 0x288344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288344u;
label_288344:
    // 0x288344: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288344u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288348: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x288348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28834c: 0x7100a628  paddub      $s4, $t0, $zero
    ctx->pc = 0x28834cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288350: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x288354: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x288354u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288358: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x288358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x28835c: 0x24c30028  addiu       $v1, $a2, 0x28
    ctx->pc = 0x28835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x288360: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x288360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x288364: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x288364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x288368: 0x71008e28  paddub      $s1, $t0, $zero
    ctx->pc = 0x288368u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28836c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x28836cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288370: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x288370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x288374: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x288374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x288378: 0x26e80001  addiu       $t0, $s7, 0x1
    ctx->pc = 0x288378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28837c: 0x7100be28  paddub      $s7, $t0, $zero
    ctx->pc = 0x28837cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_288380:
    // 0x288380: 0x9243683f  lbu         $v1, 0x683F($s2)
    ctx->pc = 0x288380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x288384: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x288384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x288388: 0x2e8382a  slt         $a3, $s7, $t0
    ctx->pc = 0x288388u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x28838c: 0x14e0febb  bnez        $a3, . + 4 + (-0x145 << 2)
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28838c) {
            ctx->pc = 0x287E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287e7c;
        }
    }
    ctx->pc = 0x288394u;
    // 0x288394: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x288394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x288398: 0x24c66760  addiu       $a2, $a2, 0x6760
    ctx->pc = 0x288398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26464));
    // 0x28839c: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x28839cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2883a0: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x2883a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x2883a4: 0x26626208  addiu       $v0, $s3, 0x6208
    ctx->pc = 0x2883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25096));
    // 0x2883a8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2883a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2883ac: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2883acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2883b0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2883b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2883b4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2883b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2883b8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2883B8u;
    {
        const bool branch_taken_0x2883b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2883b8) {
            ctx->pc = 0x2886D8u;
            goto label_2886d8;
        }
    }
    ctx->pc = 0x2883C0u;
label_2883c0:
    // 0x2883c0: 0x8e3e000c  lw          $fp, 0xC($s1)
    ctx->pc = 0x2883c0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2883c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2883c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2883c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2883cc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2883ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2883d0: 0x3c2a823  subu        $s5, $fp, $v0
    ctx->pc = 0x2883d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2883d4: 0xafb50140  sw          $s5, 0x140($sp)
    ctx->pc = 0x2883d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
    // 0x2883d8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2883d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2883dc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2883dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2883e0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2883e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2883e4: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x2883e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x2883e8: 0x8fb60138  lw          $s6, 0x138($sp)
    ctx->pc = 0x2883e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2883ec: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2883ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2883f0: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2883f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2883f4: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2883f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2883f8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2883f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2883fc: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2883fcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288400: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x288400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288404: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x288404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x288408: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x288408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28840c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x28840cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288410: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x288410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288414: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x288414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x288418: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x288418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28841c: 0x3c164120  lui         $s6, 0x4120
    ctx->pc = 0x28841cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16672 << 16));
    // 0x288420: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x288420u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288424: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288428: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x288428u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x28842c: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x28842cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x288430: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x288430u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288434: 0x0  nop
    ctx->pc = 0x288434u;
    // NOP
    // 0x288438: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x288438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28843c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28843cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288440: 0x0  nop
    ctx->pc = 0x288440u;
    // NOP
    // 0x288444: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x288444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288448: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x288448u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28844c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28844Cu;
    SET_GPR_U32(ctx, 31, 0x288454u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28844Cu, 0x288454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288454u;
label_288454:
    // 0x288454: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288454u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288458: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x288458u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28845c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28845cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x288460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288464: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288468: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288468u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28846c: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x288470: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288470u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288474: 0x0  nop
    ctx->pc = 0x288474u;
    // NOP
    // 0x288478: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28847c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28847cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288480: 0x0  nop
    ctx->pc = 0x288480u;
    // NOP
    // 0x288484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288488: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288488u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28848c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28848Cu;
    SET_GPR_U32(ctx, 31, 0x288494u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28848Cu, 0x288494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288494u;
label_288494:
    // 0x288494: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x288494u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288498: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288498u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28849c: 0x0  nop
    ctx->pc = 0x28849cu;
    // NOP
    // 0x2884a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2884a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2884a4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2884a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2884a8: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x2884a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2884ac: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2884acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884b0: 0x0  nop
    ctx->pc = 0x2884b0u;
    // NOP
    // 0x2884b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2884b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2884b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2884B8u;
    SET_GPR_U32(ctx, 31, 0x2884C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2884B8u, 0x2884C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884C0u;
label_2884c0:
    // 0x2884c0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2884c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2884c4: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x2884c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2884c8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2884c8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884cc: 0x0  nop
    ctx->pc = 0x2884ccu;
    // NOP
    // 0x2884d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2884d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2884d4: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x2884d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x2884d8: 0x34e3cccd  ori         $v1, $a3, 0xCCCD
    ctx->pc = 0x2884d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2884dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2884dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884e0: 0x0  nop
    ctx->pc = 0x2884e0u;
    // NOP
    // 0x2884e4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2884e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2884e8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2884E8u;
    SET_GPR_U32(ctx, 31, 0x2884F0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2884E8u, 0x2884F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884F0u;
label_2884f0:
    // 0x2884f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2884f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2884f4: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x2884f4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2884f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2884fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2884fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x288500: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x288500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x288504: 0x34c22b16  ori         $v0, $a2, 0x2B16
    ctx->pc = 0x288504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x288508: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x288508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28850c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28850cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288510: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x288510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288514: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x288514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x288518: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x288518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28851c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x28851cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288520: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x288520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x288524: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x288524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288528: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x288528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28852c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x28852cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x288530: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x288530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x288534: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x288534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288538: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x288538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28853c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288540: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x288544: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x288544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288548: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x288548u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x28854c: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x28854cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x288550: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x288550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x288554: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x288554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288558: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x288558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28855c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x28855cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288560: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x288560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288564: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x288564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288568: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x288568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x28856c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288570: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x288570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x288574: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x288574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x288578: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28857c: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x288580: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x288584: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288588: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x288588u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x28858c: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x288590: 0x24e87000  addiu       $t0, $a3, 0x7000
    ctx->pc = 0x288590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x288594: 0x3106ffff  andi        $a2, $t0, 0xFFFF
    ctx->pc = 0x288594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x288598: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28859c: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2885a0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2885a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2885a4: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x2885a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2885a8: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x2885a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2885ac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2885acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2885b0: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x2885b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2885b4: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x2885b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2885b8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2885b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2885bc: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2885c0: 0x24677000  addiu       $a3, $v1, 0x7000
    ctx->pc = 0x2885c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2885c4: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x2885c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2885c8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2885c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2885cc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2885ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2885d0: 0x24c97900  addiu       $t1, $a2, 0x7900
    ctx->pc = 0x2885d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2885d4: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x2885d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2885d8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x2885d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2885dc: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x2885dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2885e0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2885e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2885e4: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x2885e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2885e8: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x2885e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2885ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2885ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2885f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2885f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2885f4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2885f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2885f8: 0x250300a3  addiu       $v1, $t0, 0xA3
    ctx->pc = 0x2885f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 163));
    // 0x2885fc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2885fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x288600: 0xc35021  addu        $t2, $a2, $v1
    ctx->pc = 0x288600u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x288604: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x288604u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x288608: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x288608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28860c: 0x2469cca0  addiu       $t1, $v1, -0x3360
    ctx->pc = 0x28860cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x288610: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x288610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x288614: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x288614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x288618: 0x2649001c  addiu       $t1, $s2, 0x1C
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28861c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x28861cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x288620: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x288620u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x288624: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288624u;
    SET_GPR_U32(ctx, 31, 0x28862Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288624u, 0x28862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28862Cu;
label_28862c:
    // 0x28862c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28862cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288630: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288634: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x288634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x288638: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28863c: 0x34c81009  ori         $t0, $a2, 0x1009
    ctx->pc = 0x28863cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x288640: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x288640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x288644: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x288644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288648: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x288648u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28864c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x28864cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x288650: 0x95938  dsll        $t3, $t1, 4
    ctx->pc = 0x288650u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << 4);
    // 0x288654: 0x3563000a  ori         $v1, $t3, 0xA
    ctx->pc = 0x288654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
    // 0x288658: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x288658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28865c: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x28865cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x288660: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x288660u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x288664: 0x943b8  dsll        $t0, $t1, 14
    ctx->pc = 0x288664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 14);
    // 0x288668: 0x685025  or          $t2, $v1, $t0
    ctx->pc = 0x288668u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x28866c: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x28866cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288670: 0xc303c  dsll32      $a2, $t4, 0
    ctx->pc = 0x288670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 0));
    // 0x288674: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x288674u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x288678: 0x61e38  dsll        $v1, $a2, 24
    ctx->pc = 0x288678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 24);
    // 0x28867c: 0x6a3825  or          $a3, $v1, $t2
    ctx->pc = 0x28867cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x288680: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288684: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x288684u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288688: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x288688u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x28868c: 0xb30bc  dsll32      $a2, $t3, 2
    ctx->pc = 0x28868cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 2));
    // 0x288690: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x288690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x288694: 0xfe880008  sd          $t0, 0x8($s4)
    ctx->pc = 0x288694u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 8));
    // 0x288698: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x288698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28869c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28869cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2886a0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2886a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2886a4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2886A4u;
    SET_GPR_U32(ctx, 31, 0x2886ACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2886A4u, 0x2886ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886ACu;
label_2886ac:
    // 0x2886ac: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2886acu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2886b0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2886b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2886b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2886b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2886b8: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x2886b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2886bc: 0x71208628  paddub      $s0, $t1, $zero
    ctx->pc = 0x2886bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2886c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2886c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2886c4: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x2886c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2886c8: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x2886c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x2886cc: 0x26e90001  addiu       $t1, $s7, 0x1
    ctx->pc = 0x2886ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2886d0: 0x7120be28  paddub      $s7, $t1, $zero
    ctx->pc = 0x2886d0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2886d4: 0x0  nop
    ctx->pc = 0x2886d4u;
    // NOP
label_2886d8:
    // 0x2886d8: 0x2ae20007  slti        $v0, $s7, 0x7
    ctx->pc = 0x2886d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2886dc: 0x1440ff38  bnez        $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x2886DCu;
    {
        const bool branch_taken_0x2886dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2886dc) {
            ctx->pc = 0x2883C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2883c0;
        }
    }
    ctx->pc = 0x2886E4u;
    // 0x2886e4: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x2886e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x2886e8: 0x2507674c  addiu       $a3, $t0, 0x674C
    ctx->pc = 0x2886e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 26444));
    // 0x2886ec: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x2886ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2886f0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2886f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2886f4: 0x24c86240  addiu       $t0, $a2, 0x6240
    ctx->pc = 0x2886f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
    // 0x2886f8: 0xafa80138  sw          $t0, 0x138($sp)
    ctx->pc = 0x2886f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 8));
    // 0x2886fc: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2886fcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x288700: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x288700u;
    {
        const bool branch_taken_0x288700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288700) {
            ctx->pc = 0x288A18u;
            goto label_288a18;
        }
    }
    ctx->pc = 0x288708u;
label_288708:
    // 0x288708: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x288708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28870c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x28870cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288710: 0xe93023  subu        $a2, $a3, $t1
    ctx->pc = 0x288710u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x288714: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x288714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x288718: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28871c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288720: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x288720u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288724: 0xafaa013c  sw          $t2, 0x13C($sp)
    ctx->pc = 0x288724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 10));
    // 0x288728: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x288728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28872c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x288730: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x288730u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288734: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288738: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x288738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28873c: 0x70e0f628  paddub      $fp, $a3, $zero
    ctx->pc = 0x28873cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288740: 0x8fab0140  lw          $t3, 0x140($sp)
    ctx->pc = 0x288740u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288744: 0x26b1021  addu        $v0, $s3, $t3
    ctx->pc = 0x288744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x288748: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x288748u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28874c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x28874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288750: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x288750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x288754: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x288754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x288758: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x288758u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x28875c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x28875cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288760: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288764: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288764u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288768: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x288768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28876c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28876cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288770: 0x0  nop
    ctx->pc = 0x288770u;
    // NOP
    // 0x288774: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288778: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288778u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28877c: 0x0  nop
    ctx->pc = 0x28877cu;
    // NOP
    // 0x288780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288784: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288788: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288788u;
    SET_GPR_U32(ctx, 31, 0x288790u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288788u, 0x288790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288790u;
label_288790:
    // 0x288790: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x288790u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288794: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x288794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x288798: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x288798u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28879c: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x28879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2887a0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2887a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2887a4: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x2887a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x2887a8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2887a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887ac: 0x0  nop
    ctx->pc = 0x2887acu;
    // NOP
    // 0x2887b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2887b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2887b4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2887b4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887b8: 0x0  nop
    ctx->pc = 0x2887b8u;
    // NOP
    // 0x2887bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2887bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2887c0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2887c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2887c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2887C4u;
    SET_GPR_U32(ctx, 31, 0x2887CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2887C4u, 0x2887CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887CCu;
label_2887cc:
    // 0x2887cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2887ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2887d0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2887d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2887d4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2887d4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887d8: 0x0  nop
    ctx->pc = 0x2887d8u;
    // NOP
    // 0x2887dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2887dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2887e0: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x2887e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x2887e4: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x2887e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x2887e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2887e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2887ec: 0x0  nop
    ctx->pc = 0x2887ecu;
    // NOP
    // 0x2887f0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2887f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2887f4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2887F4u;
    SET_GPR_U32(ctx, 31, 0x2887FCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2887F4u, 0x2887FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887FCu;
label_2887fc:
    // 0x2887fc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2887fcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288800: 0x71409e28  paddub      $s3, $t2, $zero
    ctx->pc = 0x288800u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x288804: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x288804u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288808: 0x0  nop
    ctx->pc = 0x288808u;
    // NOP
    // 0x28880c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288810: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x288810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x288814: 0x3469cccd  ori         $t1, $v1, 0xCCCD
    ctx->pc = 0x288814u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x288818: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x288818u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28881c: 0x0  nop
    ctx->pc = 0x28881cu;
    // NOP
    // 0x288820: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x288820u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288824: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288824u;
    SET_GPR_U32(ctx, 31, 0x28882Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288824u, 0x28882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28882Cu;
label_28882c:
    // 0x28882c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28882cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288830: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x288830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x288834: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x288834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x288838: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x28883c: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x28883cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x288840: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x288840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x288844: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288848: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x288848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28884c: 0x34e50040  ori         $a1, $a3, 0x40
    ctx->pc = 0x28884cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x288850: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x288850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x288854: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x288854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288858: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x288858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28885c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288860: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x288860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x288864: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x288864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x288868: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x288868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x28886c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x28886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288870: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x288870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x288874: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x288874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288878: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28887c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288880: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x288880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x288884: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x288884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288888: 0xe44825  or          $t1, $a3, $a0
    ctx->pc = 0x288888u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x28888c: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x28888cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288890: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x288890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x288894: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x288894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288898: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x288898u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28889c: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x28889cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2888a0: 0x53200  sll         $a2, $a1, 8
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2888a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2888a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2888a8: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x2888a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2888ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2888acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2888b0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2888b4: 0x35600  sll         $t2, $v1, 24
    ctx->pc = 0x2888b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2888b8: 0x1473025  or          $a2, $t2, $a3
    ctx->pc = 0x2888b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x2888bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2888bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2888c0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2888c4: 0x135900  sll         $t3, $s3, 4
    ctx->pc = 0x2888c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2888c8: 0x25657000  addiu       $a1, $t3, 0x7000
    ctx->pc = 0x2888c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28672));
    // 0x2888cc: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x2888ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2888d0: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x2888d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2888d4: 0x24c47900  addiu       $a0, $a2, 0x7900
    ctx->pc = 0x2888d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2888d8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2888dc: 0x1223025  or          $a2, $t1, $v0
    ctx->pc = 0x2888dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2888e0: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x2888e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2888e4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2888e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2888e8: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x2888e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2888ec: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x2888ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2888f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2888f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2888f4: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x2888f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2888f8: 0x24c87000  addiu       $t0, $a2, 0x7000
    ctx->pc = 0x2888f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x2888fc: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x2888fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x288900: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x288900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x288904: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x288904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x288908: 0x24867900  addiu       $a2, $a0, 0x7900
    ctx->pc = 0x288908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x28890c: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x28890cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288910: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x288910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x288914: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x288914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288918: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x288918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x28891c: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x28891cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x288920: 0x26080028  addiu       $t0, $s0, 0x28
    ctx->pc = 0x288920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x288924: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x288924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x288928: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x288928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28892c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28892cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x288930: 0x24e300a3  addiu       $v1, $a3, 0xA3
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 163));
    // 0x288934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x288934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x288938: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x288938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28893c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x288940: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x288940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x288944: 0x246bcca0  addiu       $t3, $v1, -0x3360
    ctx->pc = 0x288944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x288948: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x288948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x28894c: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x28894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x288950: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x288950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288954: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x288954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288958: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x288958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28895c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28895Cu;
    SET_GPR_U32(ctx, 31, 0x288964u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28895Cu, 0x288964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288964u;
label_288964:
    // 0x288964: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288964u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288968: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x288968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28896c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x28896cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x288970: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x288974: 0x34c81009  ori         $t0, $a2, 0x1009
    ctx->pc = 0x288974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x288978: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x288978u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x28897c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288980: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288984: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x288984u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x288988: 0x64138  dsll        $t0, $a2, 4
    ctx->pc = 0x288988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 4);
    // 0x28898c: 0x3507000a  ori         $a3, $t0, 0xA
    ctx->pc = 0x28898cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
    // 0x288990: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x288990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288994: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x288994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x288998: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288998u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28899c: 0x343b8  dsll        $t0, $v1, 14
    ctx->pc = 0x28899cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 14);
    // 0x2889a0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2889a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2889a4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2889a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2889a8: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2889a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2889ac: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2889acu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2889b0: 0x81e38  dsll        $v1, $t0, 24
    ctx->pc = 0x2889b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 24);
    // 0x2889b4: 0x674025  or          $t0, $v1, $a3
    ctx->pc = 0x2889b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2889b8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2889b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2889bc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x2889bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2889c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2889c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2889c4: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x2889c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x2889c8: 0xc89825  or          $s3, $a2, $t0
    ctx->pc = 0x2889c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2889cc: 0xfe930008  sd          $s3, 0x8($s4)
    ctx->pc = 0x2889ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 19));
    // 0x2889d0: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x2889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2889d4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2889d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2889d8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2889d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2889dc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2889dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2889e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2889E0u;
    SET_GPR_U32(ctx, 31, 0x2889E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2889E0u, 0x2889E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889E8u;
label_2889e8:
    // 0x2889e8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2889e8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2889ec: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2889ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2889f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2889f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2889f4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2889f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2889f8: 0x2615002c  addiu       $s5, $s0, 0x2C
    ctx->pc = 0x2889f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2889fc: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x2889fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x288a00: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x288a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288a04: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x288a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x288a08: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x288a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x288a0c: 0x26e60001  addiu       $a2, $s7, 0x1
    ctx->pc = 0x288a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x288a10: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x288a10u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288a14: 0x0  nop
    ctx->pc = 0x288a14u;
    // NOP
label_288a18:
    // 0x288a18: 0x2af60002  slti        $s6, $s7, 0x2
    ctx->pc = 0x288a18u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288a1c: 0x16c0ff3a  bnez        $s6, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x288A1Cu;
    {
        const bool branch_taken_0x288a1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x288a1c) {
            ctx->pc = 0x288708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288708;
        }
    }
    ctx->pc = 0x288A24u;
    // 0x288a24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288a28: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x288a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a2c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x288a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x288a30: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x288a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x288a34: 0x34e31043  ori         $v1, $a3, 0x1043
    ctx->pc = 0x288a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4163);
    // 0x288a38: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x288a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a3c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x288a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x288a40: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x288a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288a44: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x288a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x288a48: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x288a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x288a4c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x288a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a50: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x288a50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x288a54: 0x2656001c  addiu       $s6, $s2, 0x1C
    ctx->pc = 0x288a54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288a58: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x288a58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x288a5c: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x288a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a60: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x288a60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288a64: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288A64u;
    SET_GPR_U32(ctx, 31, 0x288A6Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288A64u, 0x288A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A6Cu;
label_288a6c:
    // 0x288a6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288a6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288a70: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x288a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a74: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x288a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x288a78: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x288a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x288a7c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x288a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x288a80: 0x24c35fac  addiu       $v1, $a2, 0x5FAC
    ctx->pc = 0x288a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24492));
    // 0x288a84: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x288a84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288a88: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x288a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x288a8c: 0x24e361a0  addiu       $v1, $a3, 0x61A0
    ctx->pc = 0x288a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24992));
    // 0x288a90: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x288a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x288a94: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x288a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288a98: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x288a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288a9c: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x288a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x288aa0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x288aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x288aa4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x288aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288aa8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x288aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288aac: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x288aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x288ab0: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x288ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x288ab4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x288ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288ab8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x288ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288abc: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x288abcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288ac0: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x288ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288ac4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x288ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x288ac8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x288ac8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288acc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x288accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288ad0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x288ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288ad4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x288ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x288ad8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288ad8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288adc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x288adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x288ae0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x288ae0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288ae4: 0x8fa8013c  lw          $t0, 0x13C($sp)
    ctx->pc = 0x288ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288ae8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x288ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288aec: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x288aecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x288af0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288af0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288af4: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x288af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x288af8: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x288af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x288afc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x288afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288b00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x288b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288b04: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x288b04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x288b08: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x288b08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288b0c: 0x2663023  subu        $a2, $s3, $a2
    ctx->pc = 0x288b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x288b10: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x288b10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288b14: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x288b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288b18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x288b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288b1c: 0x74043  sra         $t0, $a3, 1
    ctx->pc = 0x288b1cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 1));
    // 0x288b20: 0x71001e28  paddub      $v1, $t0, $zero
    ctx->pc = 0x288b20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288b24: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x288b24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288b28: 0x3c74023  subu        $t0, $fp, $a3
    ctx->pc = 0x288b28u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x288b2c: 0x7100f628  paddub      $fp, $t0, $zero
    ctx->pc = 0x288b2cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288b30: 0x153023  negu        $a2, $s5
    ctx->pc = 0x288b30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x288b34: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x288b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x288b38: 0x131823  negu        $v1, $s3
    ctx->pc = 0x288b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x288b3c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x288b3cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288b40: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x288b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x288b44: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x288b44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288b48: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x288b4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288b50: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b54: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288b54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288b58: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x288b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x288b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288b60: 0x0  nop
    ctx->pc = 0x288b60u;
    // NOP
    // 0x288b64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288b68: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288b68u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288b6c: 0x0  nop
    ctx->pc = 0x288b6cu;
    // NOP
    // 0x288b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288b74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288b78: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288B78u;
    SET_GPR_U32(ctx, 31, 0x288B80u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288B78u, 0x288B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B80u;
label_288b80:
    // 0x288b80: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x288b80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288b84: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x288b84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288b88: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x288b8c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x288b8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288b90: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b94: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288b94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288b98: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x288b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x288b9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288b9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288ba0: 0x0  nop
    ctx->pc = 0x288ba0u;
    // NOP
    // 0x288ba4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288ba8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x288ba8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bac: 0x0  nop
    ctx->pc = 0x288bacu;
    // NOP
    // 0x288bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288bb4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288bb8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288BB8u;
    SET_GPR_U32(ctx, 31, 0x288BC0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288BB8u, 0x288BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BC0u;
label_288bc0:
    // 0x288bc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288bc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288bc4: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x288bc4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288bc8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288bc8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bcc: 0x0  nop
    ctx->pc = 0x288bccu;
    // NOP
    // 0x288bd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x288bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288bd4: 0x3c083f4c  lui         $t0, 0x3F4C
    ctx->pc = 0x288bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16204 << 16));
    // 0x288bd8: 0x3507cccd  ori         $a3, $t0, 0xCCCD
    ctx->pc = 0x288bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x288bdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x288bdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288be0: 0x0  nop
    ctx->pc = 0x288be0u;
    // NOP
    // 0x288be4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x288be4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288be8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288BE8u;
    SET_GPR_U32(ctx, 31, 0x288BF0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288BE8u, 0x288BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BF0u;
label_288bf0:
    // 0x288bf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288bf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288bf4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x288bf4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288bf8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x288bf8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bfc: 0x0  nop
    ctx->pc = 0x288bfcu;
    // NOP
    // 0x288c00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x288c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288c04: 0x3c093f4c  lui         $t1, 0x3F4C
    ctx->pc = 0x288c04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16204 << 16));
    // 0x288c08: 0x3526cccd  ori         $a2, $t1, 0xCCCD
    ctx->pc = 0x288c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)52429);
    // 0x288c0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288c0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288c10: 0x0  nop
    ctx->pc = 0x288c10u;
    // NOP
    // 0x288c14: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x288c14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288c18: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288C18u;
    SET_GPR_U32(ctx, 31, 0x288C20u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288C18u, 0x288C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C20u;
label_288c20:
    // 0x288c20: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x288c20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288c24: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x288c24u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288c28: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x288c28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x288c2c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x288c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x288c30: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x288c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x288c34: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x288c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x288c38: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x288c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x288c3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288c40: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x288c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288c44: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x288c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x288c48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x288c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x288c4c: 0x82485dea  lb          $t0, 0x5DEA($s2)
    ctx->pc = 0x288c4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x288c50: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x288c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x288c54: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x288c54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x288c58: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x288C58u;
    {
        const bool branch_taken_0x288c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x288c58) {
            ctx->pc = 0x288C98u;
            goto label_288c98;
        }
    }
    ctx->pc = 0x288C60u;
    // 0x288c60: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288c64: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x288c64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288c68: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x288c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288c6c: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x288c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x288c70: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288c74: 0x1233025  or          $a2, $t1, $v1
    ctx->pc = 0x288c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x288c78: 0x1464825  or          $t1, $t2, $a2
    ctx->pc = 0x288c78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x288c7c: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x288c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288c80: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x288c84: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x288c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x288c88: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x288c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288c8c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x288c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x288c90: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x288C90u;
    {
        const bool branch_taken_0x288c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288c90) {
            ctx->pc = 0x288D28u;
            goto label_288d28;
        }
    }
    ctx->pc = 0x288C98u;
label_288c98:
    // 0x288c98: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x288c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288c9c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x288c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288ca0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x288ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x288ca4: 0x346b5556  ori         $t3, $v1, 0x5556
    ctx->pc = 0x288ca4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x288ca8: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x288ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288cac: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x288cacu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x288cb0: 0x0  nop
    ctx->pc = 0x288cb0u;
    // NOP
    // 0x288cb4: 0x4810  mfhi        $t1
    ctx->pc = 0x288cb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x288cb8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x288cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x288cbc: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x288cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288cc0: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288cc4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x288cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x288cc8: 0x34665556  ori         $a2, $v1, 0x5556
    ctx->pc = 0x288cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x288ccc: 0xca0018  mult        $zero, $a2, $t2
    ctx->pc = 0x288cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288cd0: 0xa3fc2  srl         $a3, $t2, 31
    ctx->pc = 0x288cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x288cd4: 0x0  nop
    ctx->pc = 0x288cd4u;
    // NOP
    // 0x288cd8: 0x1810  mfhi        $v1
    ctx->pc = 0x288cd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288cdc: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x288cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x288ce0: 0xb3200  sll         $a2, $t3, 8
    ctx->pc = 0x288ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x288ce4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x288ce4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x288ce8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x288ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288cec: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x288cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288cf0: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x288cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x288cf4: 0x35225556  ori         $v0, $t1, 0x5556
    ctx->pc = 0x288cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21846);
    // 0x288cf8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x288cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288cfc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x288cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x288d00: 0x0  nop
    ctx->pc = 0x288d00u;
    // NOP
    // 0x288d04: 0x3810  mfhi        $a3
    ctx->pc = 0x288d04u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x288d08: 0xe34821  addu        $t1, $a3, $v1
    ctx->pc = 0x288d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x288d0c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x288d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x288d10: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x288d10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x288d14: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x288d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288d18: 0x73600  sll         $a2, $a3, 24
    ctx->pc = 0x288d18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x288d1c: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x288d1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x288d20: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x288d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288d24: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x288d24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_288d28:
    // 0x288d28: 0x8e495dc0  lw          $t1, 0x5DC0($s2)
    ctx->pc = 0x288d28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x288d2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x288d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288d30: 0x15260025  bne         $t1, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x288D30u;
    {
        const bool branch_taken_0x288d30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        if (branch_taken_0x288d30) {
            ctx->pc = 0x288DC8u;
            goto label_288dc8;
        }
    }
    ctx->pc = 0x288D38u;
    // 0x288d38: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x288d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288d3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288d40: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x288d44: 0x34ca5556  ori         $t2, $a2, 0x5556
    ctx->pc = 0x288d44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x288d48: 0x1430018  mult        $zero, $t2, $v1
    ctx->pc = 0x288d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d4c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x288d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x288d50: 0x0  nop
    ctx->pc = 0x288d50u;
    // NOP
    // 0x288d54: 0x4010  mfhi        $t0
    ctx->pc = 0x288d54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x288d58: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x288d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x288d5c: 0x8fab00d4  lw          $t3, 0xD4($sp)
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288d60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288d64: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x288d64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x288d68: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x288d6c: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x288d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d70: 0xb4fc2  srl         $t1, $t3, 31
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x288d74: 0x0  nop
    ctx->pc = 0x288d74u;
    // NOP
    // 0x288d78: 0x1810  mfhi        $v1
    ctx->pc = 0x288d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288d7c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x288d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x288d80: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x288d80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x288d84: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x288d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x288d88: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x288d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288d8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x288d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288d90: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x288d90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x288d94: 0x35465556  ori         $a2, $t2, 0x5556
    ctx->pc = 0x288d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x288d98: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x288d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d9c: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x288da0: 0x0  nop
    ctx->pc = 0x288da0u;
    // NOP
    // 0x288da4: 0x1810  mfhi        $v1
    ctx->pc = 0x288da4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288da8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x288da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x288dac: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x288db0: 0xa72025  or          $a0, $a1, $a3
    ctx->pc = 0x288db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x288db4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x288db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288db8: 0x33e00  sll         $a3, $v1, 24
    ctx->pc = 0x288db8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x288dbc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x288dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x288dc0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x288dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288dc4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x288dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_288dc8:
    // 0x288dc8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288dcc: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x288dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x288dd0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x288dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288dd4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x288dd8: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x288dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x288ddc: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x288ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x288de0: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288de4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288de8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x288de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288dec: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x288decu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x288df0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x288df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288df4: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x288df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x288df8: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x288dfc: 0xa94025  or          $t0, $a1, $t1
    ctx->pc = 0x288dfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x288e00: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288e04: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x288e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x288e08: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x288e08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x288e0c: 0x24e57000  addiu       $a1, $a3, 0x7000
    ctx->pc = 0x288e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x288e10: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x288e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x288e14: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x288e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x288e18: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x288e1c: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x288e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x288e20: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x288e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x288e24: 0x260a0018  addiu       $t2, $s0, 0x18
    ctx->pc = 0x288e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x288e28: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x288e28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x288e2c: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x288e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x288e30: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x288e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x288e34: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x288e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x288e38: 0x155900  sll         $t3, $s5, 4
    ctx->pc = 0x288e38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x288e3c: 0x25657000  addiu       $a1, $t3, 0x7000
    ctx->pc = 0x288e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28672));
    // 0x288e40: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x288e40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x288e44: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x288e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x288e48: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x288e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x288e4c: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x288e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x288e50: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x288e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x288e54: 0x1264025  or          $t0, $t1, $a2
    ctx->pc = 0x288e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x288e58: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x288e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288e5c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x288e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x288e60: 0x3405fffa  ori         $a1, $zero, 0xFFFA
    ctx->pc = 0x288e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x288e64: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x288e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x288e68: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x288e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x288e6c: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x288e6cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288e70: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x288e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x288e74: 0x246900a6  addiu       $t1, $v1, 0xA6
    ctx->pc = 0x288e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 166));
    // 0x288e78: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x288e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x288e7c: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x288e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x288e80: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x288e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x288e84: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x288e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x288e88: 0x24e3cca0  addiu       $v1, $a3, -0x3360
    ctx->pc = 0x288e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954144));
    // 0x288e8c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x288e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x288e90: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x288e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x288e94: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x288e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288e98: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x288e98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288e9c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x288e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x288ea0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288EA0u;
    SET_GPR_U32(ctx, 31, 0x288EA8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288EA0u, 0x288EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EA8u;
label_288ea8:
    // 0x288ea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288ea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288eac: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x288eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x288eb0: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x288eb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288eb4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288eb8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x288eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x288ebc: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x288ec0: 0x34c21009  ori         $v0, $a2, 0x1009
    ctx->pc = 0x288ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x288ec4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x288ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x288ec8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x288ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x288eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288ed0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288ed0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x288ed4: 0x35938  dsll        $t3, $v1, 4
    ctx->pc = 0x288ed4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 4);
    // 0x288ed8: 0x356a000a  ori         $t2, $t3, 0xA
    ctx->pc = 0x288ed8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
    // 0x288edc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x288edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288ee0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x288ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x288ee4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x288ee8: 0x33bb8  dsll        $a3, $v1, 14
    ctx->pc = 0x288ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 14);
    // 0x288eec: 0x1474025  or          $t0, $t2, $a3
    ctx->pc = 0x288eecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x288ef0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288ef4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x288ef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x288efc: 0x33638  dsll        $a2, $v1, 24
    ctx->pc = 0x288efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 24);
    // 0x288f00: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x288f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x288f04: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x288f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288f08: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x288f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x288f0c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x288f0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x288f10: 0x618bc  dsll32      $v1, $a2, 2
    ctx->pc = 0x288f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 2));
    // 0x288f14: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x288f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x288f18: 0xfe880008  sd          $t0, 0x8($s4)
    ctx->pc = 0x288f18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 8));
    // 0x288f1c: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x288f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288f20: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x288f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288f24: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x288f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x288f28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288F28u;
    SET_GPR_U32(ctx, 31, 0x288F30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288F28u, 0x288F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F30u;
label_288f30:
    // 0x288f30: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288f30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288f34: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x288f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x288f38: 0x7100a628  paddub      $s4, $t0, $zero
    ctx->pc = 0x288f38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288f3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288f40: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x288f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f44: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x288f44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x288f48: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x288f4c: 0x34c71043  ori         $a3, $a2, 0x1043
    ctx->pc = 0x288f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x288f50: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f54: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x288f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x288f58: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x288f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x288f5c: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x288f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x288f60: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x288f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x288f64: 0x241e0068  addiu       $fp, $zero, 0x68
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x288f68: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x288f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288f6c: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x288f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x288f70: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x288f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x288f74: 0x8fb50128  lw          $s5, 0x128($sp)
    ctx->pc = 0x288f74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f78: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x288f78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288f7c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x288f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x288f80: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x288f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288f84: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x288f84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288f88: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x288f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f8c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x288f8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288f90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288F90u;
    SET_GPR_U32(ctx, 31, 0x288F98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288F90u, 0x288F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F98u;
label_288f98:
    // 0x288f98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288f98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288f9c: 0x8fb60128  lw          $s6, 0x128($sp)
    ctx->pc = 0x288f9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288fa0: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x288fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x288fa4: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x288fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x288fa8: 0x82485de8  lb          $t0, 0x5DE8($s2)
    ctx->pc = 0x288fa8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24040)));
    // 0x288fac: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x288facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x288fb0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x288fb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x288fb4: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x288fb8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x288fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x288fbc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x288fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x288fc0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x288fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fc4: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x288fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x288fc8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x288fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x288fcc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x288fd0: 0x26c75f30  addiu       $a3, $s6, 0x5F30
    ctx->pc = 0x288fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24368));
    // 0x288fd4: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x288fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x288fd8: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x288fd8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288fdc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x288fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x288fe0: 0x246661a8  addiu       $a2, $v1, 0x61A8
    ctx->pc = 0x288fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 25000));
    // 0x288fe4: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x288fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x288fe8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x288fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288fec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x288fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288ff0: 0xc33823  subu        $a3, $a2, $v1
    ctx->pc = 0x288ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x288ff4: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x288ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x288ff8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288ffc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x288ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289000: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x289000u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x289004: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x289004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x289008: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x289008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28900c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289010: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x289010u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289014: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x289014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x289018: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x289018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28901c: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x28901cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289020: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x289020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x289024: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x289024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289028: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x289028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28902c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28902cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289030: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x289030u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289034: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x289034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x289038: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x289038u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28903c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x28903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289044: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x289044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x289048: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x289048u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28904c: 0x3c83821  addu        $a3, $fp, $t0
    ctx->pc = 0x28904cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x289050: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x289050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x289054: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x289054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x289058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28905c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x289060: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x289060u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289064: 0x2623823  subu        $a3, $s3, $v0
    ctx->pc = 0x289064u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x289068: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x289068u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28906c: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x28906cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x289070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289074: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x289074u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x289078: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x289078u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28907c: 0x3c71023  subu        $v0, $fp, $a3
    ctx->pc = 0x28907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x289080: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x289080u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289084: 0x151823  negu        $v1, $s5
    ctx->pc = 0x289084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x289088: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x289088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x28908c: 0x134023  negu        $t0, $s3
    ctx->pc = 0x28908cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x289090: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x289090u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x289094: 0x8fa70134  lw          $a3, 0x134($sp)
    ctx->pc = 0x289094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x289098: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x289098u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28909c: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28909cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x2890a0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2890a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2890a4: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x2890a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890a8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2890a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2890ac: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x2890acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x2890b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2890b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890b4: 0x0  nop
    ctx->pc = 0x2890b4u;
    // NOP
    // 0x2890b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2890b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2890bc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2890bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890c0: 0x0  nop
    ctx->pc = 0x2890c0u;
    // NOP
    // 0x2890c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2890c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2890c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2890c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2890cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2890CCu;
    SET_GPR_U32(ctx, 31, 0x2890D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2890CCu, 0x2890D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890D4u;
label_2890d4:
    // 0x2890d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2890d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2890d8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2890d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2890dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2890dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2890e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2890e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2890e4: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x2890e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890e8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2890e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2890ec: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x2890ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x2890f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2890f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890f4: 0x0  nop
    ctx->pc = 0x2890f4u;
    // NOP
    // 0x2890f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2890f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2890fc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2890fcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289100: 0x0  nop
    ctx->pc = 0x289100u;
    // NOP
    // 0x289104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289108: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x289108u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28910c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28910Cu;
    SET_GPR_U32(ctx, 31, 0x289114u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28910Cu, 0x289114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289114u;
label_289114:
    // 0x289114: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x289114u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289118: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x289118u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28911c: 0x0  nop
    ctx->pc = 0x28911cu;
    // NOP
    // 0x289120: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289124: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x289124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x289128: 0x34e8cccd  ori         $t0, $a3, 0xCCCD
    ctx->pc = 0x289128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28912c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28912cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289130: 0x0  nop
    ctx->pc = 0x289130u;
    // NOP
    // 0x289134: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x289134u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289138: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289138u;
    SET_GPR_U32(ctx, 31, 0x289140u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289138u, 0x289140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289140u;
label_289140:
    // 0x289140: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289140u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289144: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x289144u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289148: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x289148u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28914c: 0x0  nop
    ctx->pc = 0x28914cu;
    // NOP
    // 0x289150: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289154: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x289154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x289158: 0x34e3cccd  ori         $v1, $a3, 0xCCCD
    ctx->pc = 0x289158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28915c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28915cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289160: 0x0  nop
    ctx->pc = 0x289160u;
    // NOP
    // 0x289164: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x289164u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289168: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289168u;
    SET_GPR_U32(ctx, 31, 0x289170u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289168u, 0x289170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289170u;
label_289170:
    // 0x289170: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x289170u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289174: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x289174u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x289178: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x289178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28917c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28917cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x289180: 0x3c096400  lui         $t1, 0x6400
    ctx->pc = 0x289180u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)25600 << 16));
    // 0x289184: 0x35262b16  ori         $a2, $t1, 0x2B16
    ctx->pc = 0x289184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11030);
    // 0x289188: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x289188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x28918c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28918cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x289190: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289194: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x289194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x289198: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x289198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x28919c: 0x82435dea  lb          $v1, 0x5DEA($s2)
    ctx->pc = 0x28919cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x2891a0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x2891a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2891a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2891a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2891a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2891A8u;
    {
        const bool branch_taken_0x2891a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2891a8) {
            ctx->pc = 0x2891E8u;
            goto label_2891e8;
        }
    }
    ctx->pc = 0x2891B0u;
    // 0x2891b0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2891b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2891b4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x2891b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2891b8: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x2891b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2891bc: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x2891bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2891c0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2891c4: 0xc35025  or          $t2, $a2, $v1
    ctx->pc = 0x2891c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2891c8: 0x4a3825  or          $a3, $v0, $t2
    ctx->pc = 0x2891c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2891cc: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2891ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2891d0: 0x34e00  sll         $t1, $v1, 24
    ctx->pc = 0x2891d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2891d4: 0x1273025  or          $a2, $t1, $a3
    ctx->pc = 0x2891d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2891d8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2891d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2891dc: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x2891dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x2891e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2891E0u;
    {
        const bool branch_taken_0x2891e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2891e0) {
            ctx->pc = 0x289278u;
            goto label_289278;
        }
    }
    ctx->pc = 0x2891E8u;
label_2891e8:
    // 0x2891e8: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2891ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2891ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2891f0: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x2891f4: 0x34c85556  ori         $t0, $a2, 0x5556
    ctx->pc = 0x2891f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x2891f8: 0x1070018  mult        $zero, $t0, $a3
    ctx->pc = 0x2891f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2891fc: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x2891fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x289200: 0x0  nop
    ctx->pc = 0x289200u;
    // NOP
    // 0x289204: 0x4810  mfhi        $t1
    ctx->pc = 0x289204u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x289208: 0x1285821  addu        $t3, $t1, $t0
    ctx->pc = 0x289208u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x28920c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289210: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x289210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289214: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x289214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x289218: 0x35095556  ori         $t1, $t0, 0x5556
    ctx->pc = 0x289218u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x28921c: 0x1230018  mult        $zero, $t1, $v1
    ctx->pc = 0x28921cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289220: 0x357c2  srl         $t2, $v1, 31
    ctx->pc = 0x289220u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x289224: 0x0  nop
    ctx->pc = 0x289224u;
    // NOP
    // 0x289228: 0x6010  mfhi        $t4
    ctx->pc = 0x289228u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x28922c: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x289230: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x289230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x289234: 0x1633825  or          $a3, $t3, $v1
    ctx->pc = 0x289234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x289238: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x289238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28923c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x28923cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289240: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x289240u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x289244: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x289244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x289248: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x289248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28924c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x28924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x289250: 0x0  nop
    ctx->pc = 0x289250u;
    // NOP
    // 0x289254: 0x5010  mfhi        $t2
    ctx->pc = 0x289254u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x289258: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x289258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28925c: 0x24c00  sll         $t1, $v0, 16
    ctx->pc = 0x28925cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x289260: 0x1271825  or          $v1, $t1, $a3
    ctx->pc = 0x289260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x289264: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x289264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289268: 0x74e00  sll         $t1, $a3, 24
    ctx->pc = 0x289268u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x28926c: 0x1231025  or          $v0, $t1, $v1
    ctx->pc = 0x28926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x289270: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x289270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289274: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x289274u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_289278:
    // 0x289278: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x289278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x28927c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289280: 0x14e60025  bne         $a3, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x289280u;
    {
        const bool branch_taken_0x289280 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x289280) {
            ctx->pc = 0x289318u;
            goto label_289318;
        }
    }
    ctx->pc = 0x289288u;
    // 0x289288: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x289288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28928c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28928cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289290: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x289290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x289294: 0x34c95556  ori         $t1, $a2, 0x5556
    ctx->pc = 0x289294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x289298: 0x1280018  mult        $zero, $t1, $t0
    ctx->pc = 0x289298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28929c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x28929cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2892a0: 0x0  nop
    ctx->pc = 0x2892a0u;
    // NOP
    // 0x2892a4: 0x1010  mfhi        $v0
    ctx->pc = 0x2892a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2892a8: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x2892a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2892ac: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2892acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2892b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2892b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2892b4: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2892b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2892b8: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x2892b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2892bc: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x2892bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2892c0: 0x65fc2  srl         $t3, $a2, 31
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2892c4: 0x0  nop
    ctx->pc = 0x2892c4u;
    // NOP
    // 0x2892c8: 0x1010  mfhi        $v0
    ctx->pc = 0x2892c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2892cc: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x2892ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2892d0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2892d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2892d4: 0x1464825  or          $t1, $t2, $a2
    ctx->pc = 0x2892d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x2892d8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2892d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2892dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2892dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2892e0: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2892e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2892e4: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x2892e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2892e8: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x2892e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2892ec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2892ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2892f0: 0x0  nop
    ctx->pc = 0x2892f0u;
    // NOP
    // 0x2892f4: 0x3010  mfhi        $a2
    ctx->pc = 0x2892f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2892f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2892f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2892fc: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289300: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x289300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x289304: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x289304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289308: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x289308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x28930c: 0x492825  or          $a1, $v0, $t1
    ctx->pc = 0x28930cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x289310: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289314: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x289314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_289318:
    // 0x289318: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x289318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28931c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x28931cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x289320: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x289320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289324: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x289324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x289328: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x289328u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28932c: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x28932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x289330: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x289330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x289334: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x289334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x289338: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x289338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28933c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x28933cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289340: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x289340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289344: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x289344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x289348: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x289348u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28934c: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x28934cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x289350: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x289350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x289354: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x289354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x289358: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x289358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28935c: 0x24897000  addiu       $t1, $a0, 0x7000
    ctx->pc = 0x28935cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x289360: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x289360u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x289364: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x289364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x289368: 0x24877900  addiu       $a3, $a0, 0x7900
    ctx->pc = 0x289368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x28936c: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x28936cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289370: 0x1053025  or          $a2, $t0, $a1
    ctx->pc = 0x289370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x289374: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x289378: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x289378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28937c: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x28937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x289380: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x289380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x289384: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x289384u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x289388: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x289388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28938c: 0x246a7000  addiu       $t2, $v1, 0x7000
    ctx->pc = 0x28938cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x289390: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x289390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x289394: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x289394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x289398: 0x258c0  sll         $t3, $v0, 3
    ctx->pc = 0x289398u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28939c: 0x25657900  addiu       $a1, $t3, 0x7900
    ctx->pc = 0x28939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x2893a0: 0x54c00  sll         $t1, $a1, 16
    ctx->pc = 0x2893a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2893a4: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x2893a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x2893a8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2893a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2893ac: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2893acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2893b0: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x2893b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2893b4: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2893b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2893b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2893bc: 0x8fa80144  lw          $t0, 0x144($sp)
    ctx->pc = 0x2893bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2893c0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2893c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2893c4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2893c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2893c8: 0x2465e668  addiu       $a1, $v1, -0x1998
    ctx->pc = 0x2893c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2893cc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2893ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2893d0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x2893D0u;
    SET_GPR_U32(ctx, 31, 0x2893D8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x2893D8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2893D8u) { return; }
    ctx->pc = 0x2893D8u;
label_2893d8:
    // 0x2893d8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2893d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2893dc: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x2893dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2893e0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2893e4: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x2893e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2893e8: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x2893e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2893ec: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x2893ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2893f0: 0xdd250018  ld          $a1, 0x18($t1)
    ctx->pc = 0x2893f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2893f4: 0x53b78  dsll        $a3, $a1, 13
    ctx->pc = 0x2893f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << 13);
    // 0x2893f8: 0x71cbe  dsrl32      $v1, $a3, 18
    ctx->pc = 0x2893f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 18));
    // 0x2893fc: 0x66202d  daddu       $a0, $v1, $a2
    ctx->pc = 0x2893fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x289400: 0xdd280018  ld          $t0, 0x18($t1)
    ctx->pc = 0x289400u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x289404: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x289404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x289408: 0x3397c  dsll32      $a3, $v1, 5
    ctx->pc = 0x289408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 5));
    // 0x28940c: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x28940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x289410: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x289410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x289414: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x289414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x289418: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x289418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28941c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x28941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x289420: 0x346bffff  ori         $t3, $v1, 0xFFFF
    ctx->pc = 0x289420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x289424: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x289424u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x289428: 0x10a3024  and         $a2, $t0, $t2
    ctx->pc = 0x289428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x28942c: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x28942cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x289430: 0xfd230018  sd          $v1, 0x18($t1)
    ctx->pc = 0x289430u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 3));
    // 0x289434: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x289434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289438: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x289438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28943c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28943cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x289440: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x289440u;
    SET_GPR_U32(ctx, 31, 0x289448u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x289440u, 0x289448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289448u;
label_289448:
    // 0x289448: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x289448u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28944c: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x28944cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x289450: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x289450u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289454: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x289454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x289458: 0x24660028  addiu       $a2, $v1, 0x28
    ctx->pc = 0x289458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x28945c: 0xafa60144  sw          $a2, 0x144($sp)
    ctx->pc = 0x28945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 6));
    // 0x289460: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x289460u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x289464: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x289464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x289468: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x289468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28946c: 0x34c71009  ori         $a3, $a2, 0x1009
    ctx->pc = 0x28946cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x289470: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x289470u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x289474: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x289474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289478: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x289478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28947c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28947cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x289480: 0x83938  dsll        $a3, $t0, 4
    ctx->pc = 0x289480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 4);
    // 0x289484: 0x34e6000a  ori         $a2, $a3, 0xA
    ctx->pc = 0x289484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x289488: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x289488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28948c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x28948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x289490: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x289490u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x289494: 0x343b8  dsll        $t0, $v1, 14
    ctx->pc = 0x289494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 14);
    // 0x289498: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x289498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x28949c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28949cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2894a0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2894a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2894a4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2894a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2894a8: 0x69e38  dsll        $s3, $a2, 24
    ctx->pc = 0x2894a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) << 24);
    // 0x2894ac: 0x2671025  or          $v0, $s3, $a3
    ctx->pc = 0x2894acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 7));
    // 0x2894b0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2894b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2894b4: 0x8e3e0010  lw          $fp, 0x10($s1)
    ctx->pc = 0x2894b4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2894b8: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x2894b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x2894bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2894bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2894c0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2894c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2894c4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2894c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2894c8: 0x2a8bc  dsll32      $s5, $v0, 2
    ctx->pc = 0x2894c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2894cc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2894ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2894d0: 0x2a23025  or          $a2, $s5, $v0
    ctx->pc = 0x2894d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x2894d4: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x2894d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x2894d8: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x2894d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2894dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2894dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2894e0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2894e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2894e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2894E4u;
    SET_GPR_U32(ctx, 31, 0x2894ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2894E4u, 0x2894ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894ECu;
label_2894ec:
    // 0x2894ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2894ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2894f0: 0x26960010  addiu       $s6, $s4, 0x10
    ctx->pc = 0x2894f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2894f4: 0x72c0a628  paddub      $s4, $s6, $zero
    ctx->pc = 0x2894f4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2894f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2894f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2894fc: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x2894fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289500: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x289500u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x289504: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x289504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x289508: 0x34e31043  ori         $v1, $a3, 0x1043
    ctx->pc = 0x289508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4163);
    // 0x28950c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289510: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x289510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x289514: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x289514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289518: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x289518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x28951c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x28951cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x289520: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x289520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289524: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x289524u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x289528: 0x2656001c  addiu       $s6, $s2, 0x1C
    ctx->pc = 0x289528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28952c: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x28952cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x289530: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x289530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289534: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x289534u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289538: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x289538u;
    SET_GPR_U32(ctx, 31, 0x289540u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x289538u, 0x289540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289540u;
label_289540:
    // 0x289540: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289540u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289544: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x289544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289548: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x289548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28954c: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x28954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x289550: 0x9246660d  lbu         $a2, 0x660D($s2)
    ctx->pc = 0x289550u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26125)));
    // 0x289554: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x289554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x289558: 0x14600109  bnez        $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x289558u;
    {
        const bool branch_taken_0x289558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289558) {
            ctx->pc = 0x289980u;
            goto label_289980;
        }
    }
    ctx->pc = 0x289560u;
    // 0x289560: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x289560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x289564: 0x24e35fc0  addiu       $v1, $a3, 0x5FC0
    ctx->pc = 0x289564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24512));
    // 0x289568: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x289568u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28956c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x28956cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x289570: 0x24e661b0  addiu       $a2, $a3, 0x61B0
    ctx->pc = 0x289570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 25008));
    // 0x289574: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x289574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x289578: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x289578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28957c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289580: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x289580u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289584: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x289584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x289588: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x289588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28958c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289590: 0xc24023  subu        $t0, $a2, $v0
    ctx->pc = 0x289590u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x289594: 0xafa8013c  sw          $t0, 0x13C($sp)
    ctx->pc = 0x289594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
    // 0x289598: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x289598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28959c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2895a0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2895a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2895a4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2895a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2895a8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2895ac: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x2895acu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2895b0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2895b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2895b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2895b8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2895b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2895bc: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2895bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2895c0: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x2895c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2895c4: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x2895c4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2895c8: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x2895c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2895cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2895ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2895d0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2895d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2895d4: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x2895d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2895d8: 0x3c23821  addu        $a3, $fp, $v0
    ctx->pc = 0x2895d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2895dc: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x2895dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x2895e0: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x2895e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2895e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2895e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2895e8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2895ec: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x2895ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2895f0: 0x2671023  subu        $v0, $s3, $a3
    ctx->pc = 0x2895f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2895f4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2895f4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2895f8: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x2895f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2895fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2895fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289600: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x289600u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x289604: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x289604u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x289608: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x289608u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28960c: 0x3c61823  subu        $v1, $fp, $a2
    ctx->pc = 0x28960cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x289610: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x289610u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289614: 0x151023  negu        $v0, $s5
    ctx->pc = 0x289614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x289618: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x289618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x28961c: 0x131823  negu        $v1, $s3
    ctx->pc = 0x28961cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x289620: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x289620u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289624: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x289624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x289628: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x289628u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28962c: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28962cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x289630: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x289630u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289634: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x289634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289638: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x289638u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28963c: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x28963cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x289640: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x289640u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289644: 0x0  nop
    ctx->pc = 0x289644u;
    // NOP
    // 0x289648: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x289648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28964c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28964cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289650: 0x0  nop
    ctx->pc = 0x289650u;
    // NOP
    // 0x289654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289658: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x289658u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28965c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28965Cu;
    SET_GPR_U32(ctx, 31, 0x289664u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28965Cu, 0x289664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289664u;
label_289664:
    // 0x289664: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289664u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289668: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x289668u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28966c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28966cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x289670: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x289670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289674: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x289674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289678: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x289678u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x28967c: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x28967cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x289680: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x289680u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289684: 0x0  nop
    ctx->pc = 0x289684u;
    // NOP
    // 0x289688: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x289688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28968c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28968cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289690: 0x0  nop
    ctx->pc = 0x289690u;
    // NOP
    // 0x289694: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x289694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289698: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x289698u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28969c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28969Cu;
    SET_GPR_U32(ctx, 31, 0x2896A4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28969Cu, 0x2896A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896A4u;
label_2896a4:
    // 0x2896a4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2896a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2896a8: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x2896a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2896ac: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2896acu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2896b0: 0x0  nop
    ctx->pc = 0x2896b0u;
    // NOP
    // 0x2896b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2896b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2896b8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x2896b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x2896bc: 0x34c3cccd  ori         $v1, $a2, 0xCCCD
    ctx->pc = 0x2896bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x2896c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2896c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2896c4: 0x0  nop
    ctx->pc = 0x2896c4u;
    // NOP
    // 0x2896c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2896c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2896cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2896CCu;
    SET_GPR_U32(ctx, 31, 0x2896D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2896CCu, 0x2896D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896D4u;
label_2896d4:
    // 0x2896d4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2896d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2896d8: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x2896d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2896dc: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x2896dcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2896e0: 0x0  nop
    ctx->pc = 0x2896e0u;
    // NOP
    // 0x2896e4: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x2896e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2896e8: 0x3c083f4c  lui         $t0, 0x3F4C
    ctx->pc = 0x2896e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16204 << 16));
    // 0x2896ec: 0x3507cccd  ori         $a3, $t0, 0xCCCD
    ctx->pc = 0x2896ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x2896f0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2896f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2896f4: 0x0  nop
    ctx->pc = 0x2896f4u;
    // NOP
    // 0x2896f8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2896f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2896fc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2896FCu;
    SET_GPR_U32(ctx, 31, 0x289704u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2896FCu, 0x289704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289704u;
label_289704:
    // 0x289704: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x289704u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289708: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x289708u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28970c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x289710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x289710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x289714: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x289714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x289718: 0x34462b16  ori         $a2, $v0, 0x2B16
    ctx->pc = 0x289718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x28971c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x28971cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x289720: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x289720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x289724: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x289724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289728: 0x35030040  ori         $v1, $t0, 0x40
    ctx->pc = 0x289728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x28972c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28972cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x289730: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x289730u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x289734: 0x6563c  dsll32      $t2, $a2, 24
    ctx->pc = 0x289734u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 24));
    // 0x289738: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x289738u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x28973c: 0x1540000f  bnez        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x28973Cu;
    {
        const bool branch_taken_0x28973c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x28973c) {
            ctx->pc = 0x28977Cu;
            goto label_28977c;
        }
    }
    ctx->pc = 0x289744u;
    // 0x289744: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289748: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x289748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28974c: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x28974cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289750: 0x93200  sll         $a2, $t1, 8
    ctx->pc = 0x289750u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x289754: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x289754u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289758: 0x1263825  or          $a3, $t1, $a2
    ctx->pc = 0x289758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x28975c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x28975cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x289760: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x289760u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289764: 0x83600  sll         $a2, $t0, 24
    ctx->pc = 0x289764u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x289768: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x289768u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28976c: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x28976cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289770: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x289770u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x289774: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x289774u;
    {
        const bool branch_taken_0x289774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289774) {
            ctx->pc = 0x28980Cu;
            goto label_28980c;
        }
    }
    ctx->pc = 0x28977Cu;
label_28977c:
    // 0x28977c: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x28977cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289784: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x289784u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x289788: 0x35285556  ori         $t0, $t1, 0x5556
    ctx->pc = 0x289788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21846);
    // 0x28978c: 0x10b0018  mult        $zero, $t0, $t3
    ctx->pc = 0x28978cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289790: 0xb47c2  srl         $t0, $t3, 31
    ctx->pc = 0x289790u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x289794: 0x0  nop
    ctx->pc = 0x289794u;
    // NOP
    // 0x289798: 0x5010  mfhi        $t2
    ctx->pc = 0x289798u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x28979c: 0x1486021  addu        $t4, $t2, $t0
    ctx->pc = 0x28979cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2897a0: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2897a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2897a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2897a8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x2897a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x2897ac: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x2897acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x2897b0: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x2897b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2897b4: 0x65fc2  srl         $t3, $a2, 31
    ctx->pc = 0x2897b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2897b8: 0x0  nop
    ctx->pc = 0x2897b8u;
    // NOP
    // 0x2897bc: 0x3010  mfhi        $a2
    ctx->pc = 0x2897bcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2897c0: 0xcb4021  addu        $t0, $a2, $t3
    ctx->pc = 0x2897c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2897c4: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x2897c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2897c8: 0x1835025  or          $t2, $t4, $v1
    ctx->pc = 0x2897c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2897cc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2897ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2897d0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2897d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2897d4: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2897d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2897d8: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x2897d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2897dc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2897dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2897e0: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x2897e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2897e4: 0x0  nop
    ctx->pc = 0x2897e4u;
    // NOP
    // 0x2897e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2897e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2897ec: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x2897ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2897f0: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x2897f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2897f4: 0xea3025  or          $a2, $a3, $t2
    ctx->pc = 0x2897f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x2897f8: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x2897f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2897fc: 0x83e00  sll         $a3, $t0, 24
    ctx->pc = 0x2897fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x289800: 0xe64825  or          $t1, $a3, $a2
    ctx->pc = 0x289800u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x289804: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x289804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289808: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x289808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_28980c:
    // 0x28980c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289810: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x289814: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x289814u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289818: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x28981c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289820: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x289820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289824: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x289824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x289828: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x289828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x28982c: 0x8e2b0004  lw          $t3, 0x4($s1)
    ctx->pc = 0x28982cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289830: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x289830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x289834: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x289834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289838: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x289838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28983c: 0x64c00  sll         $t1, $a2, 16
    ctx->pc = 0x28983cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289840: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x289840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x289844: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x289844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x289848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x289848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28984c: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x28984cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x289850: 0x25077000  addiu       $a3, $t0, 0x7000
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x289854: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x289854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x289858: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x289858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28985c: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x28985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x289860: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289864: 0x6a4825  or          $t1, $v1, $t2
    ctx->pc = 0x289864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x289868: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28986c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x28986cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x289870: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x289870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x289874: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x289874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x289878: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x289878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28987c: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x289880: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x289880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x289884: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x289884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289888: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x289888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28988c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28988cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x289890: 0x24867900  addiu       $a2, $a0, 0x7900
    ctx->pc = 0x289890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x289894: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x289894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289898: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x289898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28989c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x28989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2898a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2898a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2898a4: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x2898a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x2898a8: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x2898a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2898ac: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2898acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2898b0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2898b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2898b4: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2898b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2898b8: 0x24e500a6  addiu       $a1, $a3, 0xA6
    ctx->pc = 0x2898b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 166));
    // 0x2898bc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2898bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2898c0: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2898c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2898c4: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2898c8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2898c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2898cc: 0x2504cca0  addiu       $a0, $t0, -0x3360
    ctx->pc = 0x2898ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954144));
    // 0x2898d0: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2898d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2898d4: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x2898d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x2898d8: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x2898d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2898dc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2898dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2898e0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2898e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2898e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2898E4u;
    SET_GPR_U32(ctx, 31, 0x2898ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2898E4u, 0x2898ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898ECu;
label_2898ec:
    // 0x2898ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2898ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2898f0: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x2898f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2898f4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2898f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2898f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2898f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2898fc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2898fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x289900: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x289900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x289904: 0x34671009  ori         $a3, $v1, 0x1009
    ctx->pc = 0x289904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x289908: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x289908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x28990c: 0x8e2a0004  lw          $t2, 0x4($s1)
    ctx->pc = 0x28990cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289910: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x289910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x289914: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x289914u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x289918: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x289918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x28991c: 0x344b000a  ori         $t3, $v0, 0xA
    ctx->pc = 0x28991cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x289920: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x289920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289924: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x289924u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x289928: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x289928u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x28992c: 0x933b8  dsll        $a2, $t1, 14
    ctx->pc = 0x28992cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 14);
    // 0x289930: 0x1662025  or          $a0, $t3, $a2
    ctx->pc = 0x289930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x289934: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x289934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289938: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x289938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28993c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28993cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x289940: 0x64638  dsll        $t0, $a2, 24
    ctx->pc = 0x289940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 24);
    // 0x289944: 0x1041825  or          $v1, $t0, $a0
    ctx->pc = 0x289944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x289948: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x289948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28994c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x28994cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x289950: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x289950u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x289954: 0x640bc  dsll32      $t0, $a2, 2
    ctx->pc = 0x289954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 2));
    // 0x289958: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x289958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x28995c: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x28995cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x289960: 0x2649001c  addiu       $t1, $s2, 0x1C
    ctx->pc = 0x289960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289964: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x289964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x289968: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x289968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28996c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28996Cu;
    SET_GPR_U32(ctx, 31, 0x289974u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28996Cu, 0x289974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289974u;
label_289974:
    // 0x289974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x289974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289978: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x289978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28997c: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x28997cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_289980:
    // 0x289980: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x289980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x289984: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x289984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289988: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x289988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x28998c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x28998cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x289990: 0x34831043  ori         $v1, $a0, 0x1043
    ctx->pc = 0x289990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4163);
    // 0x289994: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x289994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289998: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x289998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x28999c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x28999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2899a0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2899a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2899a4: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x2899a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2899a8: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x2899a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2899ac: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2899acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2899b0: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x2899b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x2899b4: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x2899b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2899b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2899b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2899bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2899bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2899c0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2899c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2899c4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2899C4u;
    SET_GPR_U32(ctx, 31, 0x2899CCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2899C4u, 0x2899CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899CCu;
label_2899cc:
    // 0x2899cc: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x2899ccu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2899d0: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x2899d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2899d4: 0x25460010  addiu       $a2, $t2, 0x10
    ctx->pc = 0x2899d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2899d8: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x2899d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x2899dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2899dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2899e0: 0x24675f70  addiu       $a3, $v1, 0x5F70
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24432));
    // 0x2899e4: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x2899e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2899e8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x2899e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x2899ec: 0x250661b8  addiu       $a2, $t0, 0x61B8
    ctx->pc = 0x2899ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 25016));
    // 0x2899f0: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x2899f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x2899f4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2899f4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2899f8: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2899F8u;
    {
        const bool branch_taken_0x2899f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2899f8) {
            ctx->pc = 0x28A020u;
            goto label_28a020;
        }
    }
    ctx->pc = 0x289A00u;
label_289a00:
    // 0x289a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289a04: 0x12e3000f  beq         $s7, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x289A04u;
    {
        const bool branch_taken_0x289a04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x289a04) {
            ctx->pc = 0x289A44u;
            goto label_289a44;
        }
    }
    ctx->pc = 0x289A0Cu;
    // 0x289a0c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x289A0Cu;
    {
        const bool branch_taken_0x289a0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a0c) {
            ctx->pc = 0x289A1Cu;
            goto label_289a1c;
        }
    }
    ctx->pc = 0x289A14u;
    // 0x289a14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x289A14u;
    {
        const bool branch_taken_0x289a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a14) {
            ctx->pc = 0x289A68u;
            goto label_289a68;
        }
    }
    ctx->pc = 0x289A1Cu;
label_289a1c:
    // 0x289a1c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x289a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a20: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x289a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x289a24: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x289a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a28: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x289a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x289a2c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x289a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x289a30: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x289a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x289a34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x289a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x289a38: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x289a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x289a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x289A3Cu;
    {
        const bool branch_taken_0x289a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a3c) {
            ctx->pc = 0x289A68u;
            goto label_289a68;
        }
    }
    ctx->pc = 0x289A44u;
label_289a44:
    // 0x289a44: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x289a48: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x289a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x289a4c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x289a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a50: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x289a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x289a54: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x289a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a58: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x289a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x289a5c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x289a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x289a60: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x289a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x289a64: 0x0  nop
    ctx->pc = 0x289a64u;
    // NOP
label_289a68:
    // 0x289a68: 0x8e485dc8  lw          $t0, 0x5DC8($s2)
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x289a6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x289a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x289a70: 0x15030005  bne         $t0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289A70u;
    {
        const bool branch_taken_0x289a70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x289a70) {
            ctx->pc = 0x289A88u;
            goto label_289a88;
        }
    }
    ctx->pc = 0x289A78u;
    // 0x289a78: 0x8e485dcc  lw          $t0, 0x5DCC($s2)
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x289a7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x289a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289a80: 0x11070007  beq         $t0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x289A80u;
    {
        const bool branch_taken_0x289a80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x289a80) {
            ctx->pc = 0x289AA0u;
            goto label_289aa0;
        }
    }
    ctx->pc = 0x289A88u;
label_289a88:
    // 0x289a88: 0x92466624  lbu         $a2, 0x6624($s2)
    ctx->pc = 0x289a88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26148)));
    // 0x289a8c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x289a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x289a90: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x289a90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289a94: 0x14d30023  bne         $a2, $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x289A94u;
    {
        const bool branch_taken_0x289a94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        if (branch_taken_0x289a94) {
            ctx->pc = 0x289B24u;
            goto label_289b24;
        }
    }
    ctx->pc = 0x289A9Cu;
    // 0x289a9c: 0x0  nop
    ctx->pc = 0x289a9cu;
    // NOP
label_289aa0:
    // 0x289aa0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x289aa0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x289aa4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x289AA4u;
    {
        const bool branch_taken_0x289aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289aa4) {
            ctx->pc = 0x289B10u;
            goto label_289b10;
        }
    }
    ctx->pc = 0x289AACu;
label_289aac:
    // 0x289aac: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x289aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x289ab0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x289AB0u;
    SET_GPR_U32(ctx, 31, 0x289AB8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x289AB0u, 0x289AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AB8u;
label_289ab8:
    // 0x289ab8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x289ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x289abc: 0x16f080  sll         $fp, $s6, 2
    ctx->pc = 0x289abcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x289ac0: 0x3dd1021  addu        $v0, $fp, $sp
    ctx->pc = 0x289ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
    // 0x289ac4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x289ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x289ac8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x289ac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289acc: 0x8c5500d0  lw          $s5, 0xD0($v0)
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x289ad0: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x289ad0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x289ad4: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x289AD4u;
    SET_GPR_U32(ctx, 31, 0x289ADCu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x289AD4u, 0x289ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289ADCu;
label_289adc:
    // 0x289adc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289adcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289ae0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x289ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289ae4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x289ae4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x289ae8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x289AE8u;
    SET_GPR_U32(ctx, 31, 0x289AF0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x289AE8u, 0x289AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AF0u;
label_289af0:
    // 0x289af0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x289af0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289af4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x289af4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289af8: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x289AF8u;
    SET_GPR_U32(ctx, 31, 0x289B00u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x289AF8u, 0x289B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B00u;
label_289b00:
    // 0x289b00: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289b00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289b04: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x289b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289b08: 0xac4600d0  sw          $a2, 0xD0($v0)
    ctx->pc = 0x289b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 6));
    // 0x289b0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_289b10:
    // 0x289b10: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x289b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289b14: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x289B14u;
    {
        const bool branch_taken_0x289b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b14) {
            ctx->pc = 0x289AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289aac;
        }
    }
    ctx->pc = 0x289B1Cu;
    // 0x289b1c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x289B1Cu;
    {
        const bool branch_taken_0x289b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b1c) {
            ctx->pc = 0x289BA0u;
            goto label_289ba0;
        }
    }
    ctx->pc = 0x289B24u;
label_289b24:
    // 0x289b24: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x289b24u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x289b28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x289B28u;
    {
        const bool branch_taken_0x289b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b28) {
            ctx->pc = 0x289B90u;
            goto label_289b90;
        }
    }
    ctx->pc = 0x289B30u;
label_289b30:
    // 0x289b30: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x289b30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x289b34: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x289b34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b38: 0xc6415e00  lwc1        $f1, 0x5E00($s2)
    ctx->pc = 0x289b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x289b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x289b40: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x289b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x289b44: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x289b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289b48: 0x0  nop
    ctx->pc = 0x289b48u;
    // NOP
    // 0x289b4c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x289b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x289b50: 0x163880  sll         $a3, $s6, 2
    ctx->pc = 0x289b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x289b54: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x289b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x289b58: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x289b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x289b5c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x289b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289b60: 0x8c4600d0  lw          $a2, 0xD0($v0)
    ctx->pc = 0x289b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x289b64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289b64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b68: 0x0  nop
    ctx->pc = 0x289b68u;
    // NOP
    // 0x289b6c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x289b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x289b70: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x289b70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x289b74: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289B74u;
    SET_GPR_U32(ctx, 31, 0x289B7Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289B74u, 0x289B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B7Cu;
label_289b7c:
    // 0x289b7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x289b7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289b80: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x289b80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289b84: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x289b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x289b88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x289b88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x289b8c: 0x0  nop
    ctx->pc = 0x289b8cu;
    // NOP
label_289b90:
    // 0x289b90: 0x2ac70004  slti        $a3, $s6, 0x4
    ctx->pc = 0x289b90u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289b94: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x289B94u;
    {
        const bool branch_taken_0x289b94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b94) {
            ctx->pc = 0x289B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289b30;
        }
    }
    ctx->pc = 0x289B9Cu;
    // 0x289b9c: 0x0  nop
    ctx->pc = 0x289b9cu;
    // NOP
label_289ba0:
    // 0x289ba0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x289ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x289ba4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x289ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289ba8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x289ba8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289bac: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x289bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x289bb0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x289bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x289bb4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x289bb4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289bb8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x289bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289bbc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289bc0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x289bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x289bc4: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x289bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x289bc8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x289bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289bcc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x289bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289bd0: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x289bd4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x289bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x289bd8: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x289bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x289bdc: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x289bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x289be0: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x289be0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289be4: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x289be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289be8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x289be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289bec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x289becu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x289bf0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x289bf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289bf4: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x289bf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289bf8: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x289bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x289bfc: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x289bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x289c00: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x289c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289c08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x289c08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x289c0c: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x289c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289c10: 0x3c83823  subu        $a3, $fp, $t0
    ctx->pc = 0x289c10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x289c14: 0x70e0f628  paddub      $fp, $a3, $zero
    ctx->pc = 0x289c14u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289c18: 0x153023  negu        $a2, $s5
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x289c1c: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x289c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x289c20: 0x131023  negu        $v0, $s3
    ctx->pc = 0x289c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x289c24: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x289c24u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289c28: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x289c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x289c2c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x289c2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289c30: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x289c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x289c34: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x289c34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289c38: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x289c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289c3c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x289c3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x289c40: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x289c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x289c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c48: 0x0  nop
    ctx->pc = 0x289c48u;
    // NOP
    // 0x289c4c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x289c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x289c50: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x289c50u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c54: 0x0  nop
    ctx->pc = 0x289c54u;
    // NOP
    // 0x289c58: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x289c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x289c5c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x289c5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x289c60: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289C60u;
    SET_GPR_U32(ctx, 31, 0x289C68u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289C60u, 0x289C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C68u;
label_289c68:
    // 0x289c68: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x289c68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289c6c: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x289c6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289c70: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x289c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x289c74: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289c74u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c78: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x289c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289c7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x289c7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x289c80: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x289c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x289c84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x289c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289c88: 0x0  nop
    ctx->pc = 0x289c88u;
    // NOP
    // 0x289c8c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x289c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289c90: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x289c90u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c94: 0x0  nop
    ctx->pc = 0x289c94u;
    // NOP
    // 0x289c98: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x289c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x289c9c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x289c9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x289ca0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289CA0u;
    SET_GPR_U32(ctx, 31, 0x289CA8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289CA0u, 0x289CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CA8u;
label_289ca8:
    // 0x289ca8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289ca8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289cac: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x289cacu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289cb0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x289cb0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289cb4: 0x0  nop
    ctx->pc = 0x289cb4u;
    // NOP
    // 0x289cb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289cbc: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x289cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x289cc0: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x289cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x289cc4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289cc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289cc8: 0x0  nop
    ctx->pc = 0x289cc8u;
    // NOP
    // 0x289ccc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x289cccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289cd0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289CD0u;
    SET_GPR_U32(ctx, 31, 0x289CD8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289CD0u, 0x289CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CD8u;
label_289cd8:
    // 0x289cd8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x289cd8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289cdc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x289cdcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289ce0: 0x0  nop
    ctx->pc = 0x289ce0u;
    // NOP
    // 0x289ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289ce8: 0x3c083f4c  lui         $t0, 0x3F4C
    ctx->pc = 0x289ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16204 << 16));
    // 0x289cec: 0x3503cccd  ori         $v1, $t0, 0xCCCD
    ctx->pc = 0x289cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x289cf0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x289cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289cf4: 0x0  nop
    ctx->pc = 0x289cf4u;
    // NOP
    // 0x289cf8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x289cf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x289cfc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289CFCu;
    SET_GPR_U32(ctx, 31, 0x289D04u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289CFCu, 0x289D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D04u;
label_289d04:
    // 0x289d04: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x289d04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289d08: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x289d08u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289d0c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x289d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x289d10: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x289d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x289d14: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x289d18: 0x34662b16  ori         $a2, $v1, 0x2B16
    ctx->pc = 0x289d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x289d1c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x289d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x289d20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x289d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x289d24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x289d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289d28: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x289d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x289d2c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x289d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x289d30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x289d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289d34: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x289d38: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x289d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289d3c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x289d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289d40: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x289d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289d44: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x289d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x289d48: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x289d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x289d4c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x289d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x289d50: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x289d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289d54: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x289d54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x289d58: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289d5c: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x289d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x289d60: 0x74400  sll         $t0, $a3, 16
    ctx->pc = 0x289d60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289d64: 0xc81825  or          $v1, $a2, $t0
    ctx->pc = 0x289d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x289d68: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x289d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x289d6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x289d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x289d70: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x289d70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x289d74: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x289d78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x289d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x289d7c: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x289d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x289d80: 0x16e8000f  bne         $s7, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x289D80u;
    {
        const bool branch_taken_0x289d80 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 8));
        if (branch_taken_0x289d80) {
            ctx->pc = 0x289DC0u;
            goto label_289dc0;
        }
    }
    ctx->pc = 0x289D88u;
    // 0x289d88: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289d8c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x289d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x289d90: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x289d90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289d94: 0xa3a00  sll         $a3, $t2, 8
    ctx->pc = 0x289d94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x289d98: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x289d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289d9c: 0x674825  or          $t1, $v1, $a3
    ctx->pc = 0x289d9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x289da0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x289da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x289da4: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x289da4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289da8: 0x93e00  sll         $a3, $t1, 24
    ctx->pc = 0x289da8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x289dac: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x289dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x289db0: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x289db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289db4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x289db4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x289db8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x289DB8u;
    {
        const bool branch_taken_0x289db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289db8) {
            ctx->pc = 0x289E50u;
            goto label_289e50;
        }
    }
    ctx->pc = 0x289DC0u;
label_289dc0:
    // 0x289dc0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x289dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289dc4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x289dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289dc8: 0x3c0b5555  lui         $t3, 0x5555
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21845 << 16));
    // 0x289dcc: 0x35695556  ori         $t1, $t3, 0x5556
    ctx->pc = 0x289dccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)21846);
    // 0x289dd0: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x289dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289dd4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x289dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x289dd8: 0x0  nop
    ctx->pc = 0x289dd8u;
    // NOP
    // 0x289ddc: 0x4010  mfhi        $t0
    ctx->pc = 0x289ddcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x289de0: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x289de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x289de4: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x289de4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289de8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x289de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289dec: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x289df0: 0x34cc5556  ori         $t4, $a2, 0x5556
    ctx->pc = 0x289df0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x289df4: 0x1880018  mult        $zero, $t4, $t0
    ctx->pc = 0x289df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289df8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x289df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x289dfc: 0x0  nop
    ctx->pc = 0x289dfcu;
    // NOP
    // 0x289e00: 0x3810  mfhi        $a3
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x289e04: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x289e08: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x289e08u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x289e0c: 0x12b3025  or          $a2, $t1, $t3
    ctx->pc = 0x289e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x289e10: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x289e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289e14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289e18: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x289e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x289e1c: 0x344a5556  ori         $t2, $v0, 0x5556
    ctx->pc = 0x289e1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x289e20: 0x1480018  mult        $zero, $t2, $t0
    ctx->pc = 0x289e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289e24: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x289e24u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x289e28: 0x0  nop
    ctx->pc = 0x289e28u;
    // NOP
    // 0x289e2c: 0x1810  mfhi        $v1
    ctx->pc = 0x289e2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x289e30: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x289e34: 0x74c00  sll         $t1, $a3, 16
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289e38: 0x1261025  or          $v0, $t1, $a2
    ctx->pc = 0x289e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x289e3c: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x289e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289e40: 0x83e00  sll         $a3, $t0, 24
    ctx->pc = 0x289e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x289e44: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x289e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x289e48: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x289e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289e4c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x289e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_289e50:
    // 0x289e50: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x289e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x289e54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x289e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289e58: 0x14e90025  bne         $a3, $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x289E58u;
    {
        const bool branch_taken_0x289e58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x289e58) {
            ctx->pc = 0x289EF0u;
            goto label_289ef0;
        }
    }
    ctx->pc = 0x289E60u;
    // 0x289e60: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x289e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289e64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289e68: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x289e68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x289e6c: 0x35425556  ori         $v0, $t2, 0x5556
    ctx->pc = 0x289e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x289e70: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x289e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289e74: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x289e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x289e78: 0x0  nop
    ctx->pc = 0x289e78u;
    // NOP
    // 0x289e7c: 0x1810  mfhi        $v1
    ctx->pc = 0x289e7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x289e80: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289e84: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289e88: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x289e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289e8c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x289e90: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x289e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x289e94: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x289e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289e98: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x289e9c: 0x0  nop
    ctx->pc = 0x289e9cu;
    // NOP
    // 0x289ea0: 0x4810  mfhi        $t1
    ctx->pc = 0x289ea0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x289ea4: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x289ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x289ea8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x289ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x289eac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x289eb0: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x289eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289eb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289eb8: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x289eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x289ebc: 0x34c65556  ori         $a2, $a2, 0x5556
    ctx->pc = 0x289ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x289ec0: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x289ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289ec4: 0x757c2  srl         $t2, $a3, 31
    ctx->pc = 0x289ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x289ec8: 0x0  nop
    ctx->pc = 0x289ec8u;
    // NOP
    // 0x289ecc: 0x4810  mfhi        $t1
    ctx->pc = 0x289eccu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x289ed0: 0x12a1821  addu        $v1, $t1, $t2
    ctx->pc = 0x289ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x289ed4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x289ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x289ed8: 0x482825  or          $a1, $v0, $t0
    ctx->pc = 0x289ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x289edc: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x289edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289ee0: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x289ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x289ee4: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x289ee8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289eec: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x289eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_289ef0:
    // 0x289ef0: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x289ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x289ef4: 0x24867000  addiu       $a2, $a0, 0x7000
    ctx->pc = 0x289ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x289ef8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x289ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x289efc: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x289efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x289f00: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x289f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x289f04: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x289f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x289f08: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x289f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x289f0c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x289f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x289f10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x289f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x289f14: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x289f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x289f18: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x289f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x289f1c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x289f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x289f20: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x289f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x289f24: 0x24c47000  addiu       $a0, $a2, 0x7000
    ctx->pc = 0x289f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x289f28: 0x3089ffff  andi        $t1, $a0, 0xFFFF
    ctx->pc = 0x289f28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x289f2c: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x289f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x289f30: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x289f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x289f34: 0x24877900  addiu       $a3, $a0, 0x7900
    ctx->pc = 0x289f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x289f38: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x289f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289f3c: 0x1253025  or          $a2, $t1, $a1
    ctx->pc = 0x289f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x289f40: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x289f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x289f44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x289f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x289f48: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x289f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x289f4c: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x289f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x289f50: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x289f50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x289f54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x289f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x289f58: 0x246ae690  addiu       $t2, $v1, -0x1970
    ctx->pc = 0x289f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960784));
    // 0x289f5c: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x289f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x289f60: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x289f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289f64: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x289f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289f68: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x289f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x289f6c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x289F6Cu;
    SET_GPR_U32(ctx, 31, 0x289F74u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x289F6Cu, 0x289F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F74u;
label_289f74:
    // 0x289f74: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x289f74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x289f78: 0xae8b0000  sw          $t3, 0x0($s4)
    ctx->pc = 0x289f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 11));
    // 0x289f7c: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x289f80: 0x35251009  ori         $a1, $t1, 0x1009
    ctx->pc = 0x289f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4105);
    // 0x289f84: 0xae850004  sw          $a1, 0x4($s4)
    ctx->pc = 0x289f84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 5));
    // 0x289f88: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x289f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289f8c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x289f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x289f90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x289f90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x289f94: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x289f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x289f98: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x289f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x289f9c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x289f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289fa0: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x289fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x289fa4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x289fa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x289fa8: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x289fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x289fac: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x289facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x289fb0: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x289fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289fb4: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x289fb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x289fb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x289fbc: 0x34e38  dsll        $t1, $v1, 24
    ctx->pc = 0x289fbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 24);
    // 0x289fc0: 0x1262025  or          $a0, $t1, $a2
    ctx->pc = 0x289fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x289fc4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x289fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289fc8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x289fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x289fcc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x289fccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x289fd0: 0x538bc  dsll32      $a3, $a1, 2
    ctx->pc = 0x289fd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 2));
    // 0x289fd4: 0xe41825  or          $v1, $a3, $a0
    ctx->pc = 0x289fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x289fd8: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x289fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x289fdc: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x289fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289fe0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x289fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x289fe4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x289FE4u;
    SET_GPR_U32(ctx, 31, 0x289FECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x289FE4u, 0x289FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FECu;
label_289fec:
    // 0x289fec: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x289fecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289ff0: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x289ff4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x289ff4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289ff8: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x289ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x289ffc: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x289ffcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a000: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x28a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x28a004: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28a004u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a008: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a00c: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x28a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28a010: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x28a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x28a014: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x28a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a018: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28a018u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a01c: 0x0  nop
    ctx->pc = 0x28a01cu;
    // NOP
label_28a020:
    // 0x28a020: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x28a020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a024: 0x1460fe76  bnez        $v1, . + 4 + (-0x18A << 2)
    ctx->pc = 0x28A024u;
    {
        const bool branch_taken_0x28a024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a024) {
            ctx->pc = 0x289A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289a00;
        }
    }
    ctx->pc = 0x28A02Cu;
    // 0x28a02c: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x28a02cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x28a030: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x28a030u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a034: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x28a034u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x28a038: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28a03c: 0x34661043  ori         $a2, $v1, 0x1043
    ctx->pc = 0x28a03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x28a040: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28a040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a044: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x28a044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x28a048: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a04c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x28a04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a050: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x28a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x28a054: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x28a054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x28a058: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28a058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a05c: 0xfd060008  sd          $a2, 0x8($t0)
    ctx->pc = 0x28a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 6));
    // 0x28a060: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a064: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28a064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a068: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a06c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28a06cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a070: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A070u;
    SET_GPR_U32(ctx, 31, 0x28A078u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A070u, 0x28A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A078u;
label_28a078:
    // 0x28a078: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a078u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a07c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a080: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x28a080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x28a084: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x28a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x28a088: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28a088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a08c: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x28a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x28a090: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a094: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x28a094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x28a098: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a09c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x28a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x28a0a0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x28a0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a0a4: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x28a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
    // 0x28a0a8: 0x8e475dc8  lw          $a3, 0x5DC8($s2)
    ctx->pc = 0x28a0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x28a0ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28a0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a0b0: 0x14e60005  bne         $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A0B0u;
    {
        const bool branch_taken_0x28a0b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x28a0b0) {
            ctx->pc = 0x28A0C8u;
            goto label_28a0c8;
        }
    }
    ctx->pc = 0x28A0B8u;
    // 0x28a0b8: 0x8e465dcc  lw          $a2, 0x5DCC($s2)
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x28a0bc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x28a0bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a0c0: 0x10d3000a  beq         $a2, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x28A0C0u;
    {
        const bool branch_taken_0x28a0c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        if (branch_taken_0x28a0c0) {
            ctx->pc = 0x28A0ECu;
            goto label_28a0ec;
        }
    }
    ctx->pc = 0x28A0C8u;
label_28a0c8:
    // 0x28a0c8: 0x92426624  lbu         $v0, 0x6624($s2)
    ctx->pc = 0x28a0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26148)));
    // 0x28a0cc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28a0d0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28a0d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a0d4: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x28a0d4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28a0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a0dc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28a0e0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28a0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a0e4: 0x17c2001d  bne         $fp, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28A0E4u;
    {
        const bool branch_taken_0x28a0e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a0e4) {
            ctx->pc = 0x28A15Cu;
            goto label_28a15c;
        }
    }
    ctx->pc = 0x28A0ECu;
label_28a0ec:
    // 0x28a0ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a0ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a0f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28A0F0u;
    {
        const bool branch_taken_0x28a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a0f0) {
            ctx->pc = 0x28A148u;
            goto label_28a148;
        }
    }
    ctx->pc = 0x28A0F8u;
label_28a0f8:
    // 0x28a0f8: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x28a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28a0fc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28A0FCu;
    SET_GPR_U32(ctx, 31, 0x28A104u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28A0FCu, 0x28A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A104u;
label_28a104:
    // 0x28a104: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28a104u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a108: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x28a108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
    // 0x28a10c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28a10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28a110: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28a110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a114: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28a114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28a118: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x28A118u;
    SET_GPR_U32(ctx, 31, 0x28A120u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28A118u, 0x28A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A120u;
label_28a120:
    // 0x28a120: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a120u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a124: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28a124u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a128: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x28A128u;
    SET_GPR_U32(ctx, 31, 0x28A130u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x28A128u, 0x28A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A130u;
label_28a130:
    // 0x28a130: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x28a130u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a134: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x28a134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x28a138: 0x7d4021  addu        $t0, $v1, $sp
    ctx->pc = 0x28a138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28a13c: 0xad1600d0  sw          $s6, 0xD0($t0)
    ctx->pc = 0x28a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 208), GPR_U32(ctx, 22));
    // 0x28a140: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28a140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a144: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28a144u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28a148:
    // 0x28a148: 0x2ae70004  slti        $a3, $s7, 0x4
    ctx->pc = 0x28a148u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a14c: 0x14e0ffea  bnez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28A14Cu;
    {
        const bool branch_taken_0x28a14c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a14c) {
            ctx->pc = 0x28A0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a0f8;
        }
    }
    ctx->pc = 0x28A154u;
    // 0x28a154: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28A154u;
    {
        const bool branch_taken_0x28a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a154) {
            ctx->pc = 0x28A1D0u;
            goto label_28a1d0;
        }
    }
    ctx->pc = 0x28A15Cu;
label_28a15c:
    // 0x28a15c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a15cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a160: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28A160u;
    {
        const bool branch_taken_0x28a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a160) {
            ctx->pc = 0x28A1C0u;
            goto label_28a1c0;
        }
    }
    ctx->pc = 0x28A168u;
label_28a168:
    // 0x28a168: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28a16c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28a170: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28a170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a178: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x28a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28a17c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28a17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a180: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x28a180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x28a184: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28a184u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a188: 0x0  nop
    ctx->pc = 0x28a188u;
    // NOP
    // 0x28a18c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28a18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28a190: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x28a190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x28a194: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x28a194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a198: 0x0  nop
    ctx->pc = 0x28a198u;
    // NOP
    // 0x28a19c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x28a19cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28a1a0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A1A0u;
    SET_GPR_U32(ctx, 31, 0x28A1A8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A1A0u, 0x28A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1A8u;
label_28a1a8:
    // 0x28a1a8: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x28a1a8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a1ac: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x28a1acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x28a1b0: 0xfd3021  addu        $a2, $a3, $sp
    ctx->pc = 0x28a1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x28a1b4: 0xacd600d0  sw          $s6, 0xD0($a2)
    ctx->pc = 0x28a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 22));
    // 0x28a1b8: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a1bc: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28a1bcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28a1c0:
    // 0x28a1c0: 0x2ae60004  slti        $a2, $s7, 0x4
    ctx->pc = 0x28a1c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a1c4: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x28A1C4u;
    {
        const bool branch_taken_0x28a1c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a1c4) {
            ctx->pc = 0x28A168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a168;
        }
    }
    ctx->pc = 0x28A1CCu;
    // 0x28a1cc: 0x0  nop
    ctx->pc = 0x28a1ccu;
    // NOP
label_28a1d0:
    // 0x28a1d0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28a1d4: 0x24675fe0  addiu       $a3, $v1, 0x5FE0
    ctx->pc = 0x28a1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24544));
    // 0x28a1d8: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x28a1d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a1dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28a1e0: 0x246761e0  addiu       $a3, $v1, 0x61E0
    ctx->pc = 0x28a1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25056));
    // 0x28a1e4: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x28a1e8: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a1e8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a1ec: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x28A1ECu;
    {
        const bool branch_taken_0x28a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1ec) {
            ctx->pc = 0x28A688u;
            goto label_28a688;
        }
    }
    ctx->pc = 0x28A1F4u;
label_28a1f4:
    // 0x28a1f4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28a1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a1f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a1fc: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28a1fcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a200: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x28a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a204: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28a204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a208: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x28a208u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a20c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a210: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a214: 0xc24023  subu        $t0, $a2, $v0
    ctx->pc = 0x28a214u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28a218: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x28a218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x28a21c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x28a21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a220: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a224: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x28a224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28a228: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x28a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x28a22c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x28a22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a234: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x28a234u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x28a238: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x28a238u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a23c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a23cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a240: 0x2634021  addu        $t0, $s3, $v1
    ctx->pc = 0x28a240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28a244: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x28a244u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28a248: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x28a248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28a24c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a250: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x28a254: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x28a254u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a258: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a25c: 0x3c61021  addu        $v0, $fp, $a2
    ctx->pc = 0x28a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28a260: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x28a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x28a264: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x28a264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a268: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a26c: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x28a26cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x28a270: 0x70c01e28  paddub      $v1, $a2, $zero
    ctx->pc = 0x28a270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a274: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28a274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a278: 0x2663823  subu        $a3, $s3, $a2
    ctx->pc = 0x28a278u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x28a27c: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x28a27cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a280: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x28a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28a284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a288: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x28a288u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28a28c: 0x70e04628  paddub      $t0, $a3, $zero
    ctx->pc = 0x28a28cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a290: 0x3c83023  subu        $a2, $fp, $t0
    ctx->pc = 0x28a290u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x28a294: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x28a294u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a298: 0x151823  negu        $v1, $s5
    ctx->pc = 0x28a298u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x28a29c: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x28a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x28a2a0: 0x131023  negu        $v0, $s3
    ctx->pc = 0x28a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x28a2a4: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28a2a4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a2a8: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x28a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x28a2ac: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28a2acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a2b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28a2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a2b8: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a2bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a2bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a2c0: 0x3c084420  lui         $t0, 0x4420
    ctx->pc = 0x28a2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17440 << 16));
    // 0x28a2c4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x28a2c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a2c8: 0x0  nop
    ctx->pc = 0x28a2c8u;
    // NOP
    // 0x28a2cc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a2d0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28a2d0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a2d4: 0x0  nop
    ctx->pc = 0x28a2d4u;
    // NOP
    // 0x28a2d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a2dc: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a2dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a2e0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A2E0u;
    SET_GPR_U32(ctx, 31, 0x28A2E8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A2E0u, 0x28A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2E8u;
label_28a2e8:
    // 0x28a2e8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a2e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a2ec: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x28a2ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a2f0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x28a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x28a2f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28a2f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a2f8: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a2fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a2fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a300: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28a304: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28a304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a308: 0x0  nop
    ctx->pc = 0x28a308u;
    // NOP
    // 0x28a30c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a30cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a310: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28a310u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a314: 0x0  nop
    ctx->pc = 0x28a314u;
    // NOP
    // 0x28a318: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a31c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a31cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a320: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A320u;
    SET_GPR_U32(ctx, 31, 0x28A328u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A320u, 0x28A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A328u;
label_28a328:
    // 0x28a328: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a328u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a32c: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x28a32cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a330: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28a330u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a334: 0x0  nop
    ctx->pc = 0x28a334u;
    // NOP
    // 0x28a338: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a33c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28a340: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x28a340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28a344: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x28a344u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a348: 0x0  nop
    ctx->pc = 0x28a348u;
    // NOP
    // 0x28a34c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a34cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a350: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A350u;
    SET_GPR_U32(ctx, 31, 0x28A358u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A350u, 0x28A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a35c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28a35cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a360: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28a360u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a364: 0x0  nop
    ctx->pc = 0x28a364u;
    // NOP
    // 0x28a368: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a36c: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x28a36cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x28a370: 0x34e9cccd  ori         $t1, $a3, 0xCCCD
    ctx->pc = 0x28a370u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28a374: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x28a374u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a378: 0x0  nop
    ctx->pc = 0x28a378u;
    // NOP
    // 0x28a37c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a37cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a380: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A380u;
    SET_GPR_U32(ctx, 31, 0x28A388u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A380u, 0x28A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A388u;
label_28a388:
    // 0x28a388: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28a388u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a38c: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x28a38cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28a390: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28a394: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28a394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28a398: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x28a398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x28a39c: 0x34c22b16  ori         $v0, $a2, 0x2B16
    ctx->pc = 0x28a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x28a3a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x28a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28a3a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28a3a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28a3ac: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x28a3acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28a3b0: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x28a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x28a3b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a3b8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28a3bc: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x28a3bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a3c0: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x28a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x28a3c4: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x28a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28a3c8: 0xc34825  or          $t1, $a2, $v1
    ctx->pc = 0x28a3c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28a3cc: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x28a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x28a3d0: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x28a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x28a3d4: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x28a3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a3d8: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x28a3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x28a3dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a3e0: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x28a3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28a3e4: 0x83400  sll         $a2, $t0, 16
    ctx->pc = 0x28a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x28a3e8: 0xe64025  or          $t0, $a3, $a2
    ctx->pc = 0x28a3e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28a3ec: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x28a3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28a3f0: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x28a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x28a3f4: 0x824b5dea  lb          $t3, 0x5DEA($s2)
    ctx->pc = 0x28a3f4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28a3f8: 0xb1e3c  dsll32      $v1, $t3, 24
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 24));
    // 0x28a3fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a400: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x28a400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28a404: 0x12e80027  beq         $s7, $t0, . + 4 + (0x27 << 2)
    ctx->pc = 0x28A404u;
    {
        const bool branch_taken_0x28a404 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        if (branch_taken_0x28a404) {
            ctx->pc = 0x28A4A4u;
            goto label_28a4a4;
        }
    }
    ctx->pc = 0x28A40Cu;
    // 0x28a40c: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x28a40cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a410: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x28a410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a414: 0x3c0c5555  lui         $t4, 0x5555
    ctx->pc = 0x28a414u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)21845 << 16));
    // 0x28a418: 0x358a5556  ori         $t2, $t4, 0x5556
    ctx->pc = 0x28a418u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21846);
    // 0x28a41c: 0x1490018  mult        $zero, $t2, $t1
    ctx->pc = 0x28a41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28a420: 0x937c2  srl         $a2, $t1, 31
    ctx->pc = 0x28a420u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x28a424: 0x0  nop
    ctx->pc = 0x28a424u;
    // NOP
    // 0x28a428: 0x1810  mfhi        $v1
    ctx->pc = 0x28a428u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28a42c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x28a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28a430: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28a434: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x28a434u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a438: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x28a43c: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x28a43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x28a440: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x28a440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28a444: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x28a448: 0x0  nop
    ctx->pc = 0x28a448u;
    // NOP
    // 0x28a44c: 0x5010  mfhi        $t2
    ctx->pc = 0x28a44cu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x28a450: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x28a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28a454: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x28a454u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28a458: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x28a458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x28a45c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x28a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28a460: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a464: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x28a464u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x28a468: 0x35025556  ori         $v0, $t0, 0x5556
    ctx->pc = 0x28a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x28a46c: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x28a46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28a470: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x28a470u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x28a474: 0x0  nop
    ctx->pc = 0x28a474u;
    // NOP
    // 0x28a478: 0x3010  mfhi        $a2
    ctx->pc = 0x28a478u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x28a47c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x28a47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28a480: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x28a484: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x28a484u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28a488: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x28a488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28a48c: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28a490: 0x691025  or          $v0, $v1, $t1
    ctx->pc = 0x28a490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x28a494: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x28a494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28a498: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x28a498u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x28a49c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28A49Cu;
    {
        const bool branch_taken_0x28a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a49c) {
            ctx->pc = 0x28A4D8u;
            goto label_28a4d8;
        }
    }
    ctx->pc = 0x28A4A4u;
label_28a4a4:
    // 0x28a4a4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x28a4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28a4a8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a4ac: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x28a4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28a4b0: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x28a4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28a4b4: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x28a4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a4b8: 0x1671025  or          $v0, $t3, $a3
    ctx->pc = 0x28a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x28a4bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28a4c0: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28a4c4: 0x64e00  sll         $t1, $a2, 24
    ctx->pc = 0x28a4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28a4c8: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x28a4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x28a4cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x28a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28a4d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28a4d4: 0x0  nop
    ctx->pc = 0x28a4d4u;
    // NOP
label_28a4d8:
    // 0x28a4d8: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x28a4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28a4dc: 0x25077000  addiu       $a3, $t0, 0x7000
    ctx->pc = 0x28a4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x28a4e0: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x28a4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x28a4e4: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x28a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28a4e8: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x28a4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x28a4ec: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x28a4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a4f0: 0x6a4825  or          $t1, $v1, $t2
    ctx->pc = 0x28a4f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x28a4f4: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x28a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28a4f8: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x28a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x28a4fc: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x28a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28a500: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x28a500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28a504: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28a504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28a508: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x28a508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28a50c: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x28a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x28a510: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28a510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28a514: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x28a514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28a518: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28a51c: 0x24867900  addiu       $a2, $a0, 0x7900
    ctx->pc = 0x28a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x28a520: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a524: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x28a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28a528: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x28a52c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28a530: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x28a530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28a534: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x28a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x28a538: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28a538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28a53c: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x28a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x28a540: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28a540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a544: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x28a544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x28a548: 0x24e5e6b8  addiu       $a1, $a3, -0x1948
    ctx->pc = 0x28a548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960824));
    // 0x28a54c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28a54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28a550: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28A550u;
    SET_GPR_U32(ctx, 31, 0x28A558u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28A558u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28A558u) { return; }
    ctx->pc = 0x28A558u;
label_28a558:
    // 0x28a558: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28a558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a55c: 0x8fa90144  lw          $t1, 0x144($sp)
    ctx->pc = 0x28a55cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x28a560: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x28a560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x28a564: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x28a564u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28a568: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x28a568u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28a56c: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x28a56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28a570: 0xdd050018  ld          $a1, 0x18($t0)
    ctx->pc = 0x28a570u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x28a574: 0x53378  dsll        $a2, $a1, 13
    ctx->pc = 0x28a574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 13);
    // 0x28a578: 0x614be  dsrl32      $v0, $a2, 18
    ctx->pc = 0x28a578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> (32 + 18));
    // 0x28a57c: 0x47182d  daddu       $v1, $v0, $a3
    ctx->pc = 0x28a57cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x28a580: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x28a580u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x28a584: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x28a584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x28a588: 0x3517c  dsll32      $t2, $v1, 5
    ctx->pc = 0x28a588u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 5));
    // 0x28a58c: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x28a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x28a590: 0x3446001f  ori         $a2, $v0, 0x1F
    ctx->pc = 0x28a590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x28a594: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x28a594u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28a598: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x28a598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28a59c: 0x54c38  dsll        $t1, $a1, 16
    ctx->pc = 0x28a59cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << 16);
    // 0x28a5a0: 0x3526ffff  ori         $a2, $t1, 0xFFFF
    ctx->pc = 0x28a5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x28a5a4: 0xcb2025  or          $a0, $a2, $t3
    ctx->pc = 0x28a5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x28a5a8: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x28a5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x28a5ac: 0x4a3025  or          $a2, $v0, $t2
    ctx->pc = 0x28a5acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x28a5b0: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x28a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x28a5b4: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x28a5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a5b8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28a5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28a5bc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28a5bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28a5c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A5C0u;
    SET_GPR_U32(ctx, 31, 0x28A5C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A5C0u, 0x28A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5C8u;
label_28a5c8:
    // 0x28a5c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a5c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a5cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x28a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x28a5d0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x28a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x28a5d4: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x28a5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x28a5d8: 0x35061009  ori         $a2, $t0, 0x1009
    ctx->pc = 0x28a5d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4105);
    // 0x28a5dc: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x28a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x28a5e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a5e4: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x28a5e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28a5e8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x28a5e8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x28a5ec: 0x92138  dsll        $a0, $t1, 4
    ctx->pc = 0x28a5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << 4);
    // 0x28a5f0: 0x3486000a  ori         $a2, $a0, 0xA
    ctx->pc = 0x28a5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x28a5f4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x28a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a5f8: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x28a5f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x28a5fc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x28a5fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x28a600: 0x71bb8  dsll        $v1, $a3, 14
    ctx->pc = 0x28a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 14);
    // 0x28a604: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x28a604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28a608: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a60c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x28a60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a610: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28a610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28a614: 0x33e38  dsll        $a3, $v1, 24
    ctx->pc = 0x28a614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 24);
    // 0x28a618: 0xe41825  or          $v1, $a3, $a0
    ctx->pc = 0x28a618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x28a61c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x28a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a620: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28a620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28a624: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28a624u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28a628: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x28a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x28a62c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28a62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a630: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x28a630u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x28a634: 0x264b001c  addiu       $t3, $s2, 0x1C
    ctx->pc = 0x28a634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a638: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x28a638u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28a63c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28a63cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28a640: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A640u;
    SET_GPR_U32(ctx, 31, 0x28A648u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A640u, 0x28A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A648u;
label_28a648:
    // 0x28a648: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28a648u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a64c: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x28a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28a650: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x28a650u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a654: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x28a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x28a658: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x28a658u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a65c: 0x8fa70144  lw          $a3, 0x144($sp)
    ctx->pc = 0x28a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x28a660: 0x24e80028  addiu       $t0, $a3, 0x28
    ctx->pc = 0x28a660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x28a664: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x28a664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x28a668: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x28a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x28a66c: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x28a66cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a670: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x28a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a674: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x28a674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28a678: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x28a678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x28a67c: 0x26e80001  addiu       $t0, $s7, 0x1
    ctx->pc = 0x28a67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a680: 0x7100be28  paddub      $s7, $t0, $zero
    ctx->pc = 0x28a680u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28a684: 0x0  nop
    ctx->pc = 0x28a684u;
    // NOP
label_28a688:
    // 0x28a688: 0x2ae70002  slti        $a3, $s7, 0x2
    ctx->pc = 0x28a688u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a68c: 0x14e0fed9  bnez        $a3, . + 4 + (-0x127 << 2)
    ctx->pc = 0x28A68Cu;
    {
        const bool branch_taken_0x28a68c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a68c) {
            ctx->pc = 0x28A1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a1f4;
        }
    }
    ctx->pc = 0x28A694u;
    // 0x28a694: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x28a698: 0x24c36760  addiu       $v1, $a2, 0x6760
    ctx->pc = 0x28a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26464));
    // 0x28a69c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28a69cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a6a0: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x28a6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x28a6a4: 0x25076208  addiu       $a3, $t0, 0x6208
    ctx->pc = 0x28a6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 25096));
    // 0x28a6a8: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x28a6ac: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a6acu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a6b0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28A6B0u;
    {
        const bool branch_taken_0x28a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a6b0) {
            ctx->pc = 0x28A9E8u;
            goto label_28a9e8;
        }
    }
    ctx->pc = 0x28A6B8u;
label_28a6b8:
    // 0x28a6b8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a6bc: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x28a6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a6c0: 0xc81823  subu        $v1, $a2, $t0
    ctx->pc = 0x28a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x28a6c4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x28a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x28a6c8: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x28a6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a6cc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x28a6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a6d0: 0x1073023  subu        $a2, $t0, $a3
    ctx->pc = 0x28a6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x28a6d4: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x28a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x28a6d8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a6dc: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a6e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a6e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28a6e8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28a6e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a6ec: 0x8c5e0004  lw          $fp, 0x4($v0)
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a6f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x28a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a6f4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28a6f8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28a6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a6fc: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x28a6fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28a700: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x28a700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28a704: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x28a704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28a708: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28a70c: 0x153023  negu        $a2, $s5
    ctx->pc = 0x28a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x28a710: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x28a710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x28a714: 0x13b023  negu        $s6, $s3
    ctx->pc = 0x28a714u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x28a718: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x28a718u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28a71c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x28a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x28a720: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28a720u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a724: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28a724u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x28a728: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28a728u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a72c: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a730: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a734: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28a738: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28a738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a73c: 0x0  nop
    ctx->pc = 0x28a73cu;
    // NOP
    // 0x28a740: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a744: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28a744u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a748: 0x0  nop
    ctx->pc = 0x28a748u;
    // NOP
    // 0x28a74c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a750: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a750u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a754: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A754u;
    SET_GPR_U32(ctx, 31, 0x28A75Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A754u, 0x28A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A75Cu;
label_28a75c:
    // 0x28a75c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a75cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a760: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x28a760u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a764: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28a764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28a768: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28a76c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28a76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a774: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a778: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a778u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a77c: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x28a780: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x28a780u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a784: 0x0  nop
    ctx->pc = 0x28a784u;
    // NOP
    // 0x28a788: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a78c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28a78cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a790: 0x0  nop
    ctx->pc = 0x28a790u;
    // NOP
    // 0x28a794: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a798: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a798u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a79c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A79Cu;
    SET_GPR_U32(ctx, 31, 0x28A7A4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A79Cu, 0x28A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7A4u;
label_28a7a4:
    // 0x28a7a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a7a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a7a8: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28a7a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a7ac: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28a7acu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a7b0: 0x0  nop
    ctx->pc = 0x28a7b0u;
    // NOP
    // 0x28a7b4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a7b8: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x28a7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x28a7bc: 0x34f6cccd  ori         $s6, $a3, 0xCCCD
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28a7c0: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x28a7c0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a7c4: 0x0  nop
    ctx->pc = 0x28a7c4u;
    // NOP
    // 0x28a7c8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a7c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a7cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A7CCu;
    SET_GPR_U32(ctx, 31, 0x28A7D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A7CCu, 0x28A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7D4u;
label_28a7d4:
    // 0x28a7d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a7d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a7d8: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28a7d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a7dc: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28a7dcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a7e0: 0x0  nop
    ctx->pc = 0x28a7e0u;
    // NOP
    // 0x28a7e4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a7e8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x28a7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x28a7ec: 0x34c3cccd  ori         $v1, $a2, 0xCCCD
    ctx->pc = 0x28a7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x28a7f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x28a7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a7f4: 0x0  nop
    ctx->pc = 0x28a7f4u;
    // NOP
    // 0x28a7f8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a7f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a7fc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A7FCu;
    SET_GPR_U32(ctx, 31, 0x28A804u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A7FCu, 0x28A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A804u;
label_28a804:
    // 0x28a804: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28a804u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a808: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28a80c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x28a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x28a810: 0x3c076400  lui         $a3, 0x6400
    ctx->pc = 0x28a810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25600 << 16));
    // 0x28a814: 0x34e32b16  ori         $v1, $a3, 0x2B16
    ctx->pc = 0x28a814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)11030);
    // 0x28a818: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28a818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28a81c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28a820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28a824: 0x34670040  ori         $a3, $v1, 0x40
    ctx->pc = 0x28a824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x28a828: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x28a828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x28a82c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x28a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a830: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28a834: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a838: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x28a838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28a83c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a840: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x28a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x28a844: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x28a844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x28a848: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x28a848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x28a84c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a850: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28a854: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a858: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28a85c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a864: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x28a864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28a868: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28a868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28a86c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28a870: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x28a870u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28a874: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x28a874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28a878: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x28a87c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a880: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x28a880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28a884: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x28a884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x28a888: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28a88c: 0x23e00  sll         $a3, $v0, 24
    ctx->pc = 0x28a88cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28a890: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x28a890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28a894: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x28a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28a898: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28a898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28a89c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28a8a0: 0x24c67000  addiu       $a2, $a2, 0x7000
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x28a8a4: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x28a8a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28a8a8: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x28a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28a8ac: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x28a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28a8b0: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x28a8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28a8b4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x28a8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x28a8b8: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x28a8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28a8bc: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x28a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x28a8c0: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x28a8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28a8c4: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x28a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28a8c8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28a8cc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x28a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28a8d0: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x28a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28a8d4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28a8d8: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28a8dc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x28a8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x28a8e0: 0x24e67900  addiu       $a2, $a3, 0x7900
    ctx->pc = 0x28a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x28a8e4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a8e8: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x28a8e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a8ec: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x28a8f0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x28a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x28a8f4: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x28a8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28a8f8: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x28a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x28a8fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x28a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x28a900: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x28a900u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a904: 0x3127ffff  andi        $a3, $t1, 0xFFFF
    ctx->pc = 0x28a904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x28a908: 0x24e800a3  addiu       $t0, $a3, 0xA3
    ctx->pc = 0x28a908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 163));
    // 0x28a90c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x28a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28a910: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x28a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28a914: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x28a914u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a918: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28a918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28a91c: 0x2448cca0  addiu       $t0, $v0, -0x3360
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x28a920: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x28a920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x28a924: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x28a924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x28a928: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x28a928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a92c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28a92cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a930: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28a930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28a934: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A934u;
    SET_GPR_U32(ctx, 31, 0x28A93Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A934u, 0x28A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A93Cu;
label_28a93c:
    // 0x28a93c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28a93cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a940: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x28a940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28a944: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x28a944u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x28a948: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x28a948u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x28a94c: 0x35231009  ori         $v1, $t1, 0x1009
    ctx->pc = 0x28a94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4105);
    // 0x28a950: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x28a950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x28a954: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x28a954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a958: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x28a958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28a95c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x28a95cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x28a960: 0x93938  dsll        $a3, $t1, 4
    ctx->pc = 0x28a960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << 4);
    // 0x28a964: 0x34e3000a  ori         $v1, $a3, 0xA
    ctx->pc = 0x28a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x28a968: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x28a968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a96c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x28a96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a970: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28a970u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28a974: 0x643b8  dsll        $t0, $a2, 14
    ctx->pc = 0x28a974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 14);
    // 0x28a978: 0x684825  or          $t1, $v1, $t0
    ctx->pc = 0x28a978u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x28a97c: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a980: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x28a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x28a984: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28a984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28a988: 0x34638  dsll        $t0, $v1, 24
    ctx->pc = 0x28a988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 24);
    // 0x28a98c: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x28a98cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x28a990: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a994: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x28a994u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a998: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x28a998u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x28a99c: 0xa60bc  dsll32      $t4, $t2, 2
    ctx->pc = 0x28a99cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 2));
    // 0x28a9a0: 0x1893025  or          $a2, $t4, $t1
    ctx->pc = 0x28a9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x28a9a4: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x28a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x28a9a8: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a9ac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28a9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a9b0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28a9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28a9b4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A9B4u;
    SET_GPR_U32(ctx, 31, 0x28A9BCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A9B4u, 0x28A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9BCu;
label_28a9bc:
    // 0x28a9bc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a9bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a9c0: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28a9c4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x28a9c4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a9c8: 0x260b002c  addiu       $t3, $s0, 0x2C
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x28a9cc: 0x71608628  paddub      $s0, $t3, $zero
    ctx->pc = 0x28a9ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28a9d0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28a9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a9d4: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x28a9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x28a9d8: 0xafa80138  sw          $t0, 0x138($sp)
    ctx->pc = 0x28a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 8));
    // 0x28a9dc: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a9e0: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28a9e0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a9e4: 0x0  nop
    ctx->pc = 0x28a9e4u;
    // NOP
label_28a9e8:
    // 0x28a9e8: 0x2aea0004  slti        $t2, $s7, 0x4
    ctx->pc = 0x28a9e8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a9ec: 0x1540ff32  bnez        $t2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x28A9ECu;
    {
        const bool branch_taken_0x28a9ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a9ec) {
            ctx->pc = 0x28A6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a6b8;
        }
    }
    ctx->pc = 0x28A9F4u;
    // 0x28a9f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28a9f8: 0x2449674c  addiu       $t1, $v0, 0x674C
    ctx->pc = 0x28a9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 26444));
    // 0x28a9fc: 0x71208e28  paddub      $s1, $t1, $zero
    ctx->pc = 0x28a9fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28aa00: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28aa04: 0x24676240  addiu       $a3, $v1, 0x6240
    ctx->pc = 0x28aa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25152));
    // 0x28aa08: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x28aa0c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28aa0cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28aa10: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28AA10u;
    {
        const bool branch_taken_0x28aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa10) {
            ctx->pc = 0x28AD48u;
            goto label_28ad48;
        }
    }
    ctx->pc = 0x28AA18u;
label_28aa18:
    // 0x28aa18: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28aa1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28aa20: 0x1224023  subu        $t0, $t1, $v0
    ctx->pc = 0x28aa20u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x28aa24: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x28aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x28aa28: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28aa2c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28aa30: 0xe64023  subu        $t0, $a3, $a2
    ctx->pc = 0x28aa30u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x28aa34: 0xafa8013c  sw          $t0, 0x13C($sp)
    ctx->pc = 0x28aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
    // 0x28aa38: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x28aa38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28aa3c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x28aa3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28aa40: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x28aa40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28aa44: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28aa44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28aa48: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28aa4c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x28aa4cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28aa50: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x28aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28aa54: 0x2625021  addu        $t2, $s3, $v0
    ctx->pc = 0x28aa54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28aa58: 0x7140ae28  paddub      $s5, $t2, $zero
    ctx->pc = 0x28aa58u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28aa5c: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x28aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28aa60: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x28aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28aa64: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28aa68: 0x154023  negu        $t0, $s5
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x28aa6c: 0xafa80134  sw          $t0, 0x134($sp)
    ctx->pc = 0x28aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 8));
    // 0x28aa70: 0x133823  negu        $a3, $s3
    ctx->pc = 0x28aa70u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x28aa74: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x28aa74u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28aa78: 0x8fab0134  lw          $t3, 0x134($sp)
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x28aa7c: 0x71609e28  paddub      $s3, $t3, $zero
    ctx->pc = 0x28aa7cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28aa80: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28aa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28aa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aa88: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28aa8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28aa8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28aa90: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28aa94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28aa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aa98: 0x0  nop
    ctx->pc = 0x28aa98u;
    // NOP
    // 0x28aa9c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28aa9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28aaa0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28aaa0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aaa4: 0x0  nop
    ctx->pc = 0x28aaa4u;
    // NOP
    // 0x28aaa8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28aaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28aaac: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28aaacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28aab0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AAB0u;
    SET_GPR_U32(ctx, 31, 0x28AAB8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AAB0u, 0x28AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAB8u;
label_28aab8:
    // 0x28aab8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28aab8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28aabc: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28aabcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28aac0: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x28aac4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x28aac4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aac8: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28aacc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28aaccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28aad0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28aad4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28aad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aad8: 0x0  nop
    ctx->pc = 0x28aad8u;
    // NOP
    // 0x28aadc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28aadcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28aae0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28aae0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aae4: 0x0  nop
    ctx->pc = 0x28aae4u;
    // NOP
    // 0x28aae8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28aae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28aaec: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28aaecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28aaf0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AAF0u;
    SET_GPR_U32(ctx, 31, 0x28AAF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AAF0u, 0x28AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAF8u;
label_28aaf8:
    // 0x28aaf8: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28aaf8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28aafc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28aafcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ab00: 0x0  nop
    ctx->pc = 0x28ab00u;
    // NOP
    // 0x28ab04: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28ab04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ab08: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x28ab08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x28ab0c: 0x34e8cccd  ori         $t0, $a3, 0xCCCD
    ctx->pc = 0x28ab0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28ab10: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x28ab10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab14: 0x0  nop
    ctx->pc = 0x28ab14u;
    // NOP
    // 0x28ab18: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28ab18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28ab1c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AB1Cu;
    SET_GPR_U32(ctx, 31, 0x28AB24u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AB1Cu, 0x28AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB24u;
label_28ab24:
    // 0x28ab24: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ab24u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ab28: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28ab28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ab2c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28ab2cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ab30: 0x0  nop
    ctx->pc = 0x28ab30u;
    // NOP
    // 0x28ab34: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28ab34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ab38: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x28ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x28ab3c: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x28ab3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x28ab40: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x28ab40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab44: 0x0  nop
    ctx->pc = 0x28ab44u;
    // NOP
    // 0x28ab48: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28ab48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28ab4c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AB4Cu;
    SET_GPR_U32(ctx, 31, 0x28AB54u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AB4Cu, 0x28AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB54u;
label_28ab54:
    // 0x28ab54: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28ab54u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ab58: 0x7140ae28  paddub      $s5, $t2, $zero
    ctx->pc = 0x28ab58u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28ab5c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x28ab5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x28ab60: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x28ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x28ab64: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x28ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x28ab68: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x28ab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x28ab6c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28ab70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28ab74: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x28ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28ab78: 0x34a40040  ori         $a0, $a1, 0x40
    ctx->pc = 0x28ab78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x28ab7c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x28ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x28ab80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28ab84: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x28ab84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28ab88: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x28ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ab8c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28ab90: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x28ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28ab94: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x28ab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28ab98: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x28ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x28ab9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28aba0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28aba4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x28aba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28aba8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x28aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28abac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28abacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28abb0: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x28abb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28abb4: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x28abb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x28abb8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x28abb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28abbc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x28abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x28abc0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28abc4: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x28abc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28abc8: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x28abc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28abcc: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x28abccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28abd0: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x28abd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28abd4: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x28abd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x28abd8: 0x1253025  or          $a2, $t1, $a1
    ctx->pc = 0x28abd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x28abdc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28abe0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x28abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28abe4: 0x663825  or          $a3, $v1, $a2
    ctx->pc = 0x28abe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x28abe8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x28abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28abec: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x28abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x28abf0: 0x135100  sll         $t2, $s3, 4
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28abf4: 0x25467000  addiu       $a2, $t2, 0x7000
    ctx->pc = 0x28abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 28672));
    // 0x28abf8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28abfc: 0x1e58c0  sll         $t3, $fp, 3
    ctx->pc = 0x28abfcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28ac00: 0x25657900  addiu       $a1, $t3, 0x7900
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x28ac04: 0x54c00  sll         $t1, $a1, 16
    ctx->pc = 0x28ac04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x28ac08: 0x493025  or          $a2, $v0, $t1
    ctx->pc = 0x28ac08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x28ac0c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x28ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28ac10: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x28ac14: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x28ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28ac18: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x28ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28ac1c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28ac20: 0x154100  sll         $t0, $s5, 4
    ctx->pc = 0x28ac20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28ac24: 0x25037000  addiu       $v1, $t0, 0x7000
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x28ac28: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x28ac28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28ac2c: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x28ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28ac30: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28ac34: 0x25037900  addiu       $v1, $t0, 0x7900
    ctx->pc = 0x28ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
    // 0x28ac38: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x28ac38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28ac3c: 0xa92025  or          $a0, $a1, $t1
    ctx->pc = 0x28ac3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x28ac40: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x28ac44: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x28ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x28ac48: 0x3405fff9  ori         $a1, $zero, 0xFFF9
    ctx->pc = 0x28ac48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28ac4c: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x28ac4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x28ac50: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x28ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x28ac54: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x28ac54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ac58: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28ac58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28ac5c: 0x248800a3  addiu       $t0, $a0, 0xA3
    ctx->pc = 0x28ac5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 163));
    // 0x28ac60: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x28ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28ac64: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x28ac64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28ac68: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28ac6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28ac70: 0x2446cca0  addiu       $a2, $v0, -0x3360
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x28ac74: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x28ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28ac78: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x28ac7c: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x28ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ac80: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28ac80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ac84: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28ac84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28ac88: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AC88u;
    SET_GPR_U32(ctx, 31, 0x28AC90u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AC88u, 0x28AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC90u;
label_28ac90:
    // 0x28ac90: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x28ac90u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ac94: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x28ac98: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x28ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x28ac9c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28aca0: 0x34661009  ori         $a2, $v1, 0x1009
    ctx->pc = 0x28aca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x28aca4: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x28aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x28aca8: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28acac: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x28acacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28acb0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28acb0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28acb4: 0x83138  dsll        $a2, $t0, 4
    ctx->pc = 0x28acb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 4);
    // 0x28acb8: 0x34c3000a  ori         $v1, $a2, 0xA
    ctx->pc = 0x28acb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x28acbc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28acc0: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x28acc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28acc4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28acc4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28acc8: 0x83bb8  dsll        $a3, $t0, 14
    ctx->pc = 0x28acc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 14);
    // 0x28accc: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x28acccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x28acd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28acd4: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x28acd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28acd8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28acd8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28acdc: 0x83e38  dsll        $a3, $t0, 24
    ctx->pc = 0x28acdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 24);
    // 0x28ace0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x28ace0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28ace4: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28ace8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x28ace8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28acec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28acecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28acf0: 0x340bc  dsll32      $t0, $v1, 2
    ctx->pc = 0x28acf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28acf4: 0x1063825  or          $a3, $t0, $a2
    ctx->pc = 0x28acf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x28acf8: 0xfe870008  sd          $a3, 0x8($s4)
    ctx->pc = 0x28acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 7));
    // 0x28acfc: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x28acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ad00: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28ad00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28ad04: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28ad04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28ad08: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AD08u;
    SET_GPR_U32(ctx, 31, 0x28AD10u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AD08u, 0x28AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD10u;
label_28ad10:
    // 0x28ad10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28ad10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ad14: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28ad18: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x28ad18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x28ad1c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x28ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x28ad20: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28ad24: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x28ad24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ad28: 0x8fbe0138  lw          $fp, 0x138($sp)
    ctx->pc = 0x28ad28u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28ad2c: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x28ad30: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28ad34: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28ad34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28ad38: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x28ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x28ad3c: 0x26f50001  addiu       $s5, $s7, 0x1
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28ad40: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x28ad40u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28ad44: 0x0  nop
    ctx->pc = 0x28ad44u;
    // NOP
label_28ad48:
    // 0x28ad48: 0x2ae60002  slti        $a2, $s7, 0x2
    ctx->pc = 0x28ad48u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28ad4c: 0x14c0ff32  bnez        $a2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x28AD4Cu;
    {
        const bool branch_taken_0x28ad4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ad4c) {
            ctx->pc = 0x28AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aa18;
        }
    }
    ctx->pc = 0x28AD54u;
    // 0x28ad54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28ad58: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ad58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x28ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x28ad60: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28ad64: 0x34761043  ori         $s6, $v1, 0x1043
    ctx->pc = 0x28ad64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x28ad68: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28ad68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad6c: 0xad160004  sw          $s6, 0x4($t0)
    ctx->pc = 0x28ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 22));
    // 0x28ad70: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28ad74: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28ad74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad78: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x28ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x28ad7c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x28ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ad80: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28ad84: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x28ad84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ad88: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ad88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad8c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28ad8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28ad90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AD90u;
    SET_GPR_U32(ctx, 31, 0x28AD98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AD90u, 0x28AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD98u;
label_28ad98:
    // 0x28ad98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ad98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ad9c: 0x8fb60128  lw          $s6, 0x128($sp)
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ada0: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x28ada0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x28ada4: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x28ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x28ada8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28ada8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28adac: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adb0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28adb4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28adb8: 0x34661009  ori         $a2, $v1, 0x1009
    ctx->pc = 0x28adb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x28adbc: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28adbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adc0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x28adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x28adc4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adc8: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x28adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x28adcc: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x28adccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28add0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28add0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28add4: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28add4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28add8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28add8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28addc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28ADDCu;
    SET_GPR_U32(ctx, 31, 0x28ADE4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28ADDCu, 0x28ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADE4u;
label_28ade4:
    // 0x28ade4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ade4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ade8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adec: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x28adecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28adf0: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x28adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x28adf4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28adf8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adfc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28ae00: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x28ae00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x28ae04: 0x34e81015  ori         $t0, $a3, 0x1015
    ctx->pc = 0x28ae04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4117);
    // 0x28ae08: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae0c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x28ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x28ae10: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x28ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28ae14: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ae14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae18: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x28ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x28ae1c: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x28ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ae20: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28ae20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ae24: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae28: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28ae28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AE2Cu;
    SET_GPR_U32(ctx, 31, 0x28AE34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AE2Cu, 0x28AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE34u;
label_28ae34:
    // 0x28ae34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ae34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae38: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae3c: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x28ae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28ae40: 0xafa80128  sw          $t0, 0x128($sp)
    ctx->pc = 0x28ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 8));
    // 0x28ae44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28ae48: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae4c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x28ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x28ae50: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x28ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28ae54: 0x34c2103f  ori         $v0, $a2, 0x103F
    ctx->pc = 0x28ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4159);
    // 0x28ae58: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae5c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x28ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x28ae60: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ae64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28ae64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae68: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae6c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x28ae6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28ae70: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AE70u;
    SET_GPR_U32(ctx, 31, 0x28AE78u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AE70u, 0x28AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE78u;
label_28ae78:
    // 0x28ae78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28ae78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae7c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae80: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x28ae80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28ae84: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x28ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x28ae88: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28ae8c: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28ae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae90: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x28ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x28ae94: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28ae98: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x28ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x28ae9c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aea0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x28aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x28aea4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aea8: 0xfce00008  sd          $zero, 0x8($a3)
    ctx->pc = 0x28aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 0));
    // 0x28aeac: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28aeb0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28aeb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28aeb4: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aeb8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28aeb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28aebc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AEBCu;
    SET_GPR_U32(ctx, 31, 0x28AEC4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AEBCu, 0x28AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEC4u;
label_28aec4:
    // 0x28aec4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28aec4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28aec8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aecc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28aed0: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x28aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x28aed4: 0xc0a3d7c  jal         func_28F5F0
    ctx->pc = 0x28AED4u;
    SET_GPR_U32(ctx, 31, 0x28AEDCu);
    ctx->pc = 0x28F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F5F0u, 0x28AED4u, 0x28AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEDCu;
label_28aedc:
    // 0x28aedc: 0x8e485dc8  lw          $t0, 0x5DC8($s2)
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x28aee0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28aee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28aee4: 0x1507012b  bne         $t0, $a3, . + 4 + (0x12B << 2)
    ctx->pc = 0x28AEE4u;
    {
        const bool branch_taken_0x28aee4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x28aee4) {
            ctx->pc = 0x28B394u;
            goto label_28b394;
        }
    }
    ctx->pc = 0x28AEECu;
    // 0x28aeec: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x28aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28aef0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x28aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x28aef4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28aef4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28aef8: 0x0  nop
    ctx->pc = 0x28aef8u;
    // NOP
    // 0x28aefc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28aefcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28af00: 0x0  nop
    ctx->pc = 0x28af00u;
    // NOP
    // 0x28af04: 0x450000ee  bc1f        . + 4 + (0xEE << 2)
    ctx->pc = 0x28AF04u;
    {
        const bool branch_taken_0x28af04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28af04) {
            ctx->pc = 0x28B2C0u;
            goto label_28b2c0;
        }
    }
    ctx->pc = 0x28AF0Cu;
    // 0x28af0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28af10: 0x24676250  addiu       $a3, $v1, 0x6250
    ctx->pc = 0x28af10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25168));
    // 0x28af14: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x28af14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28af18: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x28af18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x396250u));
    // 0x28af1c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x28af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x28af20: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x28af24: 0x24c96260  addiu       $t1, $a2, 0x6260
    ctx->pc = 0x28af24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 25184));
    // 0x28af28: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x28af28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28af2c: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x28af2cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x396260u));
    // 0x28af30: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x28af30u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x28af34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af38: 0x8c232038  lw          $v1, 0x2038($at)
    ctx->pc = 0x28af38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622038u));
    // 0x28af3c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28AF3Cu;
    {
        const bool branch_taken_0x28af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28af3c) {
            ctx->pc = 0x28AF8Cu;
            goto label_28af8c;
        }
    }
    ctx->pc = 0x28AF44u;
    // 0x28af44: 0x24027100  addiu       $v0, $zero, 0x7100
    ctx->pc = 0x28af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x28af48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28af48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28af4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28af4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28af50: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x28af50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28af54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28af54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28af58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28AF58u;
    SET_GPR_U32(ctx, 31, 0x28AF60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28AF58u, 0x28AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF60u;
label_28af60:
    // 0x28af60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28af60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28af64: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28AF64u;
    SET_GPR_U32(ctx, 31, 0x28AF6Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28AF64u, 0x28AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF6Cu;
label_28af6c:
    // 0x28af6c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28af6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28af70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af74: 0xac282040  sw          $t0, 0x2040($at)
    ctx->pc = 0x28af74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x622040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622040u, _value); } while (0);
    // 0x28af78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af7c: 0x8c232038  lw          $v1, 0x2038($at)
    ctx->pc = 0x28af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622038u));
    // 0x28af80: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x28af80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28af84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af88: 0xac262038  sw          $a2, 0x2038($at)
    ctx->pc = 0x28af88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
label_28af8c:
    // 0x28af8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af90: 0x8c2a2040  lw          $t2, 0x2040($at)
    ctx->pc = 0x28af90u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x622040u));
    // 0x28af94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x28af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x28af98: 0x34670011  ori         $a3, $v1, 0x11
    ctx->pc = 0x28af98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x28af9c: 0x11470017  beq         $t2, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x28AF9Cu;
    {
        const bool branch_taken_0x28af9c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        if (branch_taken_0x28af9c) {
            ctx->pc = 0x28AFFCu;
            goto label_28affc;
        }
    }
    ctx->pc = 0x28AFA4u;
    // 0x28afa4: 0x2409008c  addiu       $t1, $zero, 0x8C
    ctx->pc = 0x28afa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x28afa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28afa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28afac: 0x8c262040  lw          $a2, 0x2040($at)
    ctx->pc = 0x28afacu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622040u));
    // 0x28afb0: 0xa0c9011c  sb          $t1, 0x11C($a2)
    ctx->pc = 0x28afb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 9));
    // 0x28afb4: 0x82495dea  lb          $t1, 0x5DEA($s2)
    ctx->pc = 0x28afb4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28afb8: 0x93e3c  dsll32      $a3, $t1, 24
    ctx->pc = 0x28afb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 24));
    // 0x28afbc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x28afbcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x28afc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28afc4: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28AFC4u;
    {
        const bool branch_taken_0x28afc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x28afc4) {
            ctx->pc = 0x28AFE8u;
            goto label_28afe8;
        }
    }
    ctx->pc = 0x28AFCCu;
    // 0x28afcc: 0x3c084220  lui         $t0, 0x4220
    ctx->pc = 0x28afccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16928 << 16));
    // 0x28afd0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28afd0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28afd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28afd8: 0x8c262040  lw          $a2, 0x2040($at)
    ctx->pc = 0x28afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622040u));
    // 0x28afdc: 0xe4c0009c  swc1        $f0, 0x9C($a2)
    ctx->pc = 0x28afdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 156), bits); }
    // 0x28afe0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28AFE0u;
    {
        const bool branch_taken_0x28afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28afe0) {
            ctx->pc = 0x28AFFCu;
            goto label_28affc;
        }
    }
    ctx->pc = 0x28AFE8u;
label_28afe8:
    // 0x28afe8: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28afe8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x28afec: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x28afecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28aff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28aff4: 0x8c292040  lw          $t1, 0x2040($at)
    ctx->pc = 0x28aff4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x622040u));
    // 0x28aff8: 0xe522009c  swc1        $f2, 0x9C($t1)
    ctx->pc = 0x28aff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 156), bits); }
label_28affc:
    // 0x28affc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b000: 0x8c2b7508  lw          $t3, 0x7508($at)
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x387508u));
    // 0x28b004: 0x3163ffff  andi        $v1, $t3, 0xFFFF
    ctx->pc = 0x28b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x28b008: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x28b008u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b00c: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x28b00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x28b010: 0x312800ff  andi        $t0, $t1, 0xFF
    ctx->pc = 0x28b010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x28b014: 0x85200  sll         $t2, $t0, 8
    ctx->pc = 0x28b014u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28b018: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b01c: 0x8c2c7508  lw          $t4, 0x7508($at)
    ctx->pc = 0x28b01cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x387508u));
    // 0x28b020: 0x3186ffff  andi        $a2, $t4, 0xFFFF
    ctx->pc = 0x28b020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x28b024: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28b024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28b028: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x28b028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b02c: 0x30e3ff00  andi        $v1, $a3, 0xFF00
    ctx->pc = 0x28b02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x28b030: 0x35a02  srl         $t3, $v1, 8
    ctx->pc = 0x28b030u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x28b034: 0x14b3021  addu        $a2, $t2, $t3
    ctx->pc = 0x28b034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x28b038: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b03c: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x28b03cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b040: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x28b040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b044: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x28b044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x28b048: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x28b048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b04c: 0x146a00d1  bne         $v1, $t2, . + 4 + (0xD1 << 2)
    ctx->pc = 0x28B04Cu;
    {
        const bool branch_taken_0x28b04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x28b04c) {
            ctx->pc = 0x28B394u;
            goto label_28b394;
        }
    }
    ctx->pc = 0x28B054u;
    // 0x28b054: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b058: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x28b058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28b05c: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x28b05cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28b060: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x28b060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x28b064: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28b068: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x28b068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28b06c: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x28b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x28b070: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b074: 0x8c287508  lw          $t0, 0x7508($at)
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x387508u));
    // 0x28b078: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x28b078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x28b07c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x28b07cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28b080: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x28b080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28b084: 0x3107ff00  andi        $a3, $t0, 0xFF00
    ctx->pc = 0x28b084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x28b088: 0x74a02  srl         $t1, $a3, 8
    ctx->pc = 0x28b088u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x28b08c: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x28b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28b090: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b094: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x28b094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b098: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28b098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b09c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b0a0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28b0a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x28b0a4: 0x0  nop
    ctx->pc = 0x28b0a4u;
    // NOP
    // 0x28b0a8: 0x0  nop
    ctx->pc = 0x28b0a8u;
    // NOP
    // 0x28b0ac: 0x5010  mfhi        $t2
    ctx->pc = 0x28b0acu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x28b0b0: 0xafaa0148  sw          $t2, 0x148($sp)
    ctx->pc = 0x28b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 10));
    // 0x28b0b4: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x28b0b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28b0b8: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x28b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28b0bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b0bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b0c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b0c4: 0x1468003d  bne         $v1, $t0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28B0C4u;
    {
        const bool branch_taken_0x28b0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x28b0c4) {
            ctx->pc = 0x28B1BCu;
            goto label_28b1bc;
        }
    }
    ctx->pc = 0x28B0CCu;
    // 0x28b0cc: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x28b0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28b0d0: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b0d4: 0x10eb0029  beq         $a3, $t3, . + 4 + (0x29 << 2)
    ctx->pc = 0x28B0D4u;
    {
        const bool branch_taken_0x28b0d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        if (branch_taken_0x28b0d4) {
            ctx->pc = 0x28B17Cu;
            goto label_28b17c;
        }
    }
    ctx->pc = 0x28B0DCu;
    // 0x28b0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b0e0: 0x10e20015  beq         $a3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B0E0u;
    {
        const bool branch_taken_0x28b0e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b0e0) {
            ctx->pc = 0x28B138u;
            goto label_28b138;
        }
    }
    ctx->pc = 0x28B0E8u;
    // 0x28b0e8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B0E8u;
    {
        const bool branch_taken_0x28b0e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b0e8) {
            ctx->pc = 0x28B0F8u;
            goto label_28b0f8;
        }
    }
    ctx->pc = 0x28B0F0u;
    // 0x28b0f0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28B0F0u;
    {
        const bool branch_taken_0x28b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b0f0) {
            ctx->pc = 0x28B17Cu;
            goto label_28b17c;
        }
    }
    ctx->pc = 0x28B0F8u;
label_28b0f8:
    // 0x28b0f8: 0x24036901  addiu       $v1, $zero, 0x6901
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x28b0fc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b0fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b104: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b108: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b108u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b10c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B10Cu;
    SET_GPR_U32(ctx, 31, 0x28B114u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B10Cu, 0x28B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B114u;
label_28b114:
    // 0x28b114: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b114u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b118: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x28b118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b11c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B11Cu;
    SET_GPR_U32(ctx, 31, 0x28B124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B11Cu, 0x28B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B124u;
label_28b124:
    // 0x28b124: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b124u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b128: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b12c: 0xac232044  sw          $v1, 0x2044($at)
    ctx->pc = 0x28b12cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b130: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x28B130u;
    {
        const bool branch_taken_0x28b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b130) {
            ctx->pc = 0x28B290u;
            goto label_28b290;
        }
    }
    ctx->pc = 0x28B138u;
label_28b138:
    // 0x28b138: 0x24026a01  addiu       $v0, $zero, 0x6A01
    ctx->pc = 0x28b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27137));
    // 0x28b13c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b13cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b144: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x28b144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b148: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x28b148u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b14c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b14cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b150: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B150u;
    SET_GPR_U32(ctx, 31, 0x28B158u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B150u, 0x28B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B158u;
label_28b158:
    // 0x28b158: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b158u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b15c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28b15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B160u;
    SET_GPR_U32(ctx, 31, 0x28B168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B160u, 0x28B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B168u;
label_28b168:
    // 0x28b168: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b168u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b16c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b170: 0xac232044  sw          $v1, 0x2044($at)
    ctx->pc = 0x28b170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b174: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x28B174u;
    {
        const bool branch_taken_0x28b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b174) {
            ctx->pc = 0x28B290u;
            goto label_28b290;
        }
    }
    ctx->pc = 0x28B17Cu;
label_28b17c:
    // 0x28b17c: 0x24066b01  addiu       $a2, $zero, 0x6B01
    ctx->pc = 0x28b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27393));
    // 0x28b180: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b180u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b184: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b188: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b18c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b18cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b190: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B190u;
    SET_GPR_U32(ctx, 31, 0x28B198u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B190u, 0x28B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B198u;
label_28b198:
    // 0x28b198: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28b198u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b19c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x28b19cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28b1a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B1A0u;
    SET_GPR_U32(ctx, 31, 0x28B1A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B1A0u, 0x28B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1A8u;
label_28b1a8:
    // 0x28b1a8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b1a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b1ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b1b0: 0xac292044  sw          $t1, 0x2044($at)
    ctx->pc = 0x28b1b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b1b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28B1B4u;
    {
        const bool branch_taken_0x28b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1b4) {
            ctx->pc = 0x28B290u;
            goto label_28b290;
        }
    }
    ctx->pc = 0x28B1BCu;
label_28b1bc:
    // 0x28b1bc: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x28b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28b1c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b1c4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28B1C4u;
    {
        const bool branch_taken_0x28b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b1c4) {
            ctx->pc = 0x28B260u;
            goto label_28b260;
        }
    }
    ctx->pc = 0x28B1CCu;
    // 0x28b1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b1d0: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B1D0u;
    {
        const bool branch_taken_0x28b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x28b1d0) {
            ctx->pc = 0x28B228u;
            goto label_28b228;
        }
    }
    ctx->pc = 0x28B1D8u;
    // 0x28b1d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B1D8u;
    {
        const bool branch_taken_0x28b1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1d8) {
            ctx->pc = 0x28B1E8u;
            goto label_28b1e8;
        }
    }
    ctx->pc = 0x28B1E0u;
    // 0x28b1e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28B1E0u;
    {
        const bool branch_taken_0x28b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1e0) {
            ctx->pc = 0x28B260u;
            goto label_28b260;
        }
    }
    ctx->pc = 0x28B1E8u;
label_28b1e8:
    // 0x28b1e8: 0x24046902  addiu       $a0, $zero, 0x6902
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26882));
    // 0x28b1ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b1ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b1f0: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x28b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b1f4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28b1f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b1f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b1f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b1fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B1FCu;
    SET_GPR_U32(ctx, 31, 0x28B204u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B1FCu, 0x28B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B204u;
label_28b204:
    // 0x28b204: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b204u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b208: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28b208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b20c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B20Cu;
    SET_GPR_U32(ctx, 31, 0x28B214u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B20Cu, 0x28B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B214u;
label_28b214:
    // 0x28b214: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28b214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b218: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b21c: 0xac252044  sw          $a1, 0x2044($at)
    ctx->pc = 0x28b21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b220: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28B220u;
    {
        const bool branch_taken_0x28b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b220) {
            ctx->pc = 0x28B290u;
            goto label_28b290;
        }
    }
    ctx->pc = 0x28B228u;
label_28b228:
    // 0x28b228: 0x24046a02  addiu       $a0, $zero, 0x6A02
    ctx->pc = 0x28b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27138));
    // 0x28b22c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b22cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b230: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b234: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b234u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b238: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B238u;
    SET_GPR_U32(ctx, 31, 0x28B240u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B238u, 0x28B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B240u;
label_28b240:
    // 0x28b240: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b240u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b244: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b248: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B248u;
    SET_GPR_U32(ctx, 31, 0x28B250u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B248u, 0x28B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b254: 0xac222044  sw          $v0, 0x2044($at)
    ctx->pc = 0x28b254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b258: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28B258u;
    {
        const bool branch_taken_0x28b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b258) {
            ctx->pc = 0x28B290u;
            goto label_28b290;
        }
    }
    ctx->pc = 0x28B260u;
label_28b260:
    // 0x28b260: 0x24046b02  addiu       $a0, $zero, 0x6B02
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27394));
    // 0x28b264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b268: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b26c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b26cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b270: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B270u;
    SET_GPR_U32(ctx, 31, 0x28B278u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B270u, 0x28B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B278u;
label_28b278:
    // 0x28b278: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b27c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B27Cu;
    SET_GPR_U32(ctx, 31, 0x28B284u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B27Cu, 0x28B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B284u;
label_28b284:
    // 0x28b284: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b284u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b288: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b28c: 0xac232044  sw          $v1, 0x2044($at)
    ctx->pc = 0x28b28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
label_28b290:
    // 0x28b290: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b294: 0x8c272044  lw          $a3, 0x2044($at)
    ctx->pc = 0x28b294u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x622044u));
    // 0x28b298: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x28b298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x28b29c: 0x34c50011  ori         $a1, $a2, 0x11
    ctx->pc = 0x28b29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x28b2a0: 0x10e5003c  beq         $a3, $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x28B2A0u;
    {
        const bool branch_taken_0x28b2a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x28b2a0) {
            ctx->pc = 0x28B394u;
            goto label_28b394;
        }
    }
    ctx->pc = 0x28B2A8u;
    // 0x28b2a8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x28b2ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b2b0: 0x8c292044  lw          $t1, 0x2044($at)
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x622044u));
    // 0x28b2b4: 0xa124011c  sb          $a0, 0x11C($t1)
    ctx->pc = 0x28b2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x28b2b8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28B2B8u;
    {
        const bool branch_taken_0x28b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b2b8) {
            ctx->pc = 0x28B394u;
            goto label_28b394;
        }
    }
    ctx->pc = 0x28B2C0u;
label_28b2c0:
    // 0x28b2c0: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b2c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b2c8: 0x0  nop
    ctx->pc = 0x28b2c8u;
    // NOP
    // 0x28b2cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28b2ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b2d0: 0x0  nop
    ctx->pc = 0x28b2d0u;
    // NOP
    // 0x28b2d4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x28B2D4u;
    {
        const bool branch_taken_0x28b2d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b2d4) {
            ctx->pc = 0x28B394u;
            goto label_28b394;
        }
    }
    ctx->pc = 0x28B2DCu;
    // 0x28b2dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b2e0: 0x8c282038  lw          $t0, 0x2038($at)
    ctx->pc = 0x28b2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x622038u));
    // 0x28b2e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b2e8: 0x1504000d  bne         $t0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x28B2E8u;
    {
        const bool branch_taken_0x28b2e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x28b2e8) {
            ctx->pc = 0x28B320u;
            goto label_28b320;
        }
    }
    ctx->pc = 0x28B2F0u;
    // 0x28b2f0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b2f4: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x28b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x28b2f8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28b2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28b2fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b300: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28b300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b304: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b308: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b308u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b30c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B30Cu;
    SET_GPR_U32(ctx, 31, 0x28B314u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B30Cu, 0x28B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B314u;
label_28b314:
    // 0x28b314: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b314u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b318: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b31c: 0xac202038  sw          $zero, 0x2038($at)
    ctx->pc = 0x28b31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
label_28b320:
    // 0x28b320: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b324: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x28b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x28b328: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b328u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b32c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x28b32cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b330: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x28b330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28b334: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b338: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B338u;
    SET_GPR_U32(ctx, 31, 0x28B340u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B338u, 0x28B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B340u;
label_28b340:
    // 0x28b340: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x28b340u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b344: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x28b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x28b348: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28b348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28b34c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b350: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x28b350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b354: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b358: 0x71603e28  paddub      $a3, $t3, $zero
    ctx->pc = 0x28b358u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28b35c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B35Cu;
    SET_GPR_U32(ctx, 31, 0x28B364u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B35Cu, 0x28B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B364u;
label_28b364:
    // 0x28b364: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b368: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b36c: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x28b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x28b370: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b374: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b378: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x28b378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b37c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b380: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28b380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b384: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b384u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b388: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B388u;
    SET_GPR_U32(ctx, 31, 0x28B390u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B388u, 0x28B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B390u;
label_28b390:
    // 0x28b390: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28b390u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28b394:
    // 0x28b394: 0x8e465dc8  lw          $a2, 0x5DC8($s2)
    ctx->pc = 0x28b394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x28b398: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b39c: 0x14c80152  bne         $a2, $t0, . + 4 + (0x152 << 2)
    ctx->pc = 0x28B39Cu;
    {
        const bool branch_taken_0x28b39c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x28b39c) {
            ctx->pc = 0x28B8E8u;
            goto label_28b8e8;
        }
    }
    ctx->pc = 0x28B3A4u;
    // 0x28b3a4: 0xc64c6620  lwc1        $f12, 0x6620($s2)
    ctx->pc = 0x28b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28b3a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28b3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b3ac: 0x0  nop
    ctx->pc = 0x28b3acu;
    // NOP
    // 0x28b3b0: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x28b3b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b3b4: 0x0  nop
    ctx->pc = 0x28b3b4u;
    // NOP
    // 0x28b3b8: 0x4500010a  bc1f        . + 4 + (0x10A << 2)
    ctx->pc = 0x28B3B8u;
    {
        const bool branch_taken_0x28b3b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b3b8) {
            ctx->pc = 0x28B7E4u;
            goto label_28b7e4;
        }
    }
    ctx->pc = 0x28B3C0u;
    // 0x28b3c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28b3c4: 0x24696270  addiu       $t1, $v1, 0x6270
    ctx->pc = 0x28b3c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
    // 0x28b3c8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b3cc: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x28b3ccu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x396270u));
    // 0x28b3d0: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x28b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x28b3d4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x28b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x28b3d8: 0x24a76280  addiu       $a3, $a1, 0x6280
    ctx->pc = 0x28b3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 25216));
    // 0x28b3dc: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x28b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b3e0: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x28b3e0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x396280u));
    // 0x28b3e4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x28b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x28b3e8: 0x82485de9  lb          $t0, 0x5DE9($s2)
    ctx->pc = 0x28b3e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24041)));
    // 0x28b3ec: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x28b3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x28b3f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b3f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b3f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b3f8: 0x14670038  bne         $v1, $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x28B3F8u;
    {
        const bool branch_taken_0x28b3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x28b3f8) {
            ctx->pc = 0x28B4DCu;
            goto label_28b4dc;
        }
    }
    ctx->pc = 0x28B400u;
    // 0x28b400: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b404: 0x8c232038  lw          $v1, 0x2038($at)
    ctx->pc = 0x28b404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622038u));
    // 0x28b408: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28B408u;
    {
        const bool branch_taken_0x28b408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b408) {
            ctx->pc = 0x28B458u;
            goto label_28b458;
        }
    }
    ctx->pc = 0x28B410u;
    // 0x28b410: 0x24027100  addiu       $v0, $zero, 0x7100
    ctx->pc = 0x28b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x28b414: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b41c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x28b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b420: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b420u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b424: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B424u;
    SET_GPR_U32(ctx, 31, 0x28B42Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B424u, 0x28B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B42Cu;
label_28b42c:
    // 0x28b42c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b42cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b430: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B430u;
    SET_GPR_U32(ctx, 31, 0x28B438u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B430u, 0x28B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B438u;
label_28b438:
    // 0x28b438: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b438u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b43c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b440: 0xac232048  sw          $v1, 0x2048($at)
    ctx->pc = 0x28b440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622048u, _value); } while (0);
    // 0x28b444: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b448: 0x8c2b2038  lw          $t3, 0x2038($at)
    ctx->pc = 0x28b448u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x622038u));
    // 0x28b44c: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x28b44cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x28b450: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b454: 0xac2a2038  sw          $t2, 0x2038($at)
    ctx->pc = 0x28b454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
label_28b458:
    // 0x28b458: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b45c: 0x8c262048  lw          $a2, 0x2048($at)
    ctx->pc = 0x28b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622048u));
    // 0x28b460: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x28b464: 0x34e30011  ori         $v1, $a3, 0x11
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x28b468: 0x10c30148  beq         $a2, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x28B468u;
    {
        const bool branch_taken_0x28b468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b468) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B470u;
    // 0x28b470: 0x2408008d  addiu       $t0, $zero, 0x8D
    ctx->pc = 0x28b470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x28b474: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b478: 0x8c262048  lw          $a2, 0x2048($at)
    ctx->pc = 0x28b478u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622048u));
    // 0x28b47c: 0xa0c8011c  sb          $t0, 0x11C($a2)
    ctx->pc = 0x28b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x28b480: 0x8e435dc0  lw          $v1, 0x5DC0($s2)
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x28b484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b488: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x28B488u;
    {
        const bool branch_taken_0x28b488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b488) {
            ctx->pc = 0x28B4C0u;
            goto label_28b4c0;
        }
    }
    ctx->pc = 0x28B490u;
    // 0x28b490: 0x82485dea  lb          $t0, 0x5DEA($s2)
    ctx->pc = 0x28b490u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28b494: 0x83e3c  dsll32      $a3, $t0, 24
    ctx->pc = 0x28b494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 24));
    // 0x28b498: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x28b498u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x28b49c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B49Cu;
    {
        const bool branch_taken_0x28b49c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b49c) {
            ctx->pc = 0x28B4C0u;
            goto label_28b4c0;
        }
    }
    ctx->pc = 0x28B4A4u;
    // 0x28b4a4: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x28b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x28b4a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28b4a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b4ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b4b0: 0x8c232048  lw          $v1, 0x2048($at)
    ctx->pc = 0x28b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622048u));
    // 0x28b4b4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x28b4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x28b4b8: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x28B4B8u;
    {
        const bool branch_taken_0x28b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4b8) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B4C0u;
label_28b4c0:
    // 0x28b4c0: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28b4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x28b4c4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x28b4c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b4c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b4cc: 0x8c272048  lw          $a3, 0x2048($at)
    ctx->pc = 0x28b4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x622048u));
    // 0x28b4d0: 0xe4e1009c  swc1        $f1, 0x9C($a3)
    ctx->pc = 0x28b4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 156), bits); }
    // 0x28b4d4: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x28B4D4u;
    {
        const bool branch_taken_0x28b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4d4) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B4DCu;
label_28b4dc:
    // 0x28b4dc: 0x82465de9  lb          $a2, 0x5DE9($s2)
    ctx->pc = 0x28b4dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24041)));
    // 0x28b4e0: 0x6463c  dsll32      $t0, $a2, 24
    ctx->pc = 0x28b4e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28b4e4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x28b4e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x28b4e8: 0x15000128  bnez        $t0, . + 4 + (0x128 << 2)
    ctx->pc = 0x28B4E8u;
    {
        const bool branch_taken_0x28b4e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b4e8) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B4F0u;
    // 0x28b4f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b4f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x28b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28b4f8: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x28b4f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28b4fc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x28b4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28b500: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x28b500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x28b504: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x28b504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b508: 0x69a00  sll         $s3, $a2, 8
    ctx->pc = 0x28b508u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x28b50c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b510: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x28b510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28b514: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x28b514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x28b518: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x28b518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28b51c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x28b51cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28b520: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x28b520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x28b524: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x28b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x28b528: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x28b528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28b52c: 0x7ea821  addu        $s5, $v1, $fp
    ctx->pc = 0x28b52cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x28b530: 0x32a6ff00  andi        $a2, $s5, 0xFF00
    ctx->pc = 0x28b530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x28b534: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x28b534u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x28b538: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x28b538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28b53c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b540: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x28b540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b544: 0x30d600ff  andi        $s6, $a2, 0xFF
    ctx->pc = 0x28b544u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b548: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x28b548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x28b54c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b550: 0x1468010e  bne         $v1, $t0, . + 4 + (0x10E << 2)
    ctx->pc = 0x28B550u;
    {
        const bool branch_taken_0x28b550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x28b550) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B558u;
    // 0x28b558: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b55c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x28b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28b560: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28b560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28b564: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x28b564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28b568: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x28b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x28b56c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x28b56cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b570: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x28b570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28b574: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b578: 0x3b200  sll         $s6, $v1, 8
    ctx->pc = 0x28b578u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28b57c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b580: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x28b584: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x28b584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x28b588: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28b58c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x28b58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b590: 0x30d5ff00  andi        $s5, $a2, 0xFF00
    ctx->pc = 0x28b590u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x28b594: 0x153202  srl         $a2, $s5, 8
    ctx->pc = 0x28b594u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
    // 0x28b598: 0x2c62021  addu        $a0, $s6, $a2
    ctx->pc = 0x28b598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x28b59c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b5a0: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x28b5a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b5a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x28b5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28b5a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b5ac: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x28b5acu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28b5b0: 0x0  nop
    ctx->pc = 0x28b5b0u;
    // NOP
    // 0x28b5b4: 0x0  nop
    ctx->pc = 0x28b5b4u;
    // NOP
    // 0x28b5b8: 0x2010  mfhi        $a0
    ctx->pc = 0x28b5b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x28b5bc: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x28b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x28b5c0: 0x8e465dc0  lw          $a2, 0x5DC0($s2)
    ctx->pc = 0x28b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x28b5c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5c8: 0x10c30040  beq         $a2, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x28B5C8u;
    {
        const bool branch_taken_0x28b5c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b5c8) {
            ctx->pc = 0x28B6CCu;
            goto label_28b6cc;
        }
    }
    ctx->pc = 0x28B5D0u;
    // 0x28b5d0: 0x82475dea  lb          $a3, 0x5DEA($s2)
    ctx->pc = 0x28b5d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28b5d4: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x28b5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x28b5d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b5d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b5dc: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x28B5DCu;
    {
        const bool branch_taken_0x28b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b5dc) {
            ctx->pc = 0x28B6CCu;
            goto label_28b6cc;
        }
    }
    ctx->pc = 0x28B5E4u;
    // 0x28b5e4: 0x8fa7014c  lw          $a3, 0x14C($sp)
    ctx->pc = 0x28b5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x28b5e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b5ec: 0x10e60027  beq         $a3, $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x28B5ECu;
    {
        const bool branch_taken_0x28b5ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b5ec) {
            ctx->pc = 0x28B68Cu;
            goto label_28b68c;
        }
    }
    ctx->pc = 0x28B5F4u;
    // 0x28b5f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5f8: 0x10e30014  beq         $a3, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B5F8u;
    {
        const bool branch_taken_0x28b5f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b5f8) {
            ctx->pc = 0x28B64Cu;
            goto label_28b64c;
        }
    }
    ctx->pc = 0x28B600u;
    // 0x28b600: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B600u;
    {
        const bool branch_taken_0x28b600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b600) {
            ctx->pc = 0x28B610u;
            goto label_28b610;
        }
    }
    ctx->pc = 0x28B608u;
    // 0x28b608: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x28B608u;
    {
        const bool branch_taken_0x28b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b608) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B610u;
label_28b610:
    // 0x28b610: 0x24026901  addiu       $v0, $zero, 0x6901
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x28b614: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b61c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b620: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b620u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b624: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B624u;
    SET_GPR_U32(ctx, 31, 0x28B62Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B624u, 0x28B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B62Cu;
label_28b62c:
    // 0x28b62c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b62cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b630: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b634: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B634u;
    SET_GPR_U32(ctx, 31, 0x28B63Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B634u, 0x28B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B63Cu;
label_28b63c:
    // 0x28b63c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b640: 0xac22204c  sw          $v0, 0x204C($at)
    ctx->pc = 0x28b640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b644: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x28B644u;
    {
        const bool branch_taken_0x28b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b644) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B64Cu;
label_28b64c:
    // 0x28b64c: 0x24086a01  addiu       $t0, $zero, 0x6A01
    ctx->pc = 0x28b64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27137));
    // 0x28b650: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b654: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b658: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x28b658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b65c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x28b65cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b660: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b660u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b664: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B664u;
    SET_GPR_U32(ctx, 31, 0x28B66Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B664u, 0x28B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B66Cu;
label_28b66c:
    // 0x28b66c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b670: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B670u;
    SET_GPR_U32(ctx, 31, 0x28B678u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B670u, 0x28B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B678u;
label_28b678:
    // 0x28b678: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b678u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b67c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b680: 0xac23204c  sw          $v1, 0x204C($at)
    ctx->pc = 0x28b680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b684: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x28B684u;
    {
        const bool branch_taken_0x28b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b684) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B68Cu;
label_28b68c:
    // 0x28b68c: 0x24066b01  addiu       $a2, $zero, 0x6B01
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27393));
    // 0x28b690: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b698: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b69c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28b69cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b6a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b6a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b6a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B6A4u;
    SET_GPR_U32(ctx, 31, 0x28B6ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B6A4u, 0x28B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6ACu;
label_28b6ac:
    // 0x28b6ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b6acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b6b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B6B0u;
    SET_GPR_U32(ctx, 31, 0x28B6B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B6B0u, 0x28B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6B8u;
label_28b6b8:
    // 0x28b6b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b6b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b6bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b6c0: 0xac23204c  sw          $v1, 0x204C($at)
    ctx->pc = 0x28b6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b6c4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28B6C4u;
    {
        const bool branch_taken_0x28b6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6c4) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B6CCu;
label_28b6cc:
    // 0x28b6cc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x28b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x28b6d0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b6d4: 0x1068002a  beq         $v1, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x28B6D4u;
    {
        const bool branch_taken_0x28b6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x28b6d4) {
            ctx->pc = 0x28B780u;
            goto label_28b780;
        }
    }
    ctx->pc = 0x28B6DCu;
    // 0x28b6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b6e0: 0x10670016  beq         $v1, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x28B6E0u;
    {
        const bool branch_taken_0x28b6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x28b6e0) {
            ctx->pc = 0x28B73Cu;
            goto label_28b73c;
        }
    }
    ctx->pc = 0x28B6E8u;
    // 0x28b6e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B6E8u;
    {
        const bool branch_taken_0x28b6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6e8) {
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B6F0u;
    // 0x28b6f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28B6F0u;
    {
        const bool branch_taken_0x28b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6f0) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B6F8u;
label_28b6f8:
    // 0x28b6f8: 0x24066902  addiu       $a2, $zero, 0x6902
    ctx->pc = 0x28b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26882));
    // 0x28b6fc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b6fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b704: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x28b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b708: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b708u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b70c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b70cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b710: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B710u;
    SET_GPR_U32(ctx, 31, 0x28B718u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B710u, 0x28B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B718u;
label_28b718:
    // 0x28b718: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b71c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b71cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b720: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B720u;
    SET_GPR_U32(ctx, 31, 0x28B728u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B720u, 0x28B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B728u;
label_28b728:
    // 0x28b728: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b728u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b72c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b730: 0xac26204c  sw          $a2, 0x204C($at)
    ctx->pc = 0x28b730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b734: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28B734u;
    {
        const bool branch_taken_0x28b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b734) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B73Cu;
label_28b73c:
    // 0x28b73c: 0x24026a02  addiu       $v0, $zero, 0x6A02
    ctx->pc = 0x28b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27138));
    // 0x28b740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b744: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b748: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x28b748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b74c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x28b74cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b750: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b750u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b754: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B754u;
    SET_GPR_U32(ctx, 31, 0x28B75Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B754u, 0x28B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B75Cu;
label_28b75c:
    // 0x28b75c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b75cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b760: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b764: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B764u;
    SET_GPR_U32(ctx, 31, 0x28B76Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B764u, 0x28B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B76Cu;
label_28b76c:
    // 0x28b76c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b76cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b770: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b774: 0xac23204c  sw          $v1, 0x204C($at)
    ctx->pc = 0x28b774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b778: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B778u;
    {
        const bool branch_taken_0x28b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b778) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B780u;
label_28b780:
    // 0x28b780: 0x24066b02  addiu       $a2, $zero, 0x6B02
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27394));
    // 0x28b784: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b788: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b78c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28b78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b790: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b790u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b794: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B794u;
    SET_GPR_U32(ctx, 31, 0x28B79Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B794u, 0x28B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B79Cu;
label_28b79c:
    // 0x28b79c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b79cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b7a0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28b7a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b7a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B7A4u;
    SET_GPR_U32(ctx, 31, 0x28B7ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B7A4u, 0x28B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7ACu;
label_28b7ac:
    // 0x28b7ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b7b0: 0xac22204c  sw          $v0, 0x204C($at)
    ctx->pc = 0x28b7b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
label_28b7b4:
    // 0x28b7b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b7b8: 0x8c23204c  lw          $v1, 0x204C($at)
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62204Cu));
    // 0x28b7bc: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x28b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x28b7c0: 0x34e80011  ori         $t0, $a3, 0x11
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x28b7c4: 0x10680071  beq         $v1, $t0, . + 4 + (0x71 << 2)
    ctx->pc = 0x28B7C4u;
    {
        const bool branch_taken_0x28b7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x28b7c4) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B7CCu;
    // 0x28b7cc: 0x2408008d  addiu       $t0, $zero, 0x8D
    ctx->pc = 0x28b7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x28b7d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b7d4: 0x8c26204c  lw          $a2, 0x204C($at)
    ctx->pc = 0x28b7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x62204Cu));
    // 0x28b7d8: 0xa0c8011c  sb          $t0, 0x11C($a2)
    ctx->pc = 0x28b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x28b7dc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x28B7DCu;
    {
        const bool branch_taken_0x28b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7dc) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B7E4u;
label_28b7e4:
    // 0x28b7e4: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x28b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b7e8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x28b7ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b7f0: 0x0  nop
    ctx->pc = 0x28b7f0u;
    // NOP
    // 0x28b7f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28b7f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b7f8: 0x0  nop
    ctx->pc = 0x28b7f8u;
    // NOP
    // 0x28b7fc: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x28B7FCu;
    {
        const bool branch_taken_0x28b7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b7fc) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B804u;
    // 0x28b804: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b808: 0x8c222038  lw          $v0, 0x2038($at)
    ctx->pc = 0x28b808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622038u));
    // 0x28b80c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b810: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28B810u;
    {
        const bool branch_taken_0x28b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28b810) {
            ctx->pc = 0x28B86Cu;
            goto label_28b86c;
        }
    }
    ctx->pc = 0x28B818u;
    // 0x28b818: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b81c: 0x24080071  addiu       $t0, $zero, 0x71
    ctx->pc = 0x28b81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x28b820: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b824: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b828: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x28b828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b82c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b830: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b830u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b834: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B834u;
    SET_GPR_U32(ctx, 31, 0x28B83Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B834u, 0x28B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B83Cu;
label_28b83c:
    // 0x28b83c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b83cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b840: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b844: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b848: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b84c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b850: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b854: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x28b854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x28b858: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B858u;
    SET_GPR_U32(ctx, 31, 0x28B860u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B858u, 0x28B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B860u;
label_28b860:
    // 0x28b860: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b860u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b864: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b868: 0xac202038  sw          $zero, 0x2038($at)
    ctx->pc = 0x28b868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
label_28b86c:
    // 0x28b86c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b870: 0x24080069  addiu       $t0, $zero, 0x69
    ctx->pc = 0x28b870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x28b874: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b878: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b87c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b87cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b880: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b884: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b888: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B888u;
    SET_GPR_U32(ctx, 31, 0x28B890u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B888u, 0x28B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B890u;
label_28b890:
    // 0x28b890: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b890u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b894: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b898: 0x2408006a  addiu       $t0, $zero, 0x6A
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x28b89c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b89cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b8a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8a4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b8a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b8a8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8ac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b8acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b8b0: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B8B0u;
    SET_GPR_U32(ctx, 31, 0x28B8B8u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B8B0u, 0x28B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8B8u;
label_28b8b8:
    // 0x28b8b8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28b8b8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b8bc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8c0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x28b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x28b8c4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b8c8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28b8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8cc: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x28b8ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b8d0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8d4: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B8D4u;
    SET_GPR_U32(ctx, 31, 0x28B8DCu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B8D4u, 0x28B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8DCu;
label_28b8dc:
    // 0x28b8dc: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b8dcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b8e0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28B8E0u;
    {
        const bool branch_taken_0x28b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8e0) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B8E8u;
label_28b8e8:
    // 0x28b8e8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8ec: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x28b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x28b8f0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b8f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b8f4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8f8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x28b8f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b8fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b900: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B900u;
    SET_GPR_U32(ctx, 31, 0x28B908u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B900u, 0x28B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B908u;
label_28b908:
    // 0x28b908: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28b908u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b90c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28b90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b910: 0x240b006a  addiu       $t3, $zero, 0x6A
    ctx->pc = 0x28b910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x28b914: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x28b914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28b918: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b91c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b920: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b924: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x28b924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b928: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x28b928u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b92c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B92Cu;
    SET_GPR_U32(ctx, 31, 0x28B934u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B92Cu, 0x28B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B934u;
label_28b934:
    // 0x28b934: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b934u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b938: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b93c: 0x240a006b  addiu       $t2, $zero, 0x6B
    ctx->pc = 0x28b93cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x28b940: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x28b940u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28b944: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b948: 0x71802e28  paddub      $a1, $t4, $zero
    ctx->pc = 0x28b948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x28b94c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b950: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x28b950u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b954: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B954u;
    SET_GPR_U32(ctx, 31, 0x28B95Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B954u, 0x28B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B95Cu;
label_28b95c:
    // 0x28b95c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b95cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b960: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b964: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x28b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x28b968: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b96c: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b970: 0x71602e28  paddub      $a1, $t3, $zero
    ctx->pc = 0x28b970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28b974: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b978: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B978u;
    SET_GPR_U32(ctx, 31, 0x28B980u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B978u, 0x28B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B980u;
label_28b980:
    // 0x28b980: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28b980u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b984: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b988: 0xac202038  sw          $zero, 0x2038($at)
    ctx->pc = 0x28b988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
label_28b98c:
    // 0x28b98c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x28b98cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b990: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28b990u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b994: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28b994u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b998: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28b998u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b99c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28b99cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b9a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b9a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b9a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b9a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b9a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b9b4: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x28b9b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x28b9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B9C0u;
}
