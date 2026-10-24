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

// Function: entry_0028723c
// Address: 0x28723c - 0x287690
void entry_0028723c_0x28723c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028723c_0x28723c");
#endif

    switch (ctx->pc) {
        case 0x287310u: goto label_287310;
        case 0x287388u: goto label_287388;
        case 0x28741cu: goto label_28741c;
        case 0x287468u: goto label_287468;
        case 0x287578u: goto label_287578;
        case 0x2875b8u: goto label_2875b8;
        case 0x2875e8u: goto label_2875e8;
        case 0x287618u: goto label_287618;
        default: break;
    }

    ctx->pc = 0x28723cu;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x287690u;
}
