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

// Function: entry_003344d8
// Address: 0x3344d8 - 0x3346a8
void entry_003344d8_0x3344d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003344d8_0x3344d8");
#endif

    switch (ctx->pc) {
        case 0x33457cu: goto label_33457c;
        case 0x3345ecu: goto label_3345ec;
        case 0x334668u: goto label_334668;
        default: break;
    }

    ctx->pc = 0x3344d8u;

    // 0x3344d8: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x3344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x3344dc: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x3344dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3344e0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3344e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3344e4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x3344e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3344e8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x3344e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x3344ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x3344ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3344f0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3344f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3344f4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3344f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3344f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3344f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3344fc: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x3344fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334500: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x334500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x334504: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x334504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x334508: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x334508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x33450c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x33450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x334510: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x334510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334514: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x334514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334518: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x334518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33451c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334524: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x334524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x334528: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x334528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x33452c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x334530: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x334530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334534: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x334534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334538: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x334538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33453c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334540: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x334544: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x334544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x334548: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x334548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33454c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334550: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x334550u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x334554: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x334558: 0x24662730  addiu       $a2, $v1, 0x2730
    ctx->pc = 0x334558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x33455c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x33455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x334560: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334564: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x334564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334568: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33456c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x33456cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334570: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x334570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334574: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334574u;
    SET_GPR_U32(ctx, 31, 0x33457Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x33457Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33457Cu) { return; }
    ctx->pc = 0x33457Cu;
label_33457c:
    // 0x33457c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33457cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334580: 0x8c2332c0  lw          $v1, 0x32C0($at)
    ctx->pc = 0x334580u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334584: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x334584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x334588: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x334588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33458c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x33458cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x334590: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x334590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334594: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x334594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x334598: 0x21b78  dsll        $v1, $v0, 13
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 13);
    // 0x33459c: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x33459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x3345a0: 0x66102d  daddu       $v0, $v1, $a2
    ctx->pc = 0x3345a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3345a4: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x3345a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x3345a8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x3345ac: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x3345acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x3345b0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x3345b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x3345b4: 0x3446001f  ori         $a2, $v0, 0x1F
    ctx->pc = 0x3345b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x3345b8: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x3345b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3345bc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x3345bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3345c0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x3345c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x3345c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3345c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3345c8: 0x493025  or          $a2, $v0, $t1
    ctx->pc = 0x3345c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x3345cc: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x3345ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3345d0: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x3345d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3345d4: 0xfd070018  sd          $a3, 0x18($t0)
    ctx->pc = 0x3345d4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 7));
    // 0x3345d8: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x3345d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3345dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3345dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3345e0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3345e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3345e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3345E4u;
    SET_GPR_U32(ctx, 31, 0x3345ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3345E4u, 0x3345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345ECu;
label_3345ec:
    // 0x3345ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3345ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3345f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3345f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3345f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3345f8: 0x34441009  ori         $a0, $v0, 0x1009
    ctx->pc = 0x3345f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x3345fc: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x3345fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x334600: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x334600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334604: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x334604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x334608: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x334608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x33460c: 0x33938  dsll        $a3, $v1, 4
    ctx->pc = 0x33460cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 4);
    // 0x334610: 0x34e8000a  ori         $t0, $a3, 0xA
    ctx->pc = 0x334610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x334614: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x334614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334618: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x334618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x33461c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x33461cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x334620: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x334620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x334624: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x334624u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x334628: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x334628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33462c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x33462cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x334630: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334630u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334634: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x334634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x334638: 0x481825  or          $v1, $v0, $t0
    ctx->pc = 0x334638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x33463c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334640: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334644: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334648: 0x230bc  dsll32      $a2, $v0, 2
    ctx->pc = 0x334648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 2));
    // 0x33464c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x33464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334650: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x334650u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x334654: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334658: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33465c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x33465cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x334660: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334660u;
    SET_GPR_U32(ctx, 31, 0x334668u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334660u, 0x334668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334668u;
label_334668:
    // 0x334668: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x334668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x33466c: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x33466cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x334670: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x334670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x334674: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x334674u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334678: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33467c: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x33467cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334680: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x334680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x334684: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334688: 0xac2232c0  sw          $v0, 0x32C0($at)
    ctx->pc = 0x334688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C0u, _value); } while (0);
    // 0x33468c: 0x26e70008  addiu       $a3, $s7, 0x8
    ctx->pc = 0x33468cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x334690: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x334690u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334694: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x334694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x334698: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x334698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33469c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x33469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3346a0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x3346a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3346a4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x3346a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3346a8u;
}
