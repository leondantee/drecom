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

// Function: entry_00289318
// Address: 0x289318 - 0x28977c
void entry_00289318_0x289318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289318_0x289318");
#endif

    switch (ctx->pc) {
        case 0x2893d8u: goto label_2893d8;
        case 0x289448u: goto label_289448;
        case 0x2894ecu: goto label_2894ec;
        case 0x289540u: goto label_289540;
        case 0x289664u: goto label_289664;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896d4u: goto label_2896d4;
        case 0x289704u: goto label_289704;
        default: break;
    }

    ctx->pc = 0x289318u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x28977Cu;
}
