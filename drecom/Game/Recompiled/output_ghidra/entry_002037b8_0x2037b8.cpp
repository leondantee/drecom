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

// Function: entry_002037b8
// Address: 0x2037b8 - 0x203a80
void entry_002037b8_0x2037b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002037b8_0x2037b8");
#endif

    switch (ctx->pc) {
        case 0x203a7cu: goto label_203a7c;
        default: break;
    }

    ctx->pc = 0x2037b8u;

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
            return;
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
    ctx->pc = 0x203a80u;
}
