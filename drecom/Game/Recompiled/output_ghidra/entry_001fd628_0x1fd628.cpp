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

// Function: entry_001fd628
// Address: 0x1fd628 - 0x1fd8d8
void entry_001fd628_0x1fd628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd628_0x1fd628");
#endif

    switch (ctx->pc) {
        case 0x1fd7b0u: goto label_1fd7b0;
        default: break;
    }

    ctx->pc = 0x1fd628u;

    // 0x1fd628: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd62c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x1fd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x1fd630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd634: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd638: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fd638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fd63c: 0x34431400  ori         $v1, $v0, 0x1400
    ctx->pc = 0x1fd63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1fd640: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd644: 0x9042036a  lbu         $v0, 0x36A($v0)
    ctx->pc = 0x1fd644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 874)));
    // 0x1fd648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd64c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1fd64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1fd650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd654: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd65c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fd65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fd660: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd664: 0x90420342  lbu         $v0, 0x342($v0)
    ctx->pc = 0x1fd664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 834)));
    // 0x1fd668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd66c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1fd66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1fd670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd674: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd678: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1fd678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1fd67c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1fd67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd680: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd684: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fd684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fd688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd68c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1fd68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fd690: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd694: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd694u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd698: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1fd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1fd69c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1fd69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd6a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6a4: 0x90420347  lbu         $v0, 0x347($v0)
    ctx->pc = 0x1fd6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 839)));
    // 0x1fd6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd6ac: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1fd6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1fd6b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd6b8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1fd6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1fd6bc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1fd6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd6c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6c4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fd6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fd6c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd6cc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1fd6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd6d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6d4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fd6d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fd6d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd6dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fd6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fd6e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fd6e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fd6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fd6e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6ec: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fd6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fd6f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd6f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fd6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fd6f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd6fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fd6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd708: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fd708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fd70c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd710: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1fd710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1fd714: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1fd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd718: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd71c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd720: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd724: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd72c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd730: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1fd730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd734: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1fd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd738: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd73c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd740: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd744: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd74c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd750: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fd750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1fd754: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd758: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x1fd758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd75c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd764: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd76c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd774: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1fd774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd778: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd77c: 0x8c420324  lw          $v0, 0x324($v0)
    ctx->pc = 0x1fd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fd780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd78c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd798: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1fd798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1fd79c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7a0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd7a4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1fd7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd7a8: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x1FD7A8u;
    SET_GPR_U32(ctx, 31, 0x1FD7B0u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x1FD7A8u, 0x1FD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7B0u;
label_1fd7b0:
    // 0x1fd7b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1fd7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fd7b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1fd7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1fd7b8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x1fd7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x1fd7bc: 0x12030081  beq         $s0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1FD7BCu;
    {
        const bool branch_taken_0x1fd7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fd7bc) {
            ctx->pc = 0x1FD9C4u;
            return;
        }
    }
    ctx->pc = 0x1FD7C4u;
    // 0x1fd7c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7c8: 0x8c630328  lw          $v1, 0x328($v1)
    ctx->pc = 0x1fd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x1fd7cc: 0xae030328  sw          $v1, 0x328($s0)
    ctx->pc = 0x1fd7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 3));
    // 0x1fd7d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7d4: 0x8c63032c  lw          $v1, 0x32C($v1)
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x1fd7d8: 0xae03032c  sw          $v1, 0x32C($s0)
    ctx->pc = 0x1fd7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 3));
    // 0x1fd7dc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7e0: 0x906302aa  lbu         $v1, 0x2AA($v1)
    ctx->pc = 0x1fd7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1fd7e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd7e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd7ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd7f0: 0xa20302aa  sb          $v1, 0x2AA($s0)
    ctx->pc = 0x1fd7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fd7f4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7f8: 0x906302a8  lbu         $v1, 0x2A8($v1)
    ctx->pc = 0x1fd7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x1fd7fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd800: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fd800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fd804: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd808: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x1fd808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fd80c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd810: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1fd810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1fd814: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1fd814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1fd818: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd81c: 0xc48002d0  lwc1        $f0, 0x2D0($a0)
    ctx->pc = 0x1fd81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd824: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1fd824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x1fd828: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd82c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1fd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1fd830: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1fd830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1fd834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd838: 0xc48002d4  lwc1        $f0, 0x2D4($a0)
    ctx->pc = 0x1fd838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd83c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd83cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd840: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1fd840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1fd844: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd848: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1fd84c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1fd84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1fd850: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd854: 0xc48002d8  lwc1        $f0, 0x2D8($a0)
    ctx->pc = 0x1fd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd85c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1fd85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x1fd860: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd864: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1fd864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd868: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1fd868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x1fd86c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd870: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fd870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd874: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1fd874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fd878: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fd878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fd87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd880: 0x0  nop
    ctx->pc = 0x1fd880u;
    // NOP
    // 0x1fd884: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fd884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd888: 0x0  nop
    ctx->pc = 0x1fd888u;
    // NOP
    // 0x1fd88c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD88Cu;
    {
        const bool branch_taken_0x1fd88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd88c) {
            ctx->pc = 0x1FD8D8u;
            return;
        }
    }
    ctx->pc = 0x1FD894u;
    // 0x1fd894: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd898: 0xc4610338  lwc1        $f1, 0x338($v1)
    ctx->pc = 0x1fd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd89c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd8a0: 0xc460033c  lwc1        $f0, 0x33C($v1)
    ctx->pc = 0x1fd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fd8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fd8a8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1fd8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1fd8ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd8b0: 0x0  nop
    ctx->pc = 0x1fd8b0u;
    // NOP
    // 0x1fd8b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1fd8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fd8b8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1fd8bc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1fd8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1fd8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd8c4: 0x0  nop
    ctx->pc = 0x1fd8c4u;
    // NOP
    // 0x1fd8c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fd8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fd8cc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x1fd8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x1fd8d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD8D0u;
    {
        const bool branch_taken_0x1fd8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8d0) {
            ctx->pc = 0x1FD8F4u;
            return;
        }
    }
    ctx->pc = 0x1FD8D8u;
}
