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

// Function: Bg_layer_draw_FR
// Address: 0x2025b0 - 0x203098
void Bg_layer_draw_FR_0x2025b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_layer_draw_FR_0x2025b0");
#endif

    switch (ctx->pc) {
        case 0x202748u: goto label_202748;
        case 0x20279cu: goto label_20279c;
        case 0x202878u: goto label_202878;
        case 0x2028c8u: goto label_2028c8;
        case 0x202d00u: goto label_202d00;
        case 0x202fbcu: goto label_202fbc;
        default: break;
    }

    ctx->pc = 0x2025b0u;

    // 0x2025b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2025b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2025b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2025b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2025b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2025bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2025bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2025c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2025c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2025c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2025c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2025c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2025c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2025cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2025ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2025d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2025d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2025d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2025d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2025d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2025d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2025dc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2025dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2025e0: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x2025e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x2025e4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2025e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2025e8: 0x8c634828  lw          $v1, 0x4828($v1)
    ctx->pc = 0x2025e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18472)));
    // 0x2025ec: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2025ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2025f0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2025f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2025f4: 0x8c634824  lw          $v1, 0x4824($v1)
    ctx->pc = 0x2025f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18468)));
    // 0x2025f8: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2025f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2025fc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202600: 0x9063485d  lbu         $v1, 0x485D($v1)
    ctx->pc = 0x202600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18525)));
    // 0x202604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x202604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x202608: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x202608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x20260c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x20260cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202610: 0x8cc34820  lw          $v1, 0x4820($a2)
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18464)));
    // 0x202614: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x202614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x202618: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x202618u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20261c: 0xffa300a8  sd          $v1, 0xA8($sp)
    ctx->pc = 0x20261cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
    // 0x202620: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x202620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202624: 0x8c634820  lw          $v1, 0x4820($v1)
    ctx->pc = 0x202624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x202628: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x202628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20262c: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x20262cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x202630: 0xffa300b0  sd          $v1, 0xB0($sp)
    ctx->pc = 0x202630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 3));
    // 0x202634: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x202634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x202638: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x202638u;
    {
        const bool branch_taken_0x202638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202638) {
            ctx->pc = 0x202664u;
            goto label_202664;
        }
    }
    ctx->pc = 0x202640u;
    // 0x202640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202644: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x202644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x202648: 0x90690004  lbu         $t1, 0x4($v1)
    ctx->pc = 0x202648u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20264c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x20264cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x202650: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x202650u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202654: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x202654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x202658: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x202658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x20265c: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x20265cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x202660: 0xa0670004  sb          $a3, 0x4($v1)
    ctx->pc = 0x202660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 7));
label_202664:
    // 0x202664: 0x93838010  lbu         $v1, -0x7FF0($gp)
    ctx->pc = 0x202664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x202668: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x202668u;
    {
        const bool branch_taken_0x202668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202668) {
            ctx->pc = 0x202694u;
            goto label_202694;
        }
    }
    ctx->pc = 0x202670u;
    // 0x202670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202674: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x202674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x202678: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x202678u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20267c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x20267cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x202680: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x202680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x202684: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x202684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x202688: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x202688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x20268c: 0xe83025  or          $a2, $a3, $t0
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x202690: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x202690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_202694:
    // 0x202694: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x202694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202698: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20269c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20269cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026a0: 0x0  nop
    ctx->pc = 0x2026a0u;
    // NOP
    // 0x2026a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2026a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2026a8: 0xc4c0484c  lwc1        $f0, 0x484C($a2)
    ctx->pc = 0x2026a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2026acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2026b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2026b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2026b4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2026b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2026b8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2026b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2026bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2026bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026c0: 0x0  nop
    ctx->pc = 0x2026c0u;
    // NOP
    // 0x2026c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2026c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2026c8: 0xc4c04850  lwc1        $f0, 0x4850($a2)
    ctx->pc = 0x2026c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2026ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2026d0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2026d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2026d4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2026d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2026d8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2026d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2026dc: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2026dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2026e0: 0x0  nop
    ctx->pc = 0x2026e0u;
    // NOP
    // 0x2026e4: 0x0  nop
    ctx->pc = 0x2026e4u;
    // NOP
    // 0x2026e8: 0x3012  mflo        $a2
    ctx->pc = 0x2026e8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2026ec: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x2026ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2026f0: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2026f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2026f4: 0x8fb300c4  lw          $s3, 0xC4($sp)
    ctx->pc = 0x2026f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2026f8: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x2026f8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2026fc: 0x0  nop
    ctx->pc = 0x2026fcu;
    // NOP
    // 0x202700: 0x0  nop
    ctx->pc = 0x202700u;
    // NOP
    // 0x202704: 0xa012  mflo        $s4
    ctx->pc = 0x202704u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x202708: 0xafb400c8  sw          $s4, 0xC8($sp)
    ctx->pc = 0x202708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 20));
    // 0x20270c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202710: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x202710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x202714: 0x938680d0  lbu         $a2, -0x7F30($gp)
    ctx->pc = 0x202714u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x202718: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x202718u;
    {
        const bool branch_taken_0x202718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x202718) {
            ctx->pc = 0x20272Cu;
            goto label_20272c;
        }
    }
    ctx->pc = 0x202720u;
    // 0x202720: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202724: 0x24632100  addiu       $v1, $v1, 0x2100
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8448));
    // 0x202728: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x202728u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_20272c:
    // 0x20272c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x20272cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202730: 0xc4c04858  lwc1        $f0, 0x4858($a2)
    ctx->pc = 0x202730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202734: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x202734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x202738: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x202738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x20273c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x20273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x202740: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x202740u;
    {
        const bool branch_taken_0x202740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202740) {
            ctx->pc = 0x203050u;
            goto label_203050;
        }
    }
    ctx->pc = 0x202748u;
label_202748:
    // 0x202748: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x202748u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20274c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202750: 0xc4604854  lwc1        $f0, 0x4854($v1)
    ctx->pc = 0x202750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202754: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x202754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x202758: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x202758u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20275c: 0x8ea64838  lw          $a2, 0x4838($s5)
    ctx->pc = 0x20275cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18488)));
    // 0x202760: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x202760u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202764: 0x0  nop
    ctx->pc = 0x202764u;
    // NOP
    // 0x202768: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20276c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x202770: 0xc4209fa0  lwc1        $f0, -0x6060($at)
    ctx->pc = 0x202770u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202774: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x202774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202778: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20277c: 0x8fb600e4  lw          $s6, 0xE4($sp)
    ctx->pc = 0x20277cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202780: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x202784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202788: 0x0  nop
    ctx->pc = 0x202788u;
    // NOP
    // 0x20278c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20278cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202790: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x202790u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x202794: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x202794u;
    SET_GPR_U32(ctx, 31, 0x20279Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x202794u, 0x20279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20279Cu;
label_20279c:
    // 0x20279c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20279cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2027a0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x2027a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x2027a4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2027a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2027a8: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2027a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2027ac: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2027b0: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2027b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2027b4: 0x8ce34834  lw          $v1, 0x4834($a3)
    ctx->pc = 0x2027b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18484)));
    // 0x2027b8: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2027bc: 0x2623ff00  addiu       $v1, $s1, -0x100
    ctx->pc = 0x2027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x2027c0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2027c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2027c4: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x2027c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x2027c8: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2027cc: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x2027ccu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2027d0: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2027d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2027d4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2027d4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2027d8: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2027d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2027dc: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x2027dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2027e0: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2027e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2027e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2027e8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2027e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2027ec: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2027ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2027f0: 0x8cc64834  lw          $a2, 0x4834($a2)
    ctx->pc = 0x2027f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18484)));
    // 0x2027f4: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2027f8: 0x2623ff00  addiu       $v1, $s1, -0x100
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x2027fc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2027fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202800: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x202804: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x202804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x202808: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x202808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x20280c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x20280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202810: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202814: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x202814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x202818: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x202818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x20281c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x202820: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x202820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x202824: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x202824u;
    {
        const bool branch_taken_0x202824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202824) {
            ctx->pc = 0x202880u;
            goto label_202880;
        }
    }
    ctx->pc = 0x20282Cu;
    // 0x20282c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202830: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x202830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB0u));
    // 0x202834: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x202834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x202838: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x202838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20283c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x20283cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x202840: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x202840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x202844: 0x34c60808  ori         $a2, $a2, 0x808
    ctx->pc = 0x202844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2056);
    // 0x202848: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x202848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20284c: 0x3c061d07  lui         $a2, 0x1D07
    ctx->pc = 0x20284cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7431 << 16));
    // 0x202850: 0x34c60a00  ori         $a2, $a2, 0xA00
    ctx->pc = 0x202850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2560);
    // 0x202854: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202858: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x202858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x20285c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x20285cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x202860: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x202860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x202864: 0x24450da0  addiu       $a1, $v0, 0xDA0
    ctx->pc = 0x202864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x202868: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20286c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202870: 0xc059b14  jal         func_166C50
    ctx->pc = 0x202870u;
    SET_GPR_U32(ctx, 31, 0x202878u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x202870u, 0x202878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202878u;
label_202878:
    // 0x202878: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x202878u;
    {
        const bool branch_taken_0x202878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202878) {
            ctx->pc = 0x2028C8u;
            goto label_2028c8;
        }
    }
    ctx->pc = 0x202880u;
label_202880:
    // 0x202880: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202884: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB0u));
    // 0x202888: 0x24430013  addiu       $v1, $v0, 0x13
    ctx->pc = 0x202888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x20288c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x20288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202890: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x202890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x202894: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x202898: 0x34a30808  ori         $v1, $a1, 0x808
    ctx->pc = 0x202898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    // 0x20289c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x20289cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2028a0: 0x3c031d07  lui         $v1, 0x1D07
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7431 << 16));
    // 0x2028a4: 0x34632800  ori         $v1, $v1, 0x2800
    ctx->pc = 0x2028a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10240);
    // 0x2028a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2028a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2028ac: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2028acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2028b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2028b4: 0x24450da0  addiu       $a1, $v0, 0xDA0
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2028b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2028bc: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x2028bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2028c0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2028C0u;
    SET_GPR_U32(ctx, 31, 0x2028C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2028C0u, 0x2028C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028C8u;
label_2028c8:
    // 0x2028c8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2028c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2028cc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2028d0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2028d4: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2028d8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2028dc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2028dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2028e0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2028e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2028e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2028e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2028e8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2028e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2028ec: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2028ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2028f0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2028f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2028f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2028f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2028f8: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x2028f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2028fc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2028fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x202900: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202908: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x202908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20290c: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x20290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x202910: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x202914: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202918: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20291c: 0x8c270ab8  lw          $a3, 0xAB8($at)
    ctx->pc = 0x20291cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202920: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x202920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x202924: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202928: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20292c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x20292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202930: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202934: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202938: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x202938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x20293c: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x20293cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x202940: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x202940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x202944: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x202944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x202948: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20294c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20294cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202950: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x202950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x202954: 0x34660014  ori         $a2, $v1, 0x14
    ctx->pc = 0x202954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x202958: 0x643fc  dsll32      $t0, $a2, 15
    ctx->pc = 0x202958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 15));
    // 0x20295c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x202960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202964: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x202968: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x202968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x20296c: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x20296cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x202970: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x202970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x202974: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202978: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x202978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x20297c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202980: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202984: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202984u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202988: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x202988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20298c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202990: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202994: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202994u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202998: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20299c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2029a0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2029a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2029a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2029a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2029a8: 0xac260ab8  sw          $a2, 0xAB8($at)
    ctx->pc = 0x2029a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2029ac: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2029b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2029b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2029b4: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2029B4u;
    {
        const bool branch_taken_0x2029b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2029b4) {
            ctx->pc = 0x202A0Cu;
            goto label_202a0c;
        }
    }
    ctx->pc = 0x2029BCu;
    // 0x2029bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2029bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2029c0: 0x10c7000c  beq         $a2, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2029C0u;
    {
        const bool branch_taken_0x2029c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x2029c0) {
            ctx->pc = 0x2029F4u;
            goto label_2029f4;
        }
    }
    ctx->pc = 0x2029C8u;
    // 0x2029c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2029c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2029cc: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2029CCu;
    {
        const bool branch_taken_0x2029cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2029cc) {
            ctx->pc = 0x2029DCu;
            goto label_2029dc;
        }
    }
    ctx->pc = 0x2029D4u;
    // 0x2029d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2029D4u;
    {
        const bool branch_taken_0x2029d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029d4) {
            ctx->pc = 0x202A28u;
            goto label_202a28;
        }
    }
    ctx->pc = 0x2029DCu;
label_2029dc:
    // 0x2029dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x2029dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2029e0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2029e4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2029e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2029e8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2029e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2029ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2029ECu;
    {
        const bool branch_taken_0x2029ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029ec) {
            ctx->pc = 0x202A38u;
            goto label_202a38;
        }
    }
    ctx->pc = 0x2029F4u;
label_2029f4:
    // 0x2029f4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2029f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2029f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2029f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2029fc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2029fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a00: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202a00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202a04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202A04u;
    {
        const bool branch_taken_0x202a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a04) {
            ctx->pc = 0x202A38u;
            goto label_202a38;
        }
    }
    ctx->pc = 0x202A0Cu;
label_202a0c:
    // 0x202a0c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x202a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x202a10: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202a14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a18: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a1c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202a20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202A20u;
    {
        const bool branch_taken_0x202a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a20) {
            ctx->pc = 0x202A38u;
            goto label_202a38;
        }
    }
    ctx->pc = 0x202A28u;
label_202a28:
    // 0x202a28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a2c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a30: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x202a30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x202a34: 0x0  nop
    ctx->pc = 0x202a34u;
    // NOP
label_202a38:
    // 0x202a38: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x202a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x202a3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a40: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a44: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202a44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202a48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a4c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a50: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202a54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a58: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x202a60: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202a64: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x202a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x202a68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202a6c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x202a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x202a70: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x202a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202a74: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a78: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a7c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202a80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202a84: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a88: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a8c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202a90: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a94: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a98: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202a9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202aa0: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202aa4: 0xdfa600a8  ld          $a2, 0xA8($sp)
    ctx->pc = 0x202aa4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x202aa8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202aac: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ab0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202ab4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x202ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x202ab8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202abc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ac0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202ac4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ac8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202acc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202ad0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ad4: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202ad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202ad8: 0x93838010  lbu         $v1, -0x7FF0($gp)
    ctx->pc = 0x202ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x202adc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x202ADCu;
    {
        const bool branch_taken_0x202adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202adc) {
            ctx->pc = 0x202B0Cu;
            goto label_202b0c;
        }
    }
    ctx->pc = 0x202AE4u;
    // 0x202ae4: 0xdfa600b0  ld          $a2, 0xB0($sp)
    ctx->pc = 0x202ae4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x202ae8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202aec: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202af0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202af0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202af4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x202af8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202afc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b00: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202b00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202b04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202B04u;
    {
        const bool branch_taken_0x202b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202b04) {
            ctx->pc = 0x202B28u;
            goto label_202b28;
        }
    }
    ctx->pc = 0x202B0Cu;
label_202b0c:
    // 0x202b0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b10: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b14: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x202b14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x202b18: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x202b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x202b1c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b20: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b24: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202b24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_202b28:
    // 0x202b28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b2c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202b34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b38: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202b3c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202b44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x202b48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202b4c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202b4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202b50: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x202b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x202b54: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x202b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x202b58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202b5c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x202b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202b60: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x202b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x202b64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202b68: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202b6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b70: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b74: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202b74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202b78: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x202b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x202b7c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b80: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b84: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202b84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202b88: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b8c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b90: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202b94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b98: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202b9c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x202b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202ba0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ba4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ba8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x202ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202bac: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x202bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202bb0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x202bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202bb8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202bbc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202bc0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x202bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202bc4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x202bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x202bc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x202bcc: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202bd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202bd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202bd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202bd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202bdc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x202bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202be0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x202be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202be4: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x202be8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x202be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202bec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x202becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x202bf0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x202bf0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x202bf4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x202bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x202bf8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x202bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202bfc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202c00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x202c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x202c08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c0c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x202c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202c10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c14: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c18: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202c18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202c1c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c20: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202c28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c2c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202c30: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x202c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202c34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c38: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x202c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202c40: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x202c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202c44: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c48: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c4c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x202c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202c50: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x202c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x202c54: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202c58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202c5c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c60: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x202c60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x202c64: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x202c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x202c68: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202c6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202c70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202c74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202c78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202c7c: 0xc33825  or          $a3, $a2, $v1
    ctx->pc = 0x202c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202c80: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202c84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x202c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x202c8c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c90: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x202c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202c94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c98: 0x8c290ab8  lw          $t1, 0xAB8($at)
    ctx->pc = 0x202c98u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c9c: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x202c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x202ca0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ca4: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ca8: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x202ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202cac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202cb0: 0xac280ab8  sw          $t0, 0xAB8($at)
    ctx->pc = 0x202cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202cb4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x202cb8: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x202cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202cbc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x202cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202cc0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202cc4: 0x8c664834  lw          $a2, 0x4834($v1)
    ctx->pc = 0x202cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18484)));
    // 0x202cc8: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x202cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202ccc: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x202cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x202cd0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x202cd4: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x202cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202cd8: 0xe64023  subu        $t0, $a3, $a2
    ctx->pc = 0x202cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202cdc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x202cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202ce0: 0x1063823  subu        $a3, $t0, $a2
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x202ce4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x202ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202ce8: 0x8cc64834  lw          $a2, 0x4834($a2)
    ctx->pc = 0x202ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18484)));
    // 0x202cec: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x202cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202cf0: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x202cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x202cf4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x202cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x202cf8: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x202CF8u;
    {
        const bool branch_taken_0x202cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202cf8) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202D00u;
label_202d00:
    // 0x202d00: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d04: 0x24c3ff00  addiu       $v1, $a2, -0x100
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967040));
    // 0x202d08: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x202d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x202d0c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x202d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202d10: 0x331c3  sra         $a2, $v1, 7
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
    // 0x202d14: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d18: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202d1c: 0x8fb400e4  lw          $s4, 0xE4($sp)
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202d20: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x202d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d24: 0x2466ff00  addiu       $a2, $v1, -0x100
    ctx->pc = 0x202d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x202d28: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x202d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x202d2c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x202d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202d30: 0x331c3  sra         $a2, $v1, 7
    ctx->pc = 0x202d30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
    // 0x202d34: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x202d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d38: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x202d38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202d3c: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x202d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202d40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x202d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202d44: 0xc3b021  addu        $s6, $a2, $v1
    ctx->pc = 0x202d44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x202d48: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x202d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202d4c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x202d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202d54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202d58: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202d5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x202d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202d60: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x202d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202d64: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x202d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202d6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202d70: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202d74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x202d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202d78: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x202d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x202d7c: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x202d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x202d80: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202d84: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x202d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x202d88: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x202d88u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x202d8c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x202d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x202d90: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x202d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202d94: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x202d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202d98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202d9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202da0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202da4: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x202da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x202da8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202dac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202db0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x202db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x202db4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x202db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202db8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x202db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x202dbc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dc0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202dc4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202dc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dcc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202dd0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x202dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202dd4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dd8: 0xac260ab8  sw          $a2, 0xAB8($at)
    ctx->pc = 0x202dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202ddc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x202ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202de0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x202de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202de8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dec: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202decu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202df0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x202df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x202df4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x202df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202df8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dfc: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202e00: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x202e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x202e04: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x202e08: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202e0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202e10: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202e14: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x202e14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x202e18: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x202e1c: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202e20: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x202e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x202e24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202e28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202e28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202e2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202e30: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202e34: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202e38: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x202e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x202e3c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x202e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x202e40: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x202e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x202e44: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202e48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202e4c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202e50: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x202e50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x202e54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202e58: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202e58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202e5c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x202e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202e60: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202e64: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202e68: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x202e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x202e6c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x202E6Cu;
    {
        const bool branch_taken_0x202e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e6c) {
            ctx->pc = 0x202FC0u;
            goto label_202fc0;
        }
    }
    ctx->pc = 0x202E74u;
    // 0x202e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x202e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x202e78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x202e7c: 0x3c064800  lui         $a2, 0x4800
    ctx->pc = 0x202e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18432 << 16));
    // 0x202e80: 0x34c52a02  ori         $a1, $a2, 0x2A02
    ctx->pc = 0x202e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10754);
    // 0x202e84: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x202e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x202e88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x202e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x202e8c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x202e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x202e90: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x202e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x202e94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x202e98: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x202e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x202e9c: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x202e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x202ea0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x202ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202ea4: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x202ea8: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x202ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x202eac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x202eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202eb0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x202eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x202eb4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x202eb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x202eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x202ebc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202ec0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x202ec4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x202ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x202ec8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x202ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x202ecc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x202eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x202ed0: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x202ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x202ed4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202ed8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x202edc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202ee0: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202ee4: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x202ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202ee8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x202ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x202eec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202ef0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202ef4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x202ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202ef8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x202efc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202f00: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x202f04: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202f08: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202f0c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x202f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x202f10: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202f14: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202f18: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x202f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202f1c: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x202f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x202f20: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202f24: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f28: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f2c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x202f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x202f30: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202f34: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x202f38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x202f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x202f3c: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202f40: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202f44: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x202f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202f48: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x202f4c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202f50: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x202f50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202f54: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x202f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202f58: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x202f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x202f5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202f60: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f68: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x202f6c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202f70: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x202f74: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202f78: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x202f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202f7c: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x202f80: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x202f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x202f84: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x202f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x202f88: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x202f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202f8c: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x202f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x202f90: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x202f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x202f94: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f98: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x202f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f9c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x202f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x202fa0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202fa4: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x202fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x202fa8: 0x24c31a10  addiu       $v1, $a2, 0x1A10
    ctx->pc = 0x202fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6672));
    // 0x202fac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x202facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x202fb0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x202fb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x202fb4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x202FB4u;
    SET_GPR_U32(ctx, 31, 0x202FBCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x202FB4u, 0x202FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FBCu;
label_202fbc:
    // 0x202fbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x202fbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_202fc0:
    // 0x202fc0: 0x7260be28  paddub      $s7, $s3, $zero
    ctx->pc = 0x202fc0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x202fc4: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x202fc4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x202fc8: 0xafb500ec  sw          $s5, 0xEC($sp)
    ctx->pc = 0x202fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 21));
    // 0x202fcc: 0xafb600f0  sw          $s6, 0xF0($sp)
    ctx->pc = 0x202fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 22));
    // 0x202fd0: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x202fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202fd4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x202fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202fdc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x202fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x202fe0: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202fe4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x202fe4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x202fe8: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x202fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x202fec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202FECu;
    {
        const bool branch_taken_0x202fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202fec) {
            ctx->pc = 0x203000u;
            goto label_203000;
        }
    }
    ctx->pc = 0x202FF4u;
    // 0x202ff4: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x202ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x202ff8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x202ff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x202ffc: 0x0  nop
    ctx->pc = 0x202ffcu;
    // NOP
label_203000:
    // 0x203000: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203004: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203008: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x203008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x20300c: 0x0  nop
    ctx->pc = 0x20300cu;
    // NOP
label_203010:
    // 0x203010: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203014: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203018: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x203018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20301c: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x20301Cu;
    {
        const bool branch_taken_0x20301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20301c) {
            ctx->pc = 0x202D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d00;
        }
    }
    ctx->pc = 0x203024u;
    // 0x203024: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x203024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203028: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x203028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20302c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20302cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203030: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x203030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x203034: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x203038: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x20303c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203040: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x203040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x203044: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203048: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20304c: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x20304cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_203050:
    // 0x203050: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203054: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x203054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x203058: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x203058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20305c: 0x1460fdba  bnez        $v1, . + 4 + (-0x246 << 2)
    ctx->pc = 0x20305Cu;
    {
        const bool branch_taken_0x20305c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20305c) {
            ctx->pc = 0x202748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202748;
        }
    }
    ctx->pc = 0x203064u;
    // 0x203064: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x203064u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203068: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x203068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20306c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20306cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x203070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x203074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x203078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20307c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20307cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x203080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20308c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x20308cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x203090: 0x3e00008  jr          $ra
    ctx->pc = 0x203090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203098u;
}
