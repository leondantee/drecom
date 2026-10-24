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

// Function: Movie_texture
// Address: 0x35d650 - 0x35ddb0
void Movie_texture_0x35d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_texture_0x35d650");
#endif

    switch (ctx->pc) {
        case 0x35da70u: goto label_35da70;
        case 0x35dafcu: goto label_35dafc;
        case 0x35db34u: goto label_35db34;
        case 0x35db8cu: goto label_35db8c;
        case 0x35dbb4u: goto label_35dbb4;
        case 0x35dc40u: goto label_35dc40;
        case 0x35dc6cu: goto label_35dc6c;
        case 0x35dcd0u: goto label_35dcd0;
        case 0x35dd04u: goto label_35dd04;
        case 0x35dd20u: goto label_35dd20;
        case 0x35dd4cu: goto label_35dd4c;
        case 0x35dd74u: goto label_35dd74;
        case 0x35dd80u: goto label_35dd80;
        default: break;
    }

    ctx->pc = 0x35d650u;

    // 0x35d650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x35d654: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x35d654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x35d658: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x35d65c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35d660: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35d664: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35d664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35d668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35d66c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35d670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d678: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x35d678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x35d67c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35d680: 0x2442c100  addiu       $v0, $v0, -0x3F00
    ctx->pc = 0x35d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35d684: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x35d684u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35d688: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x35d688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x35d68c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x35d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35d690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d694: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35d694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35d698: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x35d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x35d69c: 0x24420074  addiu       $v0, $v0, 0x74
    ctx->pc = 0x35d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x35d6a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35d6a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35d6a4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x35d6a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35d6a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6ac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x35d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35d6b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D6B0u;
    {
        const bool branch_taken_0x35d6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d6b0) {
            ctx->pc = 0x35D6C4u;
            goto label_35d6c4;
        }
    }
    ctx->pc = 0x35D6B8u;
    // 0x35d6b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35d6bc: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x35D6BCu;
    {
        const bool branch_taken_0x35d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6bc) {
            ctx->pc = 0x35DD80u;
            goto label_35dd80;
        }
    }
    ctx->pc = 0x35D6C4u;
label_35d6c4:
    // 0x35d6c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x35d6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x35d6cc: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x35d6ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x35d6d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35d6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35d6d4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x35d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x35d6d8: 0x30740001  andi        $s4, $v1, 0x1
    ctx->pc = 0x35d6d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35d6dc: 0x941026  xor         $v0, $a0, $s4
    ctx->pc = 0x35d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 20));
    // 0x35d6e0: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x35D6E0u;
    {
        const bool branch_taken_0x35d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d6e0) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D6E8u;
    // 0x35d6e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35d6f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D6F0u;
    {
        const bool branch_taken_0x35d6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6f0) {
            ctx->pc = 0x35D710u;
            goto label_35d710;
        }
    }
    ctx->pc = 0x35D6F8u;
    // 0x35d6f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6fc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35d700: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x35d700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d704: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x35d704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x35d708: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x35D708u;
    {
        const bool branch_taken_0x35d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d708) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D710u;
label_35d710:
    // 0x35d710: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d714: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x35d714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d718: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x35D718u;
    {
        const bool branch_taken_0x35d718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d718) {
            ctx->pc = 0x35D8C0u;
            goto label_35d8c0;
        }
    }
    ctx->pc = 0x35D720u;
    // 0x35d720: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d724: 0x30530004  andi        $s3, $v0, 0x4
    ctx->pc = 0x35d724u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35d728: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x35D728u;
    {
        const bool branch_taken_0x35d728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d728) {
            ctx->pc = 0x35D7C0u;
            goto label_35d7c0;
        }
    }
    ctx->pc = 0x35D730u;
    // 0x35d730: 0x86120004  lh          $s2, 0x4($s0)
    ctx->pc = 0x35d730u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d734: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x35d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x35d738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d73c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35D73Cu;
    {
        const bool branch_taken_0x35d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d73c) {
            ctx->pc = 0x35D7B4u;
            goto label_35d7b4;
        }
    }
    ctx->pc = 0x35D744u;
    // 0x35d744: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d748: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d74c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d750: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d754: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d758: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35d758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d75c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35d75cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35d760: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d764: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d768: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d768u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d76c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x35d76cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d770: 0x0  nop
    ctx->pc = 0x35d770u;
    // NOP
    // 0x35d774: 0x0  nop
    ctx->pc = 0x35d774u;
    // NOP
    // 0x35d778: 0x1812  mflo        $v1
    ctx->pc = 0x35d778u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35d77c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35d77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35d780: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35d780u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35d784: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d788: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d78c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d78cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d790: 0x86040028  lh          $a0, 0x28($s0)
    ctx->pc = 0x35d790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d794: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d798: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x35d798u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d79c: 0x0  nop
    ctx->pc = 0x35d79cu;
    // NOP
    // 0x35d7a0: 0x0  nop
    ctx->pc = 0x35d7a0u;
    // NOP
    // 0x35d7a4: 0x1010  mfhi        $v0
    ctx->pc = 0x35d7a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35d7a8: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d7ac: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x35D7ACu;
    {
        const bool branch_taken_0x35d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d7ac) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D7B4u;
label_35d7b4:
    // 0x35d7b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x35d7b8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x35D7B8u;
    {
        const bool branch_taken_0x35d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d7b8) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D7C0u;
label_35d7c0:
    // 0x35d7c0: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d7c4: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d7c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d7cc: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d7d0: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d7d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d7d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d7d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d7dc: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d7dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d7e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d7e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d7e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d7e8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d7e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d7ec: 0x0  nop
    ctx->pc = 0x35d7ecu;
    // NOP
    // 0x35d7f0: 0x0  nop
    ctx->pc = 0x35d7f0u;
    // NOP
    // 0x35d7f4: 0x1012  mflo        $v0
    ctx->pc = 0x35d7f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35d7f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d7fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d7fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d800: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d804: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d808: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d808u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d80c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d810: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d814: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d814u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d818: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x35D818u;
    {
        const bool branch_taken_0x35d818 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35d818) {
            ctx->pc = 0x35D89Cu;
            goto label_35d89c;
        }
    }
    ctx->pc = 0x35D820u;
    // 0x35d820: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x35d820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d824: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d828: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d82c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d82cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d830: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d834: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x35d834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x35d838: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35D838u;
    {
        const bool branch_taken_0x35d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d838) {
            ctx->pc = 0x35D89Cu;
            goto label_35d89c;
        }
    }
    ctx->pc = 0x35D840u;
    // 0x35d840: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d844: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d848: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d84c: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d84cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d850: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d854: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d858: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d858u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d85c: 0x0  nop
    ctx->pc = 0x35d85cu;
    // NOP
    // 0x35d860: 0x0  nop
    ctx->pc = 0x35d860u;
    // NOP
    // 0x35d864: 0x1812  mflo        $v1
    ctx->pc = 0x35d864u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35d868: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d86c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d870: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d874: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d878: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d87c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d87cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d880: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d884: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d888: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d88c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d890: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x35d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35d894: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35d894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d898: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x35d898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_35d89c:
    // 0x35d89c: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x35d89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d8a0: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d8a4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35d8a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d8a8: 0x0  nop
    ctx->pc = 0x35d8a8u;
    // NOP
    // 0x35d8ac: 0x0  nop
    ctx->pc = 0x35d8acu;
    // NOP
    // 0x35d8b0: 0x1010  mfhi        $v0
    ctx->pc = 0x35d8b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35d8b4: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d8b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x35D8B8u;
    {
        const bool branch_taken_0x35d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d8b8) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D8C0u;
label_35d8c0:
    // 0x35d8c0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d8c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35d8c8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x35D8C8u;
    {
        const bool branch_taken_0x35d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d8c8) {
            ctx->pc = 0x35D970u;
            goto label_35d970;
        }
    }
    ctx->pc = 0x35D8D0u;
    // 0x35d8d0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d8d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d8d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d8d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d8dc: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d8e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d8e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d8e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35d8ec: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35D8ECu;
    {
        const bool branch_taken_0x35d8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d8ec) {
            ctx->pc = 0x35D964u;
            goto label_35d964;
        }
    }
    ctx->pc = 0x35D8F4u;
    // 0x35d8f4: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d8f8: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d8fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d900: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d904: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d908: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d90c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d90cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d910: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d914: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d91c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d91cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d920: 0x0  nop
    ctx->pc = 0x35d920u;
    // NOP
    // 0x35d924: 0x0  nop
    ctx->pc = 0x35d924u;
    // NOP
    // 0x35d928: 0x1012  mflo        $v0
    ctx->pc = 0x35d928u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35d92c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d930: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d930u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d934: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d93c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d93cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d940: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x35d940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d944: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d948: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35d948u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d94c: 0x0  nop
    ctx->pc = 0x35d94cu;
    // NOP
    // 0x35d950: 0x0  nop
    ctx->pc = 0x35d950u;
    // NOP
    // 0x35d954: 0x1010  mfhi        $v0
    ctx->pc = 0x35d954u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35d958: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d95c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x35D95Cu;
    {
        const bool branch_taken_0x35d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d95c) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D964u;
label_35d964:
    // 0x35d964: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35d964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x35d968: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x35D968u;
    {
        const bool branch_taken_0x35d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d968) {
            ctx->pc = 0x35DA58u;
            goto label_35da58;
        }
    }
    ctx->pc = 0x35D970u;
label_35d970:
    // 0x35d970: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d974: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d978: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d97c: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d980: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d984: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d988: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d988u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d98c: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d98cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d990: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d998: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d998u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d99c: 0x0  nop
    ctx->pc = 0x35d99cu;
    // NOP
    // 0x35d9a0: 0x0  nop
    ctx->pc = 0x35d9a0u;
    // NOP
    // 0x35d9a4: 0x1012  mflo        $v0
    ctx->pc = 0x35d9a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35d9a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d9ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d9acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d9b0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d9b8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d9bc: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d9bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d9c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d9c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d9c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d9c8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d9cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d9d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d9d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d9d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x35d9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35d9d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35D9D8u;
    {
        const bool branch_taken_0x35d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d9d8) {
            ctx->pc = 0x35DA3Cu;
            goto label_35da3c;
        }
    }
    ctx->pc = 0x35D9E0u;
    // 0x35d9e0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x35d9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d9e4: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d9e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d9ec: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d9f0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d9f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x35d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x35d9f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35D9F8u;
    {
        const bool branch_taken_0x35d9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d9f8) {
            ctx->pc = 0x35DA3Cu;
            goto label_35da3c;
        }
    }
    ctx->pc = 0x35DA00u;
    // 0x35da00: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35da00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35da04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35da08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35da0c: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35da0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35da10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35da14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35da18: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35da18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35da1c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35da20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35da24: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35da24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35da28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35da2c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35da2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35da30: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35da34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x35da38: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x35da38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_35da3c:
    // 0x35da3c: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x35da3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35da40: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35da40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35da44: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35da44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35da48: 0x0  nop
    ctx->pc = 0x35da48u;
    // NOP
    // 0x35da4c: 0x0  nop
    ctx->pc = 0x35da4cu;
    // NOP
    // 0x35da50: 0x1010  mfhi        $v0
    ctx->pc = 0x35da50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35da54: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35da54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_35da58:
    // 0x35da58: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x35da58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x35da5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35da60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35da64: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x35da64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x35da68: 0xc042ea4  jal         func_10BA90
    ctx->pc = 0x35DA68u;
    SET_GPR_U32(ctx, 31, 0x35DA70u);
    ctx->pc = 0x10BA90u;
    {
        ctx->pc = 0x35DA70u;
        ps2_stubs::sceIpuInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DA70u) { return; }
    ctx->pc = 0x35DA70u;
label_35da70:
    // 0x35da70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35da74: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x35da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x35da78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35da7c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x35da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x35da80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35da84: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x35da84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35da88: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35da88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35da8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35da90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35da94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35da94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35da98: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x35da98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x35da9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35daa0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x35daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35daa4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x35daa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35daa8: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x35daa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35daac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35dab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35dab4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x35dab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x35dab8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x35dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x35dabc: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x35dabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35dac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35dac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35dac8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x35dac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x35dacc: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x35daccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x35dad0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x35dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dad4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x35dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x35dad8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35dad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35dadc: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x35dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x35dae0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35dae4: 0x24445e80  addiu       $a0, $v0, 0x5E80
    ctx->pc = 0x35dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24192));
    // 0x35dae8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x35dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x35daec: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x35daecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x35daf0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x35daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35daf4: 0xc0d7568  jal         func_35D5A0
    ctx->pc = 0x35DAF4u;
    SET_GPR_U32(ctx, 31, 0x35DAFCu);
    ctx->pc = 0x35D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5A0u, 0x35DAF4u, 0x35DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAFCu;
label_35dafc:
    // 0x35dafc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35db00: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x35db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x35db04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35DB04u;
    {
        const bool branch_taken_0x35db04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35db04) {
            ctx->pc = 0x35DB34u;
            goto label_35db34;
        }
    }
    ctx->pc = 0x35DB0Cu;
    // 0x35db0c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x35db0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35db10: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x35db10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35db14: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x35db14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x35db18: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x35db18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35db1c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x35db1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35db20: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x35db20u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x35db24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35db28: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x35db28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35db2c: 0xc0d779c  jal         func_35DE70
    ctx->pc = 0x35DB2Cu;
    SET_GPR_U32(ctx, 31, 0x35DB34u);
    ctx->pc = 0x35DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DE70u, 0x35DB2Cu, 0x35DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB34u;
label_35db34:
    // 0x35db34: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35db38: 0x24425e80  addiu       $v0, $v0, 0x5E80
    ctx->pc = 0x35db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24192));
    // 0x35db3c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x35db3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35db40: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x35db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x35db44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db48: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x35db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46128);
    // 0x35db4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db4cu;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 3));
    // 0x35db50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db54: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x35db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x35db58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35db58u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x35db5c: 0x24030105  addiu       $v1, $zero, 0x105
    ctx->pc = 0x35db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x35db60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db64: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x35db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x35db68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db68u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x35db6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35db70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db74: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35db78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db78u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x35db7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35db7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35db80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35db80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35db84: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x35DB84u;
    SET_GPR_U32(ctx, 31, 0x35DB8Cu);
    ctx->pc = 0x10BA28u;
    {
        ctx->pc = 0x35DB8Cu;
        ps2_stubs::sceIpuSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DB8Cu) { return; }
    ctx->pc = 0x35DB8Cu;
label_35db8c:
    // 0x35db8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db90: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35db94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35db94u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002000u));
    // 0x35db98: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x35db98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x35db9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35dba0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x35dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x35dba4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35dba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35dba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dbac: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x35DBACu;
    SET_GPR_U32(ctx, 31, 0x35DBB4u);
    ctx->pc = 0x10BA28u;
    {
        ctx->pc = 0x35DBB4u;
        ps2_stubs::sceIpuSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DBB4u) { return; }
    ctx->pc = 0x35DBB4u;
label_35dbb4:
    // 0x35dbb4: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x35dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x35dbb8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35dbbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35dbc0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x35dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35dbc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbc8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35dbcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dbccu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x35dbd0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x35dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x35dbd4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x35dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x35dbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35dbdc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x35dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35dbe0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dbe8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x35dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x35dbec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dbf0: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x35dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x35dbf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbf8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35dbfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dbfcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x35dc00: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x35dc00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dc04: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x35dc04u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dc08: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35dc0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35dc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dc10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35dc10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35dc14: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x35dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x35dc18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35dc1c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35dc20: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x35dc20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35dc24: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x35dc28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35dc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dc2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc30: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x35dc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x35dc34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dc34u;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 3));
    // 0x35dc38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x35DC38u;
    {
        const bool branch_taken_0x35dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc38) {
            ctx->pc = 0x35DD10u;
            goto label_35dd10;
        }
    }
    ctx->pc = 0x35DC40u;
label_35dc40:
    // 0x35dc40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc44: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dc48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u));
    // 0x35dc4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x35dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35dc50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35dc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35dc54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DC54u;
    {
        const bool branch_taken_0x35dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dc54) {
            ctx->pc = 0x35DC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dc40;
        }
    }
    ctx->pc = 0x35DC5Cu;
    // 0x35dc5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x35dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x35dc60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc64: 0xc0d7784  jal         func_35DE10
    ctx->pc = 0x35DC64u;
    SET_GPR_U32(ctx, 31, 0x35DC6Cu);
    ctx->pc = 0x35DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DE10u, 0x35DC64u, 0x35DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC6Cu;
label_35dc6c:
    // 0x35dc6c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x35dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x35dc70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35dc74: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x35dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x35dc78: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x35dc78u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dc7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc80: 0x3443d080  ori         $v1, $v0, 0xD080
    ctx->pc = 0x35dc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x35dc84: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x35dc84u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 19));
    // 0x35dc88: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x35dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dc8c: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x35dc8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35dc90: 0x0  nop
    ctx->pc = 0x35dc90u;
    // NOP
    // 0x35dc94: 0x0  nop
    ctx->pc = 0x35dc94u;
    // NOP
    // 0x35dc98: 0x1812  mflo        $v1
    ctx->pc = 0x35dc98u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35dc9c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x35dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dca0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x35dca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35dca4: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x35dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x35dca8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35dcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35dcb0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x35dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dcb4: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x35dcb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35dcb8: 0x0  nop
    ctx->pc = 0x35dcb8u;
    // NOP
    // 0x35dcbc: 0x0  nop
    ctx->pc = 0x35dcbcu;
    // NOP
    // 0x35dcc0: 0x1810  mfhi        $v1
    ctx->pc = 0x35dcc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35dcc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35dcc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35dccc: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x35dcccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35dcd0:
    // 0x35dcd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dcd4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x35dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x35dcd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x35dcdc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x35dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35dce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x35dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35dce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DCE4u;
    {
        const bool branch_taken_0x35dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dce4) {
            ctx->pc = 0x35DCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dcd0;
        }
    }
    ctx->pc = 0x35DCECu;
    // 0x35dcec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dcf0: 0x3444d000  ori         $a0, $v0, 0xD000
    ctx->pc = 0x35dcf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dcf4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x35dcf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x35dcf8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x35dcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35dcfc: 0xc040986  jal         func_102618
    ctx->pc = 0x35DCFCu;
    SET_GPR_U32(ctx, 31, 0x35DD04u);
    ctx->pc = 0x102618u;
    {
        ctx->pc = 0x35DD04u;
        ps2_stubs::sceDmaRecvI(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DD04u) { return; }
    ctx->pc = 0x35DD04u;
label_35dd04:
    // 0x35dd04: 0x26730400  addiu       $s3, $s3, 0x400
    ctx->pc = 0x35dd04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x35dd08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35dd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35dd0c: 0x0  nop
    ctx->pc = 0x35dd0cu;
    // NOP
label_35dd10:
    // 0x35dd10: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x35dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x35dd14: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x35DD14u;
    {
        const bool branch_taken_0x35dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dd14) {
            ctx->pc = 0x35DC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dc40;
        }
    }
    ctx->pc = 0x35DD1Cu;
    // 0x35dd1c: 0x0  nop
    ctx->pc = 0x35dd1cu;
    // NOP
label_35dd20:
    // 0x35dd20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd24: 0x3443d000  ori         $v1, $v0, 0xD000
    ctx->pc = 0x35dd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dd28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u));
    // 0x35dd2c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x35dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35dd30: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x35dd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35dd34: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DD34u;
    {
        const bool branch_taken_0x35dd34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dd34) {
            ctx->pc = 0x35DD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dd20;
        }
    }
    ctx->pc = 0x35DD3Cu;
    // 0x35dd3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35dd3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35dd40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd44: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x35DD44u;
    SET_GPR_U32(ctx, 31, 0x35DD4Cu);
    ctx->pc = 0x10BA28u;
    {
        ctx->pc = 0x35DD4Cu;
        ps2_stubs::sceIpuSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DD4Cu) { return; }
    ctx->pc = 0x35DD4Cu;
label_35dd4c:
    // 0x35dd4c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35dd50: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x35dd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35dd54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x35DD54u;
    {
        const bool branch_taken_0x35dd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dd54) {
            ctx->pc = 0x35DD80u;
            goto label_35dd80;
        }
    }
    ctx->pc = 0x35DD5Cu;
    // 0x35dd5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd60: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x35dd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x35dd64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35dd64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35dd68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dd6c: 0xc0409c6  jal         func_102718
    ctx->pc = 0x35DD6Cu;
    SET_GPR_U32(ctx, 31, 0x35DD74u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x35DD74u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DD74u) { return; }
    ctx->pc = 0x35DD74u;
label_35dd74:
    // 0x35dd74: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35dd78: 0xc0d72ec  jal         func_35CBB0
    ctx->pc = 0x35DD78u;
    SET_GPR_U32(ctx, 31, 0x35DD80u);
    ctx->pc = 0x35CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CBB0u, 0x35DD78u, 0x35DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD80u;
label_35dd80:
    // 0x35dd80: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x35dd80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35dd84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x35dd84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35dd88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35dd88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35dd8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35dd8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35dd90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35dd90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35dd94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35dd94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35dd98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35dd98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35dd9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35dd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35dda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dda4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x35dda4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35dda8: 0x3e00008  jr          $ra
    ctx->pc = 0x35DDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DDB0u;
}
