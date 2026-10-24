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

// Function: entry_0033271c
// Address: 0x33271c - 0x332a98
void entry_0033271c_0x33271c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033271c_0x33271c");
#endif

    ctx->pc = 0x33271cu;

    // 0x33271c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332720: 0x8c252780  lw          $a1, 0x2780($at)
    ctx->pc = 0x332720u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892780u));
    // 0x332724: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x332724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x332728: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x332728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33272c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33272cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332730: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x332730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x332734: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x332734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x332738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33273c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x332740: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x332740u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x332744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332748: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33274c: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x33274cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892780u));
    // 0x332750: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x332750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x332754: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x332754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x332758: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x332758u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33275c: 0x3c080089  lui         $t0, 0x89
    ctx->pc = 0x33275cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)137 << 16));
    // 0x332760: 0x25092730  addiu       $t1, $t0, 0x2730
    ctx->pc = 0x332760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 10032));
    // 0x332764: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x332764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x332768: 0x90500020  lbu         $s0, 0x20($v0)
    ctx->pc = 0x332768u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x33276c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x332770: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x332770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x332774: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x332774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x332778: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x332778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x33277c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x332780: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x332780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x332784: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x332784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332788: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33278c: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x33278cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332790: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332794: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x332794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332798: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x332798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33279c: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x33279cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
    // 0x3327a0: 0x24c72730  addiu       $a3, $a2, 0x2730
    ctx->pc = 0x3327a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 10032));
    // 0x3327a4: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x3327a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3327a8: 0x95090020  lhu         $t1, 0x20($t0)
    ctx->pc = 0x3327a8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3327ac: 0x31420007  andi        $v0, $t2, 0x7
    ctx->pc = 0x3327acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
    // 0x3327b0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3327b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3327b4: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x3327b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x3327b8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3327b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3327bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3327bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3327c0: 0xa5020020  sh          $v0, 0x20($t0)
    ctx->pc = 0x3327c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x3327c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3327c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3327c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3327c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3327cc: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x3327ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x3327d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3327d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3327d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3327d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3327d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3327dc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3327dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3327e0: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3327e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x3327e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3327e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3327e8: 0x90440021  lbu         $a0, 0x21($v0)
    ctx->pc = 0x3327e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x3327ec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3327ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3327f0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x3327f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3327f4: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x3327f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3327f8: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x3327f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x3327fc: 0x1064825  or          $t1, $t0, $a2
    ctx->pc = 0x3327fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x332800: 0xa0490021  sb          $t1, 0x21($v0)
    ctx->pc = 0x332800u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 9));
    // 0x332804: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x332804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332808: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33280c: 0x8c302780  lw          $s0, 0x2780($at)
    ctx->pc = 0x33280cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x892780u));
    // 0x332810: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x332810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x332814: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x332814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x332818: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x332818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33281c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x33281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x332820: 0x24632730  addiu       $v1, $v1, 0x2730
    ctx->pc = 0x332820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x332824: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332828: 0xdd430018  ld          $v1, 0x18($t2)
    ctx->pc = 0x332828u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x33282c: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x33282cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x332830: 0x42bb8  dsll        $a1, $a0, 14
    ctx->pc = 0x332830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 14);
    // 0x332834: 0x3c07fff0  lui         $a3, 0xFFF0
    ctx->pc = 0x332834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65520 << 16));
    // 0x332838: 0x34e63fff  ori         $a2, $a3, 0x3FFF
    ctx->pc = 0x332838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16383);
    // 0x33283c: 0x664024  and         $t0, $v1, $a2
    ctx->pc = 0x33283cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x332840: 0x1054825  or          $t1, $t0, $a1
    ctx->pc = 0x332840u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x332844: 0xfd490018  sd          $t1, 0x18($t2)
    ctx->pc = 0x332844u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 9));
    // 0x332848: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x332848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x33284c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332850: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332854: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x332854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332858: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x332858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33285c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x33285cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332860: 0x3c140089  lui         $s4, 0x89
    ctx->pc = 0x332860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)137 << 16));
    // 0x332864: 0x26832730  addiu       $v1, $s4, 0x2730
    ctx->pc = 0x332864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 10032));
    // 0x332868: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x332868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33286c: 0x9493001a  lhu         $s3, 0x1A($a0)
    ctx->pc = 0x33286cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x332870: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x332870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x332874: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x332874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x332878: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x332878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x33287c: 0x2629024  and         $s2, $s3, $v0
    ctx->pc = 0x33287cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x332880: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x332880u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x332884: 0xa492001a  sh          $s2, 0x1A($a0)
    ctx->pc = 0x332884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 18));
    // 0x332888: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x332888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33288c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332890: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332894: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x332894u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332898: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x332898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33289c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3328a0: 0x3c120089  lui         $s2, 0x89
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)137 << 16));
    // 0x3328a4: 0x26422730  addiu       $v0, $s2, 0x2730
    ctx->pc = 0x3328a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10032));
    // 0x3328a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3328a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3328ac: 0x9064001b  lbu         $a0, 0x1B($v1)
    ctx->pc = 0x3328acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
    // 0x3328b0: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x3328b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x3328b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3328b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3328b8: 0x2416ffc3  addiu       $s6, $zero, -0x3D
    ctx->pc = 0x3328b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x3328bc: 0x963024  and         $a2, $a0, $s6
    ctx->pc = 0x3328bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
    // 0x3328c0: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x3328c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3328c4: 0xa065001b  sb          $a1, 0x1B($v1)
    ctx->pc = 0x3328c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 5));
    // 0x3328c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3328c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3328cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3328ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3328d0: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x3328d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892780u));
    // 0x3328d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3328d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3328d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3328d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3328dc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3328dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3328e0: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x3328e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x3328e4: 0x24742730  addiu       $s4, $v1, 0x2730
    ctx->pc = 0x3328e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x3328e8: 0x2843021  addu        $a2, $s4, $a0
    ctx->pc = 0x3328e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x3328ec: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3328ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3328f0: 0x3053000f  andi        $s3, $v0, 0xF
    ctx->pc = 0x3328f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3328f4: 0x1317b8  dsll        $v0, $s3, 30
    ctx->pc = 0x3328f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << 30);
    // 0x3328f8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3328fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3328fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x332900: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x332900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x332904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x332904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x332908: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x332908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33290c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x332910: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x332910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x332914: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x332914u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x332918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x332918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33291c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332920: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332924: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332928: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x332928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33292c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x33292cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x332930: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x332930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x332934: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x332934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x332938: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x332938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33293c: 0x90c4001c  lbu         $a0, 0x1C($a2)
    ctx->pc = 0x33293cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x332940: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x332940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x332944: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x332944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332948: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x33294c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x33294cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x332950: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x332950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x332954: 0xa0c2001c  sb          $v0, 0x1C($a2)
    ctx->pc = 0x332954u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x332958: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33295c: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x33295cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332960: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332968: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x332968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33296c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33296cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x332970: 0x24822730  addiu       $v0, $a0, 0x2730
    ctx->pc = 0x332970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x332974: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x332974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332978: 0x90c5001c  lbu         $a1, 0x1C($a2)
    ctx->pc = 0x332978u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x33297c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x33297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x332980: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x332980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x332984: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x332984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x332988: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x332988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33298c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x332990: 0xa0c2001c  sb          $v0, 0x1C($a2)
    ctx->pc = 0x332990u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x332994: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332998: 0x8c282780  lw          $t0, 0x2780($at)
    ctx->pc = 0x332998u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x892780u));
    // 0x33299c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x33299cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3329a0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x3329a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3329a4: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x3329a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3329a8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3329a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3329ac: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3329acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x3329b0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3329b4: 0x90a4001e  lbu         $a0, 0x1E($a1)
    ctx->pc = 0x3329b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3329b8: 0x3002000f  andi        $v0, $zero, 0xF
    ctx->pc = 0x3329b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x3329bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3329bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3329c0: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x3329c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x3329c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3329c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3329c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3329c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3329cc: 0xa0a2001e  sb          $v0, 0x1E($a1)
    ctx->pc = 0x3329ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x3329d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3329d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3329d4: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x3329d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x3329d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3329d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3329dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3329e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3329e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3329e4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3329e8: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x3329ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3329ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3329f0: 0x90a3001e  lbu         $v1, 0x1E($a1)
    ctx->pc = 0x3329f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3329f4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x3329f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x3329f8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x3329f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x3329fc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3329fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x332a00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x332a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x332a04: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x332a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x332a08: 0xa0a2001e  sb          $v0, 0x1E($a1)
    ctx->pc = 0x332a08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x332a0c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a10: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332a10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332a14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332a1c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x332a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x332a20: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x332a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x332a24: 0x24622730  addiu       $v0, $v1, 0x2730
    ctx->pc = 0x332a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x332a28: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x332a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x332a2c: 0x90c4001f  lbu         $a0, 0x1F($a2)
    ctx->pc = 0x332a2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
    // 0x332a30: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x332a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x332a34: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x332a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x332a38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x332a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x332a3c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x332a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332a40: 0xa0c5001f  sb          $a1, 0x1F($a2)
    ctx->pc = 0x332a40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x332a44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x332a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332a48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a4c: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332a50: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x332a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332a54: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x332a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x332a58: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x332a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332a5c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x332a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x332a60: 0x24632730  addiu       $v1, $v1, 0x2730
    ctx->pc = 0x332a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x332a64: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x332a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332a68: 0x90e5001f  lbu         $a1, 0x1F($a3)
    ctx->pc = 0x332a68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 31)));
    // 0x332a6c: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x332a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x332a70: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x332a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x332a74: 0x2403ff1f  addiu       $v1, $zero, -0xE1
    ctx->pc = 0x332a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x332a78: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x332a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x332a7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x332a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x332a80: 0xa0e3001f  sb          $v1, 0x1F($a3)
    ctx->pc = 0x332a80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x332a84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a88: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332a8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332a90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a94: 0xac232780  sw          $v1, 0x2780($at)
    ctx->pc = 0x332a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    ctx->pc = 0x332a98u;
}
