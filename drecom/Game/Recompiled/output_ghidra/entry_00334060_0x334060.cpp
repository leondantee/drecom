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

// Function: entry_00334060
// Address: 0x334060 - 0x334208
void entry_00334060_0x334060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334060_0x334060");
#endif

    switch (ctx->pc) {
        case 0x334098u: goto label_334098;
        case 0x3340d8u: goto label_3340d8;
        case 0x334148u: goto label_334148;
        case 0x3341c4u: goto label_3341c4;
        default: break;
    }

    ctx->pc = 0x334060u;

    // 0x334060: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x334060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x334064: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x334064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334068: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x334068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33406c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x33406cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x334070: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x334070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334074: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x334074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x334078: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x334078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33407c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334080: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x334080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334084: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334088: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x334088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x33408c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x33408cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334090: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334090u;
    SET_GPR_U32(ctx, 31, 0x334098u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x334098u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x334098u) { return; }
    ctx->pc = 0x334098u;
label_334098:
    // 0x334098: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33409c: 0x8c232720  lw          $v1, 0x2720($at)
    ctx->pc = 0x33409cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892720u));
    // 0x3340a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3340a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3340a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3340a8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x3340a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3340ac: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3340acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3340b0: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x3340b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x3340b4: 0x24662730  addiu       $a2, $v1, 0x2730
    ctx->pc = 0x3340b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x3340b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3340b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3340bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3340bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3340c0: 0x8c2932c0  lw          $t1, 0x32C0($at)
    ctx->pc = 0x3340c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x8932C0u));
    // 0x3340c4: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x3340c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x3340c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3340c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3340cc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3340ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3340d0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x3340D0u;
    SET_GPR_U32(ctx, 31, 0x3340D8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x3340D8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3340D8u) { return; }
    ctx->pc = 0x3340D8u;
label_3340d8:
    // 0x3340d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3340d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3340dc: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x3340dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x3340e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3340e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3340e4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3340e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3340e8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x3340e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3340ec: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3340ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3340f0: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x3340f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3340f4: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x3340f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
    // 0x3340f8: 0x21cbe  dsrl32      $v1, $v0, 18
    ctx->pc = 0x3340f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x3340fc: 0x67202d  daddu       $a0, $v1, $a3
    ctx->pc = 0x3340fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x334100: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x334100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x334104: 0x30883fff  andi        $t0, $a0, 0x3FFF
    ctx->pc = 0x334104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x334108: 0x8197c  dsll32      $v1, $t0, 5
    ctx->pc = 0x334108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 5));
    // 0x33410c: 0x3c08fff8  lui         $t0, 0xFFF8
    ctx->pc = 0x33410cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65528 << 16));
    // 0x334110: 0x3507001f  ori         $a3, $t0, 0x1F
    ctx->pc = 0x334110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)31);
    // 0x334114: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x334114u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x334118: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x334118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33411c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33411cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x334120: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x334120u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x334124: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x334124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x334128: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x334128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x33412c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x334130: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x334130u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x334134: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x334134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334138: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x334138u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33413c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33413cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x334140: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334140u;
    SET_GPR_U32(ctx, 31, 0x334148u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334140u, 0x334148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334148u;
label_334148:
    // 0x334148: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33414c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x33414cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x334150: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x334150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x334154: 0x34661009  ori         $a2, $v1, 0x1009
    ctx->pc = 0x334154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x334158: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x334158u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x33415c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334164: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334168: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x334168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x33416c: 0x34c3000a  ori         $v1, $a2, 0xA
    ctx->pc = 0x33416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x334170: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x334170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334178: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x33417c: 0x23bb8  dsll        $a3, $v0, 14
    ctx->pc = 0x33417cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 14);
    // 0x334180: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x334180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x334184: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x334184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334188: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x334188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33418c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33418cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x334190: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x334190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x334194: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x334194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334198: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x334198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33419c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3341a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3341a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3341a4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3341a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x3341a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3341a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3341ac: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x3341acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x3341b0: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x3341b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3341b4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3341b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3341b8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3341b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x3341bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3341BCu;
    SET_GPR_U32(ctx, 31, 0x3341C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3341BCu, 0x3341C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341C4u;
label_3341c4:
    // 0x3341c4: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x3341c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3341c8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x3341c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3341cc: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x3341ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3341d0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x3341d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3341d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3341d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3341d8: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x3341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x3341dc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x3341dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3341e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3341e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3341e4: 0xac2232c0  sw          $v0, 0x32C0($at)
    ctx->pc = 0x3341e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C0u, _value); } while (0);
    // 0x3341e8: 0x26f50008  addiu       $s5, $s7, 0x8
    ctx->pc = 0x3341e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x3341ec: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x3341ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x3341f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3341f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3341f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3341f8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3341f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3341fc: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3341fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334200: 0x73c09e28  paddub      $s3, $fp, $zero
    ctx->pc = 0x334200u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x334204: 0x0  nop
    ctx->pc = 0x334204u;
    // NOP
    ctx->pc = 0x334208u;
}
