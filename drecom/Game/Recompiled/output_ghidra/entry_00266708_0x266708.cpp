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

// Function: entry_00266708
// Address: 0x266708 - 0x2668bc
void entry_00266708_0x266708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266708_0x266708");
#endif

    ctx->pc = 0x266708u;

    // 0x266708: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x266708u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x26670c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26670cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266710: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266718: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26671c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266724: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266728: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x26672c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x26672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266734: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x266734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x266738: 0x30723fff  andi        $s2, $v1, 0x3FFF
    ctx->pc = 0x266738u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x26673c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26673cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266740: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266748: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26674c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26674cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266754: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266758: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x26675c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x26675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266764: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x266764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266768: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26676c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x26676cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266770: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x266770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266774: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266778: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x266778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26677c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x26677cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x266780: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266784: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x266788: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x266788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x26678c: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x26678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x266790: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266794: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x266794u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x266798: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x266798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x26679c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26679cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2667a0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2667a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2667a4: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x2667a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x2667a8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2667a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2667ac: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x2667acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2667b0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2667b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2667b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2667b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2667b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2667bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2667bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2667c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2667c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2667c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2667c8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2667c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2667cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2667ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2667d0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2667d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2667d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2667d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2667d8: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x2667d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2667dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2667dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2667e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2667e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2667e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2667e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2667e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2667ec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2667ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2667f0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2667f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2667f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2667f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2667f8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2667f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2667fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2667fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x266800: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x266800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x266804: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266808: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x266808u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x26680c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x26680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x266810: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x266810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x266814: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x266818: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x266818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x26681c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x26681cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x266820: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x266820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266824: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26682c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266830: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x266830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266838: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x26683c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x26683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x266840: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x266840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266848: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x266848u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26684c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x26684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x266850: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x266850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x266854: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x266854u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x266858: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x266858u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x26685c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x26685cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x266860: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x266860u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x266864: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x266868: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x266868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x26686c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x26686cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x266870: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x266870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x266874: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x266874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x266878: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x266878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x26687c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26687cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x266880: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x266880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x266884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x266884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x266888: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x266888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x26688c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x26688cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x266890: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x266890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x266894: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x266894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x266898: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x266898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x26689c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x26689cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2668a0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668a4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2668a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2668a8: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2668a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2668ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2668acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2668b0: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x2668b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x2668b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2668B4u;
    {
        const bool branch_taken_0x2668b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668b4) {
            ctx->pc = 0x2668D0u;
            return;
        }
    }
    ctx->pc = 0x2668BCu;
}
