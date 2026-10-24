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

// Function: entry_0028a4d8
// Address: 0x28a4d8 - 0x28a688
void entry_0028a4d8_0x28a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a4d8_0x28a4d8");
#endif

    switch (ctx->pc) {
        case 0x28a558u: goto label_28a558;
        case 0x28a5c8u: goto label_28a5c8;
        case 0x28a648u: goto label_28a648;
        default: break;
    }

    ctx->pc = 0x28a4d8u;

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
    ctx->pc = 0x28a688u;
}
