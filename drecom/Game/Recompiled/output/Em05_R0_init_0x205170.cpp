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

// Function: Em05_R0_init
// Address: 0x205170 - 0x2056f0
void Em05_R0_init_0x205170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R0_init_0x205170");
#endif

    switch (ctx->pc) {
        case 0x2051a8u: goto label_2051a8;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052e8u: goto label_2052e8;
        case 0x205330u: goto label_205330;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053f8u: goto label_2053f8;
        case 0x20549cu: goto label_20549c;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054ecu: goto label_2054ec;
        case 0x205514u: goto label_205514;
        case 0x20553cu: goto label_20553c;
        case 0x205564u: goto label_205564;
        case 0x20558cu: goto label_20558c;
        case 0x2055b4u: goto label_2055b4;
        case 0x20561cu: goto label_20561c;
        case 0x205650u: goto label_205650;
        case 0x2056a0u: goto label_2056a0;
        default: break;
    }

    ctx->pc = 0x205170u;

    // 0x205170: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x205170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x205174: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x205174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x205178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x205178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20517c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x205180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x205184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20518c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x20518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x205190: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205194: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x205194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x205198: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x205198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20519c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20519cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2051a0: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x2051A0u;
    SET_GPR_U32(ctx, 31, 0x2051A8u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x2051A0u, 0x2051A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051A8u;
label_2051a8:
    // 0x2051a8: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x2051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x2051ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2051acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2051b0: 0x0  nop
    ctx->pc = 0x2051b0u;
    // NOP
    // 0x2051b4: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x2051b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2051b8: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x2051b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2051bc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2051bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2051c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2051c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2051c4: 0x0  nop
    ctx->pc = 0x2051c4u;
    // NOP
    // 0x2051c8: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x2051c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2051cc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2051ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2051d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2051d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2051d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2051d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2051d8: 0x0  nop
    ctx->pc = 0x2051d8u;
    // NOP
    // 0x2051dc: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x2051dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x2051e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2051e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2051e4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2051e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2051e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2051e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2051ec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2051ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2051f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2051f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2051f4: 0x0  nop
    ctx->pc = 0x2051f4u;
    // NOP
    // 0x2051f8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2051f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2051fc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x2051fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x205200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205204: 0x0  nop
    ctx->pc = 0x205204u;
    // NOP
    // 0x205208: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x205208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x20520c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x205210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205214: 0x0  nop
    ctx->pc = 0x205214u;
    // NOP
    // 0x205218: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x205218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x20521c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205220: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x205220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x205224: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x205224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x205228: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20522c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x205230: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x205230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x205234: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x205238: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x20523c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x205240: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x205240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x205244: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x205244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x205248: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x205248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x20524c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20524cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205254: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x205254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x205258: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x205258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x20525c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x20525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x205260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205264: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205268: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x205268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x20526c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205270: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205274: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x205274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x205278: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20527c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20527cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x205280: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205284: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x205284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205288: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20528c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x20528cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205290: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205294: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x205294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x205298: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20529c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x20529cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2052a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2052a4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2052a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2052ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2052acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2052b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2052B0u;
    SET_GPR_U32(ctx, 31, 0x2052B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2052B0u, 0x2052B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052B8u;
label_2052b8:
    // 0x2052b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2052b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2052bc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2052BCu;
    SET_GPR_U32(ctx, 31, 0x2052C4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2052BCu, 0x2052C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052C4u;
label_2052c4:
    // 0x2052c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2052c8: 0xac401334  sw          $zero, 0x1334($v0)
    ctx->pc = 0x2052c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4916), GPR_U32(ctx, 0));
    // 0x2052cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2052ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2052d0: 0xa4209270  sh          $zero, -0x6D90($at)
    ctx->pc = 0x2052d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x2052d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2052d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2052d8: 0xac401354  sw          $zero, 0x1354($v0)
    ctx->pc = 0x2052d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 0));
    // 0x2052dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2052dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2052e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2052E0u;
    {
        const bool branch_taken_0x2052e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2052e0) {
            ctx->pc = 0x205318u;
            goto label_205318;
        }
    }
    ctx->pc = 0x2052E8u;
label_2052e8:
    // 0x2052e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2052ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2052f0: 0x244203b0  addiu       $v0, $v0, 0x3B0
    ctx->pc = 0x2052f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x2052f4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2052f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2052f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2052fc: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x205300: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x205300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205304: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20530c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205310: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x205310u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x205314: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205318:
    // 0x205318: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x205318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20531c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20531Cu;
    {
        const bool branch_taken_0x20531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20531c) {
            ctx->pc = 0x2052E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052e8;
        }
    }
    ctx->pc = 0x205324u;
    // 0x205324: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x205324u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x205328u;
    {
        const bool branch_taken_0x205328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205328) {
            ctx->pc = 0x205350u;
            goto label_205350;
        }
    }
    ctx->pc = 0x205330u;
label_205330:
    // 0x205330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205334: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x205334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x205338: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x205338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20533c: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x20533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x205340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205344: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x205348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20534c: 0x0  nop
    ctx->pc = 0x20534cu;
    // NOP
label_205350:
    // 0x205350: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x205350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x205354: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x205354u;
    {
        const bool branch_taken_0x205354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205354) {
            ctx->pc = 0x205330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205330;
        }
    }
    ctx->pc = 0x20535Cu;
    // 0x20535c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x205360: 0x2443a0a0  addiu       $v1, $v0, -0x5F60
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x205364: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205368: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x205368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x20536c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x20536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x205370: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205374: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x205374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x205378: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20537c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205380: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x205380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x205384: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205388: 0xac401340  sw          $zero, 0x1340($v0)
    ctx->pc = 0x205388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 0));
    // 0x20538c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205394: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205398: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x205398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x20539c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2053a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053a4: 0xac40134c  sw          $zero, 0x134C($v0)
    ctx->pc = 0x2053a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 0));
    // 0x2053a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053ac: 0xac401354  sw          $zero, 0x1354($v0)
    ctx->pc = 0x2053acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 0));
    // 0x2053b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053b4: 0xac40135c  sw          $zero, 0x135C($v0)
    ctx->pc = 0x2053b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4956), GPR_U32(ctx, 0));
    // 0x2053b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053bc: 0xac401360  sw          $zero, 0x1360($v0)
    ctx->pc = 0x2053bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4960), GPR_U32(ctx, 0));
    // 0x2053c0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2053c4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2053c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2053c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2053c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2053cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2053ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2053d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2053d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2053d8: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x2053d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2053dc: 0xc05d190  jal         func_174640
    ctx->pc = 0x2053DCu;
    SET_GPR_U32(ctx, 31, 0x2053E4u);
    ctx->pc = 0x174640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174640u, 0x2053DCu, 0x2053E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053E4u;
label_2053e4:
    // 0x2053e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053e8: 0xac401364  sw          $zero, 0x1364($v0)
    ctx->pc = 0x2053e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4964), GPR_U32(ctx, 0));
    // 0x2053ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2053ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2053f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2053F0u;
    {
        const bool branch_taken_0x2053f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2053f0) {
            ctx->pc = 0x205410u;
            goto label_205410;
        }
    }
    ctx->pc = 0x2053F8u;
label_2053f8:
    // 0x2053f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2053fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2053fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x205400: 0x24429320  addiu       $v0, $v0, -0x6CE0
    ctx->pc = 0x205400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939424));
    // 0x205404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205408: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20540c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20540cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205410:
    // 0x205410: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x205410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x205414: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x205414u;
    {
        const bool branch_taken_0x205414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205414) {
            ctx->pc = 0x2053F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2053f8;
        }
    }
    ctx->pc = 0x20541Cu;
    // 0x20541c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205420: 0xac401370  sw          $zero, 0x1370($v0)
    ctx->pc = 0x205420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4976), GPR_U32(ctx, 0));
    // 0x205424: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205428: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20542c: 0x24530c60  addiu       $s3, $v0, 0xC60
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x205430: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205430u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205434: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205438: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20543c: 0x24530d80  addiu       $s3, $v0, 0xD80
    ctx->pc = 0x20543cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x205440: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205440u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205444: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205448: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20544c: 0x24530e10  addiu       $s3, $v0, 0xE10
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3600));
    // 0x205450: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205450u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205454: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205458: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20545c: 0x24530cf0  addiu       $s3, $v0, 0xCF0
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x205460: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205460u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205464: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205468: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20546c: 0x24530ea0  addiu       $s3, $v0, 0xEA0
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x205470: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205470u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205474: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x205474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x205478: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x205478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x20547c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205480: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205484: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x205484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x205488: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205488u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20548c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20548cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205490: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205494: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205494u;
    SET_GPR_U32(ctx, 31, 0x20549Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205494u, 0x20549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20549Cu;
label_20549c:
    // 0x20549c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x20549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2054a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2054a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2054a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2054a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2054a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2054a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2054ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2054acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2054b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2054b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2054b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2054b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2054b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2054b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2054bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2054BCu;
    SET_GPR_U32(ctx, 31, 0x2054C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2054BCu, 0x2054C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054C4u;
label_2054c4:
    // 0x2054c4: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x2054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x2054c8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2054c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2054cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2054ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2054d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2054d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2054d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2054d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2054d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2054d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2054dc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2054e0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2054e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2054e4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2054E4u;
    SET_GPR_U32(ctx, 31, 0x2054ECu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2054E4u, 0x2054ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054ECu;
label_2054ec:
    // 0x2054ec: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x2054f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2054f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2054f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2054f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2054f8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2054f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2054fc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2054fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x205500: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205500u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205504: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x205504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205508: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20550c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20550Cu;
    SET_GPR_U32(ctx, 31, 0x205514u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20550Cu, 0x205514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205514u;
label_205514:
    // 0x205514: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x205518: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x205518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20551c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205520: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205524: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x205524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x205528: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205528u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20552c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205530: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205534: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205534u;
    SET_GPR_U32(ctx, 31, 0x20553Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205534u, 0x20553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20553Cu;
label_20553c:
    // 0x20553c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x205540: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x205540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x205544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205548: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20554c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x205550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205554: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205558: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20555c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20555Cu;
    SET_GPR_U32(ctx, 31, 0x205564u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20555Cu, 0x205564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205564u;
label_205564:
    // 0x205564: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x205568: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x205568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x20556c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20556cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205570: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205574: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x205574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x205578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20557c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205580: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205584: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205584u;
    SET_GPR_U32(ctx, 31, 0x20558Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205584u, 0x20558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20558Cu;
label_20558c:
    // 0x20558c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x205590: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x205590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x205594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205598: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20559c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x20559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2055a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2055a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2055a4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2055a8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2055ac: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2055ACu;
    SET_GPR_U32(ctx, 31, 0x2055B4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2055ACu, 0x2055B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055B4u;
label_2055b4:
    // 0x2055b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2055b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2055b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055c0: 0xe420937c  swc1        $f0, -0x6C84($at)
    ctx->pc = 0x2055c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61937Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61937Cu, _value); } while (0); }
    // 0x2055c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2055c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2055c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055d0: 0xe420935c  swc1        $f0, -0x6CA4($at)
    ctx->pc = 0x2055d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61935Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61935Cu, _value); } while (0); }
    // 0x2055d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2055d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055dc: 0xe4209368  swc1        $f0, -0x6C98($at)
    ctx->pc = 0x2055dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619368u, _value); } while (0); }
    // 0x2055e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055e4: 0xe4209364  swc1        $f0, -0x6C9C($at)
    ctx->pc = 0x2055e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619364u, _value); } while (0); }
    // 0x2055e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055ec: 0xe4209360  swc1        $f0, -0x6CA0($at)
    ctx->pc = 0x2055ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619360u, _value); } while (0); }
    // 0x2055f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2055f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055f8: 0xe4209378  swc1        $f0, -0x6C88($at)
    ctx->pc = 0x2055f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619378u, _value); } while (0); }
    // 0x2055fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205600: 0xe4209374  swc1        $f0, -0x6C8C($at)
    ctx->pc = 0x205600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619374u, _value); } while (0); }
    // 0x205604: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x205604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205608: 0xe4209370  swc1        $f0, -0x6C90($at)
    ctx->pc = 0x205608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619370u, _value); } while (0); }
    // 0x20560c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x205610: 0x24449350  addiu       $a0, $v0, -0x6CB0
    ctx->pc = 0x205610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
    // 0x205614: 0xc05da88  jal         func_176A20
    ctx->pc = 0x205614u;
    SET_GPR_U32(ctx, 31, 0x20561Cu);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x205614u, 0x20561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20561Cu;
label_20561c:
    // 0x20561c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205620: 0xac229380  sw          $v0, -0x6C80($at)
    ctx->pc = 0x205620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619380u, _value); } while (0);
    // 0x205624: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x205624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x205628: 0x2442a160  addiu       $v0, $v0, -0x5EA0
    ctx->pc = 0x205628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943072));
    // 0x20562c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x20562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x205630: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x205630u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A160u));
    // 0x205634: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x205634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x205638: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x205638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20563c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x20563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205640: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205644: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x205648: 0xc0bb950  jal         func_2EE540
    ctx->pc = 0x205648u;
    SET_GPR_U32(ctx, 31, 0x205650u);
    ctx->pc = 0x2EE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE540u, 0x205648u, 0x205650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205650u;
label_205650:
    // 0x205650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x205650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205654: 0xac229310  sw          $v0, -0x6CF0($at)
    ctx->pc = 0x205654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619310u, _value); } while (0);
    // 0x205658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x205658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20565c: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x205660: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x205660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x205664: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x205664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x205668: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x205668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20566c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20566cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x205670: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205674: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x205674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x205678: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x205678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x20567c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x20567cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x205680: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x205680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x205684: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x205684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x205688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20568c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205690: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x205690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x205694: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x205694u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x205698u;
    {
        const bool branch_taken_0x205698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205698) {
            ctx->pc = 0x2056C0u;
            goto label_2056c0;
        }
    }
    ctx->pc = 0x2056A0u;
label_2056a0:
    // 0x2056a0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2056a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2056a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2056a8: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2056ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2056b0: 0x8c741390  lw          $s4, 0x1390($v1)
    ctx->pc = 0x2056b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2056b4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2056b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2056b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2056b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2056bc: 0x0  nop
    ctx->pc = 0x2056bcu;
    // NOP
label_2056c0:
    // 0x2056c0: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x2056c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2056c4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2056C4u;
    {
        const bool branch_taken_0x2056c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2056c4) {
            ctx->pc = 0x2056A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2056a0;
        }
    }
    ctx->pc = 0x2056CCu;
    // 0x2056cc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2056ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2056d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2056d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2056d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2056d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2056d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2056d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2056dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2056dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2056e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2056e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056e4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2056e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2056e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2056E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2056E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2056F0u;
}
