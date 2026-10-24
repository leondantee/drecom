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

// Function: Bg_layer_draw_LR
// Address: 0x2030a0 - 0x203b58
void Bg_layer_draw_LR_0x2030a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_layer_draw_LR_0x2030a0");
#endif

    switch (ctx->pc) {
        case 0x203238u: goto label_203238;
        case 0x20329cu: goto label_20329c;
        case 0x20334cu: goto label_20334c;
        case 0x20339cu: goto label_20339c;
        case 0x2037b8u: goto label_2037b8;
        case 0x203a7cu: goto label_203a7c;
        default: break;
    }

    ctx->pc = 0x2030a0u;

    // 0x2030a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2030a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2030a4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2030a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2030a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2030a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2030ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2030acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2030b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2030b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2030b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2030b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2030b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2030b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2030bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2030bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2030c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2030c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2030c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2030c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2030c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2030c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2030cc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2030ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2030d0: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x2030d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x2030d4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2030d8: 0x8c634828  lw          $v1, 0x4828($v1)
    ctx->pc = 0x2030d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18472)));
    // 0x2030dc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2030dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2030e0: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2030e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2030e4: 0x8cc34824  lw          $v1, 0x4824($a2)
    ctx->pc = 0x2030e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18468)));
    // 0x2030e8: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x2030e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x2030ec: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2030ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2030f0: 0x9066485d  lbu         $a2, 0x485D($v1)
    ctx->pc = 0x2030f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18525)));
    // 0x2030f4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2030f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2030f8: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x2030f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x2030fc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2030fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203100: 0x8c634820  lw          $v1, 0x4820($v1)
    ctx->pc = 0x203100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x203104: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x203104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x203108: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x203108u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20310c: 0xffa300a0  sd          $v1, 0xA0($sp)
    ctx->pc = 0x20310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
    // 0x203110: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x203110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203114: 0x8c634820  lw          $v1, 0x4820($v1)
    ctx->pc = 0x203114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x203118: 0x24730020  addiu       $s3, $v1, 0x20
    ctx->pc = 0x203118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20311c: 0xde660000  ld          $a2, 0x0($s3)
    ctx->pc = 0x20311cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x203120: 0xffa600a8  sd          $a2, 0xA8($sp)
    ctx->pc = 0x203120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 6));
    // 0x203124: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x203124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x203128: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x203128u;
    {
        const bool branch_taken_0x203128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203128) {
            ctx->pc = 0x203154u;
            goto label_203154;
        }
    }
    ctx->pc = 0x203130u;
    // 0x203130: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203134: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x203138: 0x90660004  lbu         $a2, 0x4($v1)
    ctx->pc = 0x203138u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20313c: 0x30f40001  andi        $s4, $a3, 0x1
    ctx->pc = 0x20313cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x203140: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x203140u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x203144: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x203148: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x203148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x20314c: 0xd53025  or          $a2, $a2, $s5
    ctx->pc = 0x20314cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x203150: 0xa0660004  sb          $a2, 0x4($v1)
    ctx->pc = 0x203150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
label_203154:
    // 0x203154: 0x93868010  lbu         $a2, -0x7FF0($gp)
    ctx->pc = 0x203154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x203158: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x203158u;
    {
        const bool branch_taken_0x203158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x203158) {
            ctx->pc = 0x203184u;
            goto label_203184;
        }
    }
    ctx->pc = 0x203160u;
    // 0x203160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203164: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x203164u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x203168: 0x92c60000  lbu         $a2, 0x0($s6)
    ctx->pc = 0x203168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20316c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20316cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x203170: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x203170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x203174: 0x2407ffdf  addiu       $a3, $zero, -0x21
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x203178: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x203178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x20317c: 0xc33825  or          $a3, $a2, $v1
    ctx->pc = 0x20317cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203180: 0xa2c70000  sb          $a3, 0x0($s6)
    ctx->pc = 0x203180u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
label_203184:
    // 0x203184: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x203184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203188: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x203188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20318c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20318cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203190: 0x0  nop
    ctx->pc = 0x203190u;
    // NOP
    // 0x203194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203198: 0xc4c0484c  lwc1        $f0, 0x484C($a2)
    ctx->pc = 0x203198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20319c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20319cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2031a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2031a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2031a4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2031a8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2031ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2031acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2031b0: 0x0  nop
    ctx->pc = 0x2031b0u;
    // NOP
    // 0x2031b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2031b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2031b8: 0xc4c04850  lwc1        $f0, 0x4850($a2)
    ctx->pc = 0x2031b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2031bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2031bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2031c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2031c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2031c4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2031c8: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2031cc: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x2031ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2031d0: 0x0  nop
    ctx->pc = 0x2031d0u;
    // NOP
    // 0x2031d4: 0x0  nop
    ctx->pc = 0x2031d4u;
    // NOP
    // 0x2031d8: 0x1812  mflo        $v1
    ctx->pc = 0x2031d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2031dc: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2031dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2031e0: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2031e4: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x2031e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2031e8: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x2031e8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2031ec: 0x0  nop
    ctx->pc = 0x2031ecu;
    // NOP
    // 0x2031f0: 0x0  nop
    ctx->pc = 0x2031f0u;
    // NOP
    // 0x2031f4: 0x3012  mflo        $a2
    ctx->pc = 0x2031f4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2031f8: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2031f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x2031fc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2031fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203200: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x203200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x203204: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x203204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x203208: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203208) {
            ctx->pc = 0x20321Cu;
            goto label_20321c;
        }
    }
    ctx->pc = 0x203210u;
    // 0x203210: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203214: 0x24632100  addiu       $v1, $v1, 0x2100
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8448));
    // 0x203218: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x203218u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_20321c:
    // 0x20321c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203220: 0xc4604858  lwc1        $f0, 0x4858($v1)
    ctx->pc = 0x203220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203224: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x203224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x203228: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x203228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x20322c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x20322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x203230: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x203230u;
    {
        const bool branch_taken_0x203230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203230) {
            ctx->pc = 0x203B10u;
            goto label_203b10;
        }
    }
    ctx->pc = 0x203238u;
label_203238:
    // 0x203238: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x203238u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20323c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203240: 0xc4604854  lwc1        $f0, 0x4854($v1)
    ctx->pc = 0x203240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203244: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x203244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x203248: 0x2626ff00  addiu       $a2, $s1, -0x100
    ctx->pc = 0x203248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x20324c: 0x2623ff00  addiu       $v1, $s1, -0x100
    ctx->pc = 0x20324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x203250: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x203250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x203254: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x203254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x203258: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20325c: 0x8c634838  lw          $v1, 0x4838($v1)
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18488)));
    // 0x203260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x203260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203264: 0x0  nop
    ctx->pc = 0x203264u;
    // NOP
    // 0x203268: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20326c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x203270: 0xc4209fa0  lwc1        $f0, -0x6060($at)
    ctx->pc = 0x203270u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203274: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x203274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x203278: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x203278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20327c: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x20327cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203280: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x203284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x203284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203288: 0x0  nop
    ctx->pc = 0x203288u;
    // NOP
    // 0x20328c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20328cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x203290: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x203290u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x203294: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x203294u;
    SET_GPR_U32(ctx, 31, 0x20329Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x203294u, 0x20329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20329Cu;
label_20329c:
    // 0x20329c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20329cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2032a0: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2032a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2032a4: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x2032a4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2032a8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2032ac: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x2032acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2032b0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2032b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2032b4: 0x33483  sra         $a2, $v1, 18
    ctx->pc = 0x2032b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 18));
    // 0x2032b8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2032bc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2032c0: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2032c0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2032c4: 0xafb100e4  sw          $s1, 0xE4($sp)
    ctx->pc = 0x2032c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 17));
    // 0x2032c8: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2032c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2032cc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2032d0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2032d4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2032d8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2032d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2032dc: 0x22483  sra         $a0, $v0, 18
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 18));
    // 0x2032e0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2032e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2032e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2032e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2032e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2032e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2032ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2032ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2032f0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2032f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2032f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2032f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2032f8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2032f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2032fc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2032FCu;
    {
        const bool branch_taken_0x2032fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032fc) {
            ctx->pc = 0x203354u;
            goto label_203354;
        }
    }
    ctx->pc = 0x203304u;
    // 0x203304: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203308: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x203308u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB0u));
    // 0x20330c: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x203310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x203310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x203314: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x203314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x203318: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x203318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x20331c: 0x34640808  ori         $a0, $v1, 0x808
    ctx->pc = 0x20331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x203320: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x203320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x203324: 0x3c031d07  lui         $v1, 0x1D07
    ctx->pc = 0x203324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7431 << 16));
    // 0x203328: 0x34640a00  ori         $a0, $v1, 0xA00
    ctx->pc = 0x203328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2560);
    // 0x20332c: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x20332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x203330: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x203330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x203334: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x203334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x203338: 0x24650dc0  addiu       $a1, $v1, 0xDC0
    ctx->pc = 0x203338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3520));
    // 0x20333c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203340: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203344: 0xc059b14  jal         func_166C50
    ctx->pc = 0x203344u;
    SET_GPR_U32(ctx, 31, 0x20334Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x203344u, 0x20334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20334Cu;
label_20334c:
    // 0x20334c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20334Cu;
    {
        const bool branch_taken_0x20334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20334c) {
            ctx->pc = 0x2033A0u;
            goto label_2033a0;
        }
    }
    ctx->pc = 0x203354u;
label_203354:
    // 0x203354: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203358: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB0u));
    // 0x20335c: 0x24620013  addiu       $v0, $v1, 0x13
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x203360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x203360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x203364: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x203364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x203368: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x203368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x20336c: 0x34640808  ori         $a0, $v1, 0x808
    ctx->pc = 0x20336cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x203370: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x203370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x203374: 0x3c051d07  lui         $a1, 0x1D07
    ctx->pc = 0x203374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7431 << 16));
    // 0x203378: 0x34a32800  ori         $v1, $a1, 0x2800
    ctx->pc = 0x203378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10240);
    // 0x20337c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x203380: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x203380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x203384: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x203388: 0x24450dc0  addiu       $a1, $v0, 0xDC0
    ctx->pc = 0x203388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x20338c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203390: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203394: 0xc059b14  jal         func_166C50
    ctx->pc = 0x203394u;
    SET_GPR_U32(ctx, 31, 0x20339Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x203394u, 0x20339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20339Cu;
label_20339c:
    // 0x20339c: 0x0  nop
    ctx->pc = 0x20339cu;
    // NOP
label_2033a0:
    // 0x2033a0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2033a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2033a4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2033a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2033a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2033ac: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x2033acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2033b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2033b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2033b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2033b8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2033b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2033bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2033bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2033c0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2033c4: 0x8c270ab8  lw          $a3, 0xAB8($at)
    ctx->pc = 0x2033c4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2033c8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2033c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x2033cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2033d0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2033d4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2033d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2033d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2033d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2033dc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2033dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2033e0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2033e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2033e4: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x2033e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2033e8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2033ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2033ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2033f0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2033f4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2033f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2033f8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2033f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2033fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203400: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203404: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203408: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20340c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20340cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203410: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x203410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x203414: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x203414u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x203418: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x203418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x20341c: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x20341cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x203420: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x203420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x203424: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x203424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203428: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x203428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x20342c: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x20342cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x203430: 0x333fc  dsll32      $a2, $v1, 15
    ctx->pc = 0x203430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 15));
    // 0x203434: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x203434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x203438: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20343c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203440: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x203440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x203444: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203448: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x203448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20344c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203450: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203454: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203458: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20345c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x20345cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x203460: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x203464: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203468: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203468u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20346c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20346cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203470: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203474: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203478: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x203478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20347c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203480: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203484: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x203488: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20348c: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20348Cu;
    {
        const bool branch_taken_0x20348c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x20348c) {
            ctx->pc = 0x2034E4u;
            goto label_2034e4;
        }
    }
    ctx->pc = 0x203494u;
    // 0x203494: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x203494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203498: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x203498u;
    {
        const bool branch_taken_0x203498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x203498) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x2034A0u;
    // 0x2034a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2034a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2034a4: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034A4u;
    {
        const bool branch_taken_0x2034a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2034a4) {
            ctx->pc = 0x2034B4u;
            goto label_2034b4;
        }
    }
    ctx->pc = 0x2034ACu;
    // 0x2034ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2034ACu;
    {
        const bool branch_taken_0x2034ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034ac) {
            ctx->pc = 0x203500u;
            goto label_203500;
        }
    }
    ctx->pc = 0x2034B4u;
label_2034b4:
    // 0x2034b4: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x2034b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2034b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2034b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2034bc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2034bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2034c0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2034c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2034c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2034C4u;
    {
        const bool branch_taken_0x2034c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034c4) {
            ctx->pc = 0x203510u;
            goto label_203510;
        }
    }
    ctx->pc = 0x2034CCu;
label_2034cc:
    // 0x2034cc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2034ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2034d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2034d4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2034d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2034d8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2034d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2034dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2034DCu;
    {
        const bool branch_taken_0x2034dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034dc) {
            ctx->pc = 0x203510u;
            goto label_203510;
        }
    }
    ctx->pc = 0x2034E4u;
label_2034e4:
    // 0x2034e4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2034e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2034e8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2034e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2034ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2034ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2034f0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2034f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2034f4: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2034f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2034f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2034F8u;
    {
        const bool branch_taken_0x2034f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034f8) {
            ctx->pc = 0x203510u;
            goto label_203510;
        }
    }
    ctx->pc = 0x203500u;
label_203500:
    // 0x203500: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203504: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203508: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x203508u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x20350c: 0x0  nop
    ctx->pc = 0x20350cu;
    // NOP
label_203510:
    // 0x203510: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x203510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x203514: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203518: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20351c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20351cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203520: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203524: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203524u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203528: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20352c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203530: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x203534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x203538: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x203538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20353c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x20353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x203540: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x203540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x203544: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x203544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x203548: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x203548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20354c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20354cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203550: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203554: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x203554u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x203558: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20355c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203560: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203564: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203564u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203568: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20356c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203570: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203574: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203578: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x20357c: 0xdfa600a0  ld          $a2, 0xA0($sp)
    ctx->pc = 0x20357cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x203580: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203584: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203588: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x203588u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x20358c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x20358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203590: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203594: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203598: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203598u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x20359c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035a0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2035a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2035a8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035ac: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2035acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2035b0: 0x93838010  lbu         $v1, -0x7FF0($gp)
    ctx->pc = 0x2035b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x2035b4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2035B4u;
    {
        const bool branch_taken_0x2035b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035b4) {
            ctx->pc = 0x2035E4u;
            goto label_2035e4;
        }
    }
    ctx->pc = 0x2035BCu;
    // 0x2035bc: 0xdfa600a8  ld          $a2, 0xA8($sp)
    ctx->pc = 0x2035bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2035c0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035c4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035c8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2035c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2035cc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2035d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035d4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035d8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2035d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2035dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x203600u;
            goto label_203600;
        }
    }
    ctx->pc = 0x2035E4u;
label_2035e4:
    // 0x2035e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035e8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035ec: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2035ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2035f0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2035f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2035f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035f8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035fc: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2035fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_203600:
    // 0x203600: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203604: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203608: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20360c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20360cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203610: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203614: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20361c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20361cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x203620: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203624: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x203624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203628: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x203628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x20362c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x203630: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203634: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203638: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20363c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20363cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203640: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203644: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203648: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203648u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20364c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x20364cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x203650: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x203650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x203654: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203658: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20365c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20365cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203660: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203664: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203668: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20366c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203670: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203674: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x203674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203678: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20367c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20367cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203680: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x203680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x203684: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x203684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203688: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x203688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20368c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20368cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203690: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203694: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203698: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x203698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x20369c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x20369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2036a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2036a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2036a4: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2036a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2036a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2036ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2036acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2036b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2036b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2036b4: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2036b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2036b8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2036b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2036bc: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2036c0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2036c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2036c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2036c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2036c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2036c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2036cc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2036d0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2036d4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2036d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2036d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2036dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2036dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2036e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2036e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2036e4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2036e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2036e8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2036e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2036ec: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2036f0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2036f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2036f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2036f8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2036f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2036fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2036fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203700: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203704: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203708: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x203708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20370c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203710: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203714: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x203714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x203718: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x203718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20371c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203720: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203724: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x203724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x203728: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x203728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x20372c: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x20372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x203730: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x203730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203734: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x203734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203738: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x203738u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20373c: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x20373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x203740: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x203744: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20374c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20374cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203750: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x203750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x203754: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203758: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x203758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20375c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x203760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x203764: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203768: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x203768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20376c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203770: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203774: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203774u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203778: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20377c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20377cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203780: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203784: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203788: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x20378c: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x20378cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203790: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x203790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203794: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x203794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203798: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x203798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x20379c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x20379cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2037a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2037a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2037a4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2037a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2037a8: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x2037a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x2037ac: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2037acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2037b0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2037B0u;
    {
        const bool branch_taken_0x2037b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2037b0) {
            ctx->pc = 0x203AD0u;
            goto label_203ad0;
        }
    }
    ctx->pc = 0x2037B8u;
label_2037b8:
    // 0x2037b8: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2037b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2037bc: 0x2466ff00  addiu       $a2, $v1, -0x100
    ctx->pc = 0x2037bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x2037c0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2037c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2037c4: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x2037c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x2037c8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2037c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2037cc: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2037ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2037d0: 0x2329821  addu        $s3, $s1, $s2
    ctx->pc = 0x2037d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2037d4: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2037d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2037d8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2037dc: 0xc33818  mult        $a3, $a2, $v1
    ctx->pc = 0x2037dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2037e0: 0x71c83  sra         $v1, $a3, 18
    ctx->pc = 0x2037e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 18));
    // 0x2037e4: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2037e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2037e8: 0xc3a023  subu        $s4, $a2, $v1
    ctx->pc = 0x2037e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2037ec: 0x232a821  addu        $s5, $s1, $s2
    ctx->pc = 0x2037ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2037f0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2037f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2037f4: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x2037f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2037f8: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x2037f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2037fc: 0x63483  sra         $a2, $a2, 18
    ctx->pc = 0x2037fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 18));
    // 0x203800: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x203800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x203804: 0x66b023  subu        $s6, $v1, $a2
    ctx->pc = 0x203804u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x203808: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x203808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20380c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x20380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203810: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203814: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203818: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203818u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20381c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x20381cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x203820: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x203820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203824: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x203824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203828: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20382c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203830: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203834: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x203834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x203838: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x203838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x20383c: 0x24677000  addiu       $a3, $v1, 0x7000
    ctx->pc = 0x20383cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x203840: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x203840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x203844: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x203844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x203848: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x203848u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x20384c: 0x1630c0  sll         $a2, $s6, 3
    ctx->pc = 0x20384cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x203850: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x203850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x203854: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x203854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203858: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x203858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20385c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20385cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203860: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x203860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x203864: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x203864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x203868: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20386c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20386cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203870: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x203870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x203874: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x203874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203878: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x203878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x20387c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20387cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203880: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203884: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203884u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203888: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20388c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20388cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203890: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203894: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203898: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x20389c: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x20389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2038a0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2038a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2038a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2038a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2038a8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2038a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2038ac: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2038b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2038b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2038b4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2038b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2038b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2038b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2038bc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2038c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2038c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2038c4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2038c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2038c8: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x2038c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2038cc: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2038ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2038d0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2038d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2038d4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2038d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2038d8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2038dc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2038e0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2038e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2038e4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2038e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2038e8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2038e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2038ec: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x2038ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x2038f0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2038f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2038f4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2038f8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2038f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2038fc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2038fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x203900: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x203900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x203904: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x203904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x203908: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20390c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20390cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203910: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203910u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203914: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203918: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20391c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x20391cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203920: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203924: 0xac260ab8  sw          $a2, 0xAB8($at)
    ctx->pc = 0x203924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203928: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x203928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x20392c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x20392Cu;
    {
        const bool branch_taken_0x20392c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20392c) {
            ctx->pc = 0x203A80u;
            goto label_203a80;
        }
    }
    ctx->pc = 0x203934u;
    // 0x203934: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x203934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x203938: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x203938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x20393c: 0x3c024800  lui         $v0, 0x4800
    ctx->pc = 0x20393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18432 << 16));
    // 0x203940: 0x34422a02  ori         $v0, $v0, 0x2A02
    ctx->pc = 0x203940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10754);
    // 0x203944: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x203944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x203948: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x203948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x20394c: 0x346400ff  ori         $a0, $v1, 0xFF
    ctx->pc = 0x20394cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x203950: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x203954: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x203954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x203958: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x20395c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x20395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x203960: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x203960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x203964: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x203968: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x20396c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x203970: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x203970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x203974: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x203978: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x203978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20397c: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x20397cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x203980: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x203980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203984: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x203988: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x203988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20398c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x20398cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x203990: 0x24647000  addiu       $a0, $v1, 0x7000
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x203994: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x203994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x203998: 0x1428c0  sll         $a1, $s4, 3
    ctx->pc = 0x203998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x20399c: 0x24a67900  addiu       $a2, $a1, 0x7900
    ctx->pc = 0x20399cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x2039a0: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2039a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2039a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2039a8: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2039ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2039acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2039b0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2039b4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2039b8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x2039b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2039bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2039bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2039c0: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2039c4: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x2039c8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2039c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2039cc: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x2039ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x2039d0: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x2039d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2039d4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2039d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2039d8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2039d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2039dc: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x2039dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2039e0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2039e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2039e4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2039e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2039e8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2039e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2039ec: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2039ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2039f0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2039f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2039f4: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2039f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2039f8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2039f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2039fc: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x2039fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x203a00: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x203a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203a04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x203a08: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x203a08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x203a0c: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x203a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x203a10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x203a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x203a14: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203a18: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x203a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x203a1c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x203a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x203a20: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x203a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x203a24: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x203a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203a28: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x203a2c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x203a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x203a30: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x203a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x203a34: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x203a38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x203a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203a3c: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x203a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x203a40: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x203a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x203a44: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x203a44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x203a48: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x203a4c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x203a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x203a50: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x203a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x203a54: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x203a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x203a58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203a5c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x203a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x203a60: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x203a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x203a64: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x203a68: 0x24631a10  addiu       $v1, $v1, 0x1A10
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6672));
    // 0x203a6c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x203a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x203a70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x203a70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x203a74: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x203A74u;
    SET_GPR_U32(ctx, 31, 0x203A7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x203A74u, 0x203A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A7Cu;
label_203a7c:
    // 0x203a7c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x203a7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_203a80:
    // 0x203a80: 0x7260be28  paddub      $s7, $s3, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x203a84: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x203a84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x203a88: 0xafb500e4  sw          $s5, 0xE4($sp)
    ctx->pc = 0x203a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 21));
    // 0x203a8c: 0xafb600e8  sw          $s6, 0xE8($sp)
    ctx->pc = 0x203a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 22));
    // 0x203a90: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x203a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203a94: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x203a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203a98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203a9c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x203a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x203aa0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x203aa4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x203aa4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x203aa8: 0x938680d0  lbu         $a2, -0x7F30($gp)
    ctx->pc = 0x203aa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x203aac: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AC0u;
            goto label_203ac0;
        }
    }
    ctx->pc = 0x203AB4u;
    // 0x203ab4: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x203ab8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x203ab8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x203abc: 0x0  nop
    ctx->pc = 0x203abcu;
    // NOP
label_203ac0:
    // 0x203ac0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x203ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x203ac4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203ac8: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x203ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x203acc: 0x0  nop
    ctx->pc = 0x203accu;
    // NOP
label_203ad0:
    // 0x203ad0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x203ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x203ad4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x203ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203ad8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x203ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x203adc: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x203ADCu;
    {
        const bool branch_taken_0x203adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203adc) {
            ctx->pc = 0x2037B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2037b8;
        }
    }
    ctx->pc = 0x203AE4u;
    // 0x203ae4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x203ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203ae8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x203ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203aec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203af0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x203af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x203af4: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x203af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203af8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203afc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x203afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203b00: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x203b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x203b04: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x203b08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203b0c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x203b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_203b10:
    // 0x203b10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x203b14: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x203b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x203b18: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x203b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x203b1c: 0x1460fdc6  bnez        $v1, . + 4 + (-0x23A << 2)
    ctx->pc = 0x203B1Cu;
    {
        const bool branch_taken_0x203b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203b1c) {
            ctx->pc = 0x203238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203238;
        }
    }
    ctx->pc = 0x203B24u;
    // 0x203b24: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x203b24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203b28: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x203b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203b2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x203b2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203b30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x203b30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203b34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x203b34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203b38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x203b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x203b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x203b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203b4c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x203b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x203b50: 0x3e00008  jr          $ra
    ctx->pc = 0x203B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203B58u;
}
