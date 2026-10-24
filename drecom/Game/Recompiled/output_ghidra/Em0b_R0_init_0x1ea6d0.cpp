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

// Function: Em0b_R0_init
// Address: 0x1ea6d0 - 0x1ebc54
void Em0b_R0_init_0x1ea6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R0_init_0x1ea6d0");
#endif

    switch (ctx->pc) {
        case 0x1ea7a0u: goto label_1ea7a0;
        case 0x1ea838u: goto label_1ea838;
        case 0x1eaa04u: goto label_1eaa04;
        case 0x1eaa40u: goto label_1eaa40;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1ead20u: goto label_1ead20;
        case 0x1eadacu: goto label_1eadac;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae44u: goto label_1eae44;
        case 0x1eaeb0u: goto label_1eaeb0;
        case 0x1eaf1cu: goto label_1eaf1c;
        case 0x1eaf2cu: goto label_1eaf2c;
        case 0x1eaf40u: goto label_1eaf40;
        case 0x1eafdcu: goto label_1eafdc;
        case 0x1eb060u: goto label_1eb060;
        case 0x1eb0a0u: goto label_1eb0a0;
        case 0x1eb0e0u: goto label_1eb0e0;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2d8u: goto label_1eb2d8;
        case 0x1eb320u: goto label_1eb320;
        case 0x1eb334u: goto label_1eb334;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb730u: goto label_1eb730;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb824u: goto label_1eb824;
        case 0x1eb874u: goto label_1eb874;
        case 0x1eb974u: goto label_1eb974;
        case 0x1eb9c4u: goto label_1eb9c4;
        case 0x1eb9ecu: goto label_1eb9ec;
        case 0x1eba90u: goto label_1eba90;
        case 0x1ebae8u: goto label_1ebae8;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebbc0u: goto label_1ebbc0;
        case 0x1ebbf0u: goto label_1ebbf0;
        default: break;
    }

    ctx->pc = 0x1ea6d0u;

    // 0x1ea6d0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1ea6d4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1ea6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1ea6d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ea6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ea6dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ea6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ea6e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ea6e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea6e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea6ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea6f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea6fc: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x1ea6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x1ea700: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea704: 0xac200a98  sw          $zero, 0xA98($at)
    ctx->pc = 0x1ea704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A98u, _value); } while (0);
    // 0x1ea708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea70c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea710: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ea710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ea714: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea718: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1ea718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea71c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea720: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ea720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea724: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1ea724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea728: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1ea728u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea72c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1ea72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea730: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1ea730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1ea734: 0x3c0743c8  lui         $a3, 0x43C8
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17352 << 16));
    // 0x1ea738: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ea738u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea73c: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1ea73cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea740: 0xe50011e0  swc1        $f0, 0x11E0($t0)
    ctx->pc = 0x1ea740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4576), bits); }
    // 0x1ea744: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x1ea744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x1ea748: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1ea748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1ea74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea750: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea754: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x1ea754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x1ea758: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea75c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1ea75cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1ea760: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ea760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ea764: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1ea764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1ea768: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EA768u;
    {
        const bool branch_taken_0x1ea768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea768) {
            ctx->pc = 0x1EA830u;
            goto label_1ea830;
        }
    }
    ctx->pc = 0x1EA770u;
    // 0x1ea770: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea774: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x1ea774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x1ea778: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea77c: 0x90851308  lbu         $a1, 0x1308($a0)
    ctx->pc = 0x1ea77cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x1ea780: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ea780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ea784: 0x30e80080  andi        $t0, $a3, 0x80
    ctx->pc = 0x1ea784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x1ea788: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA788u;
    {
        const bool branch_taken_0x1ea788 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea788) {
            ctx->pc = 0x1EA7A0u;
            goto label_1ea7a0;
        }
    }
    ctx->pc = 0x1EA790u;
    // 0x1ea790: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1ea790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1ea794: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea798: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x1EA798u;
    SET_GPR_U32(ctx, 31, 0x1EA7A0u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x1EA798u, 0x1EA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7A0u;
label_1ea7a0:
    // 0x1ea7a0: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x1ea7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x1ea7a4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ea7a8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1ea7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1ea7ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ea7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ea7b0: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x1ea7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x1ea7b4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1ea7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7bc: 0x0  nop
    ctx->pc = 0x1ea7bcu;
    // NOP
    // 0x1ea7c0: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x1ea7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x1ea7c4: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x1ea7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x1ea7c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ea7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ea7cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7d0: 0x0  nop
    ctx->pc = 0x1ea7d0u;
    // NOP
    // 0x1ea7d4: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1ea7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1ea7d8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1ea7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7e0: 0x0  nop
    ctx->pc = 0x1ea7e0u;
    // NOP
    // 0x1ea7e4: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x1ea7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x1ea7e8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea7ec: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1ea7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ea7f0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1ea7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1ea7f4: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x1ea7f8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1ea7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea7fc: 0x24c700d0  addiu       $a3, $a2, 0xD0
    ctx->pc = 0x1ea7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x1ea800: 0xae47000c  sw          $a3, 0xC($s2)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 7));
    // 0x1ea804: 0x3c08c348  lui         $t0, 0xC348
    ctx->pc = 0x1ea804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49992 << 16));
    // 0x1ea808: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1ea808u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea80c: 0x0  nop
    ctx->pc = 0x1ea80cu;
    // NOP
    // 0x1ea810: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x1ea810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1ea814: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ea818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea81c: 0x0  nop
    ctx->pc = 0x1ea81cu;
    // NOP
    // 0x1ea820: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1ea820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1ea824: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea828: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1ea828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x1ea82c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ea82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1ea830:
    // 0x1ea830: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EA830u;
    SET_GPR_U32(ctx, 31, 0x1EA838u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EA830u, 0x1EA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA838u;
label_1ea838:
    // 0x1ea838: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ea83c: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x1ea83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ea840: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ea844: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ea844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ea848: 0x24649c20  addiu       $a0, $v1, -0x63E0
    ctx->pc = 0x1ea848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1ea84c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1ea84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea850: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x1ea850u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea854: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea858: 0xa44710a6  sh          $a3, 0x10A6($v0)
    ctx->pc = 0x1ea858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ea85c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea860: 0x90280e05  lbu         $t0, 0xE05($at)
    ctx->pc = 0x1ea860u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1ea864: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1ea864u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ea868: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea86c: 0x15090005  bne         $t0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA86Cu;
    {
        const bool branch_taken_0x1ea86c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ea86c) {
            ctx->pc = 0x1EA884u;
            goto label_1ea884;
        }
    }
    ctx->pc = 0x1EA874u;
    // 0x1ea874: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea878: 0x844a10a6  lh          $t2, 0x10A6($v0)
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x1ea87c: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1ea880: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1ea880u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ea884:
    // 0x1ea884: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea888: 0x90250e05  lbu         $a1, 0xE05($at)
    ctx->pc = 0x1ea888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1ea88c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ea88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ea890: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea894: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EA894u;
    {
        const bool branch_taken_0x1ea894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea894) {
            ctx->pc = 0x1EA8C8u;
            goto label_1ea8c8;
        }
    }
    ctx->pc = 0x1EA89Cu;
    // 0x1ea89c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8a0: 0x84a210a6  lh          $v0, 0x10A6($a1)
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x1ea8a4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1ea8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ea8a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ea8ac: 0x53043  sra         $a2, $a1, 1
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1ea8b0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1ea8b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ea8b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8bc: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ea8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ea8c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea8c4: 0xa48210a6  sh          $v0, 0x10A6($a0)
    ctx->pc = 0x1ea8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 2));
label_1ea8c8:
    // 0x1ea8c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ea8d0: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1ea8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1ea8d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ea8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ea8d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ea8dc: 0x24439c40  addiu       $v1, $v0, -0x63C0
    ctx->pc = 0x1ea8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
    // 0x1ea8e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8e4: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x1ea8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x1ea8e8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x1ea8ec: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8f0: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x1ea8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x1ea8f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ea8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea8f8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8fc: 0xa0821219  sb          $v0, 0x1219($a0)
    ctx->pc = 0x1ea8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4633), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ea900: 0x3c06466a  lui         $a2, 0x466A
    ctx->pc = 0x1ea900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18026 << 16));
    // 0x1ea904: 0x34c56000  ori         $a1, $a2, 0x6000
    ctx->pc = 0x1ea904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24576);
    // 0x1ea908: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ea908u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea90c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea910: 0xe4e011e8  swc1        $f0, 0x11E8($a3)
    ctx->pc = 0x1ea910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4584), bits); }
    // 0x1ea914: 0x24080027  addiu       $t0, $zero, 0x27
    ctx->pc = 0x1ea914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ea918: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea91c: 0xa04810a9  sb          $t0, 0x10A9($v0)
    ctx->pc = 0x1ea91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4265), (uint8_t)GPR_U32(ctx, 8));
    // 0x1ea920: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea924: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x1ea924u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea928: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea92c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1ea92cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea930: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea934: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ea934u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea93c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea940: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ea940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1ea944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea948: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea94c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1ea94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1ea950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea954: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea958: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ea958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1ea95c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea960: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1ea960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1ea964: 0x245e39d0  addiu       $fp, $v0, 0x39D0
    ctx->pc = 0x1ea964u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 14800));
    // 0x1ea968: 0x97c30140  lhu         $v1, 0x140($fp)
    ctx->pc = 0x1ea968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 320)));
    // 0x1ea96c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1ea96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ea970: 0xa7c20140  sh          $v0, 0x140($fp)
    ctx->pc = 0x1ea970u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ea974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea978: 0x27c50150  addiu       $a1, $fp, 0x150
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea97c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ea97cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ea980: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1ea980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x1ea984: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1ea984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ea988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea98c: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea990: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ea990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ea994: 0x3c053d56  lui         $a1, 0x3D56
    ctx->pc = 0x1ea994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15702 << 16));
    // 0x1ea998: 0x34a47750  ori         $a0, $a1, 0x7750
    ctx->pc = 0x1ea998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30544);
    // 0x1ea99c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ea99cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9a0: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ea9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1ea9a8: 0x3c053eb2  lui         $a1, 0x3EB2
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16050 << 16));
    // 0x1ea9ac: 0x34a4b8c2  ori         $a0, $a1, 0xB8C2
    ctx->pc = 0x1ea9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47298);
    // 0x1ea9b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ea9b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9b4: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ea9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ea9bc: 0x3c053d0e  lui         $a1, 0x3D0E
    ctx->pc = 0x1ea9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15630 << 16));
    // 0x1ea9c0: 0x34b3fa35  ori         $s3, $a1, 0xFA35
    ctx->pc = 0x1ea9c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64053);
    // 0x1ea9c4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1ea9c4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9c8: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1ea9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1ea9d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ea9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ea9d4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x1ea9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x1ea9d8: 0x24700130  addiu       $s0, $v1, 0x130
    ctx->pc = 0x1ea9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x1ea9dc: 0x27d30150  addiu       $s3, $fp, 0x150
    ctx->pc = 0x1ea9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9e0: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x1ea9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x1ea9e4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea9e8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea9ec: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ea9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ea9f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ea9f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea9f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ea9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea9f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ea9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ea9fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EA9FCu;
    SET_GPR_U32(ctx, 31, 0x1EAA04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EA9FCu, 0x1EAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA04u;
label_1eaa04:
    // 0x1eaa04: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaa0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1eaa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1eaa10: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa14: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1eaa18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1eaa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1eaa1c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa20: 0x24b61330  addiu       $s6, $a1, 0x1330
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaa24: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x1eaa24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x1eaa28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaa28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa2c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa30: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x1eaa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaa34: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1eaa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1eaa38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAA38u;
    SET_GPR_U32(ctx, 31, 0x1EAA40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAA38u, 0x1EAA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA40u;
label_1eaa40:
    // 0x1eaa40: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1eaa40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eaa44: 0x3104007f  andi        $a0, $t0, 0x7F
    ctx->pc = 0x1eaa44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x1eaa48: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x1eaa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x1eaa4c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x1eaa4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1eaa50: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1eaa50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1eaa54: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eaa54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa58: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1eaa5c: 0xa506005c  sh          $a2, 0x5C($t0)
    ctx->pc = 0x1eaa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 92), (uint16_t)GPR_U32(ctx, 6));
    // 0x1eaa60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAA60u;
    SET_GPR_U32(ctx, 31, 0x1EAA68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAA60u, 0x1EAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA68u;
label_1eaa68:
    // 0x1eaa68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eaa68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaa6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1eaa6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eaa70: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x1eaa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1eaa74: 0x246604b0  addiu       $a2, $v1, 0x4B0
    ctx->pc = 0x1eaa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1eaa78: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x1eaa78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1eaa7c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eaa7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eaa80: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa84: 0x24b11330  addiu       $s1, $a1, 0x1330
    ctx->pc = 0x1eaa84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaa88: 0xa6240076  sh          $a0, 0x76($s1)
    ctx->pc = 0x1eaa88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 118), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eaa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa90: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eaa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eaa98: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1eaa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x1eaa9c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaaa0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaaa4: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1eaaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x1eaaa8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaaac: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eaab0: 0xa4600082  sh          $zero, 0x82($v1)
    ctx->pc = 0x1eaab0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eaab4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1eaab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eaab8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaabc: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaac0: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1eaac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eaac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaac8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaacc: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1eaaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eaad0: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1eaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x1eaad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaad8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaadc: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eaae0: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1eaae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1eaae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaae8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaaec: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1eaaf0: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x1eaaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1eaaf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaaf8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaafc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab00: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1eab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1eab04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab08: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab0c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eab10: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1eab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1eab14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab18: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab20: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1eab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1eab24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab28: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eab28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab2c: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eab30: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1eab30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1eab34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab38: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab3c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1eab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eab40: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1eab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1eab44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab48: 0x8fb50138  lw          $s5, 0x138($sp)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab4c: 0x26a31330  addiu       $v1, $s5, 0x1330
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4912));
    // 0x1eab50: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1eab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1eab54: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab5c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1eab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1eab60: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab64: 0x26621330  addiu       $v0, $s3, 0x1330
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1eab68: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1eab68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1eab6c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab70: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eab74: 0xa4400078  sh          $zero, 0x78($v0)
    ctx->pc = 0x1eab74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eab78: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab7c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1eab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab80: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x1eab80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab84: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab8c: 0xa060007d  sb          $zero, 0x7D($v1)
    ctx->pc = 0x1eab8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab94: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab98: 0xa080007e  sb          $zero, 0x7E($a0)
    ctx->pc = 0x1eab98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab9c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaba0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1eaba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaba4: 0xa4400080  sh          $zero, 0x80($v0)
    ctx->pc = 0x1eaba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eaba8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EABA8u;
    SET_GPR_U32(ctx, 31, 0x1EABB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EABA8u, 0x1EABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EABB0u;
label_1eabb0:
    // 0x1eabb0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1eabb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eabb4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1eabb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1eabb8: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1eabbc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1eabbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1eabc0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1eabc0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1eabc4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabc8: 0x24551330  addiu       $s5, $v0, 0x1330
    ctx->pc = 0x1eabc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eabcc: 0xa6a5005e  sh          $a1, 0x5E($s5)
    ctx->pc = 0x1eabccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 5));
    // 0x1eabd0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabd4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eabd8: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x1eabd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eabdc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabe0: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eabe4: 0xa4800094  sh          $zero, 0x94($a0)
    ctx->pc = 0x1eabe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eabe8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eabf0: 0xa06000a8  sb          $zero, 0xA8($v1)
    ctx->pc = 0x1eabf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eabf4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabf8: 0x24b01330  addiu       $s0, $a1, 0x1330
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eabfc: 0xa60000ac  sh          $zero, 0xAC($s0)
    ctx->pc = 0x1eabfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eac00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac04: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eac08: 0xa44000aa  sh          $zero, 0xAA($v0)
    ctx->pc = 0x1eac08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eac0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAC0Cu, 0x1EAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC14u;
label_1eac14:
    // 0x1eac14: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eac18: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAC18u;
    SET_GPR_U32(ctx, 31, 0x1EAC20u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAC18u, 0x1EAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC20u;
label_1eac20:
    // 0x1eac20: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1eac20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eac24: 0x2a48021  addu        $s0, $s5, $a0
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1eac28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAC28u;
    SET_GPR_U32(ctx, 31, 0x1EAC30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAC28u, 0x1EAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC30u;
label_1eac30:
    // 0x1eac30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eac34: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1eac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eac38: 0x30850007  andi        $a1, $a0, 0x7
    ctx->pc = 0x1eac38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1eac3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac40: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAC40u;
    {
        const bool branch_taken_0x1eac40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eac40) {
            ctx->pc = 0x1EAC58u;
            goto label_1eac58;
        }
    }
    ctx->pc = 0x1EAC48u;
    // 0x1eac48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac4c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac50: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eac54: 0xa4a300aa  sh          $v1, 0xAA($a1)
    ctx->pc = 0x1eac54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 170), (uint16_t)GPR_U32(ctx, 3));
label_1eac58:
    // 0x1eac58: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1eac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1eac5c: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x1eac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1eac60: 0x2c4601f4  sltiu       $a2, $v0, 0x1F4
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1eac64: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EAC7Cu;
            goto label_1eac7c;
        }
    }
    ctx->pc = 0x1EAC6Cu;
    // 0x1eac6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac70: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x1eac70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac74: 0x26131330  addiu       $s3, $s0, 0x1330
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1eac78: 0xa66400aa  sh          $a0, 0xAA($s3)
    ctx->pc = 0x1eac78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 170), (uint16_t)GPR_U32(ctx, 4));
label_1eac7c:
    // 0x1eac7c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1eac7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1eac80: 0xac200aa0  sw          $zero, 0xAA0($at)
    ctx->pc = 0x1eac80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1eac84: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eac88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eac8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eac90: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1eac90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eac94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EAC94u;
    SET_GPR_U32(ctx, 31, 0x1EAC9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EAC94u, 0x1EAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC9Cu;
label_1eac9c:
    // 0x1eac9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eac9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaca0: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eaca0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaca4: 0xc6600124  lwc1        $f0, 0x124($s3)
    ctx->pc = 0x1eaca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaca8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eacb0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1eacb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1eacb4: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x1eacb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacb8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eacb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eacbc: 0xc07e3b0  jal         func_1F8EC0
    ctx->pc = 0x1EACBCu;
    SET_GPR_U32(ctx, 31, 0x1EACC4u);
    ctx->pc = 0x1F8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8EC0u, 0x1EACBCu, 0x1EACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACC4u;
label_1eacc4:
    // 0x1eacc4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eacc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacc8: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1eacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eaccc: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x1eacccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x1eacd0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eacd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eacd4: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eacd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacd8: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x1eacd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1eacdc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1eacdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1eace0: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x1eace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x1eace4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1eace4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1eace8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1eace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1eacec: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1eacecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eacf0: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1eacf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eacf4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1eacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eacf8: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EACF8u;
    {
        const bool branch_taken_0x1eacf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eacf8) {
            ctx->pc = 0x1EAD7Cu;
            goto label_1ead7c;
        }
    }
    ctx->pc = 0x1EAD00u;
    // 0x1ead00: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead04: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ead0c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1ead0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ead10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ead10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ead14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ead18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EAD18u;
    SET_GPR_U32(ctx, 31, 0x1EAD20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EAD18u, 0x1EAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD20u;
label_1ead20:
    // 0x1ead20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ead20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ead24: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ead28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ead2c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ead2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ead30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead34: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ead34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ead38: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ead38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ead3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ead40: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ead44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ead48: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ead4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ead50: 0x8fb20138  lw          $s2, 0x138($sp)
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead54: 0x26441330  addiu       $a0, $s2, 0x1330
    ctx->pc = 0x1ead54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x1ead58: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ead58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ead5c: 0x34a72018  ori         $a3, $a1, 0x2018
    ctx->pc = 0x1ead5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8216);
    // 0x1ead60: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1ead60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1ead64: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1ead64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead68: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x1ead68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1ead6c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ead6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ead70: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ead74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ead74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ead78: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1ead78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_1ead7c:
    // 0x1ead7c: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1ead80: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ead84: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EAD84u;
    {
        const bool branch_taken_0x1ead84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ead84) {
            ctx->pc = 0x1EAE80u;
            goto label_1eae80;
        }
    }
    ctx->pc = 0x1EAD8Cu;
    // 0x1ead8c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead90: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ead90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead94: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ead98: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ead9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ead9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eada0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eada0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eada4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EADA4u;
    SET_GPR_U32(ctx, 31, 0x1EADACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EADA4u, 0x1EADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADACu;
label_1eadac:
    // 0x1eadac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eadb0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadb4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x1eadb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eadb8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1eadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1eadbc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadc0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x1eadc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eadc4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eadc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadc8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1eadc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eadcc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadd0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eadd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eadd4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eaddc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eade0: 0x24901330  addiu       $s0, $a0, 0x1330
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eade4: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eade8: 0x34e22018  ori         $v0, $a3, 0x2018
    ctx->pc = 0x1eade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8216);
    // 0x1eadec: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1eadecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1eadf0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadf4: 0x25081330  addiu       $t0, $t0, 0x1330
    ctx->pc = 0x1eadf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1eadf8: 0x8d090030  lw          $t1, 0x30($t0)
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1eadfc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1eadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1eae00: 0x1225025  or          $t2, $t1, $v0
    ctx->pc = 0x1eae00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1eae04: 0xad0a0030  sw          $t2, 0x30($t0)
    ctx->pc = 0x1eae04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 10));
    // 0x1eae08: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1eae0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eae10: 0x2405027c  addiu       $a1, $zero, 0x27C
    ctx->pc = 0x1eae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1eae14: 0xc0960d0  jal         func_258340
    ctx->pc = 0x1EAE14u;
    SET_GPR_U32(ctx, 31, 0x1EAE1Cu);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x1EAE14u, 0x1EAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE1Cu;
label_1eae1c:
    // 0x1eae1c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae20: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eae24: 0xc096188  jal         func_258620
    ctx->pc = 0x1EAE24u;
    SET_GPR_U32(ctx, 31, 0x1EAE2Cu);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1EAE24u, 0x1EAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE2Cu;
label_1eae2c:
    // 0x1eae2c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae30: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eae30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eae34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1eae38: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1eae38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eae3c: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EAE3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE44u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EAE3Cu, 0x1EAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE44u;
label_1eae44:
    // 0x1eae44: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae48: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1eae4c: 0x24620480  addiu       $v0, $v1, 0x480
    ctx->pc = 0x1eae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1eae50: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eae50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eae54: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eae54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eae58: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1eae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1eae60: 0x24620510  addiu       $v0, $v1, 0x510
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x1eae64: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eae64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eae68: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eae68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eae6c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae70: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1eae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1eae74: 0x246205a0  addiu       $v0, $v1, 0x5A0
    ctx->pc = 0x1eae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x1eae78: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eae78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eae7c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1eae80:
    // 0x1eae80: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x1eae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eae84: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1eae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eae88: 0x14830048  bne         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1EAE88u;
    {
        const bool branch_taken_0x1eae88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eae88) {
            ctx->pc = 0x1EAFACu;
            goto label_1eafac;
        }
    }
    ctx->pc = 0x1EAE90u;
    // 0x1eae90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae94: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1eae9c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1eaea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eaea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaea4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eaea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eaea8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EAEA8u;
    SET_GPR_U32(ctx, 31, 0x1EAEB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EAEA8u, 0x1EAEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEB0u;
label_1eaeb0:
    // 0x1eaeb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaeb4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaeb8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eaeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eaebc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eaec0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaec4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eaec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eaec8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaecc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eaeccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaed0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaed4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eaed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaed8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaedc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eaedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eaee0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaee4: 0x245e1330  addiu       $fp, $v0, 0x1330
    ctx->pc = 0x1eaee4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaee8: 0x8fc30030  lw          $v1, 0x30($fp)
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1eaeec: 0x34622018  ori         $v0, $v1, 0x2018
    ctx->pc = 0x1eaeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8216);
    // 0x1eaef0: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x1eaef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1eaef4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaef8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eaefc: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1eaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1eaf00: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1eaf04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eaf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eaf08: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1eaf08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1eaf0c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf10: 0x2405027c  addiu       $a1, $zero, 0x27C
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1eaf14: 0xc0960d0  jal         func_258340
    ctx->pc = 0x1EAF14u;
    SET_GPR_U32(ctx, 31, 0x1EAF1Cu);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x1EAF14u, 0x1EAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF1Cu;
label_1eaf1c:
    // 0x1eaf1c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf20: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eaf24: 0xc096188  jal         func_258620
    ctx->pc = 0x1EAF24u;
    SET_GPR_U32(ctx, 31, 0x1EAF2Cu);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1EAF24u, 0x1EAF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF2Cu;
label_1eaf2c:
    // 0x1eaf2c: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eaf2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf30: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1eaf30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1eaf34: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1eaf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eaf38: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EAF38u;
    SET_GPR_U32(ctx, 31, 0x1EAF40u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EAF38u, 0x1EAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF40u;
label_1eaf40:
    // 0x1eaf40: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf44: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x1eaf44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eaf48: 0x26130480  addiu       $s3, $s0, 0x480
    ctx->pc = 0x1eaf48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1eaf4c: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x1eaf4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1eaf50: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eaf50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaf54: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf58: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eaf5c: 0x24850510  addiu       $a1, $a0, 0x510
    ctx->pc = 0x1eaf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x1eaf60: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1eaf60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eaf64: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eaf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaf68: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eaf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf6c: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x1eaf70: 0x250205a0  addiu       $v0, $t0, 0x5A0
    ctx->pc = 0x1eaf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1440));
    // 0x1eaf74: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eaf74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaf78: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eaf78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaf7c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaf84: 0xa44000aa  sh          $zero, 0xAA($v0)
    ctx->pc = 0x1eaf84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eaf88: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1eaf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1eaf8c: 0x8c26af60  lw          $a2, -0x50A0($at)
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1eaf90: 0x2cc401f4  sltiu       $a0, $a2, 0x1F4
    ctx->pc = 0x1eaf90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1eaf94: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAF94u;
    {
        const bool branch_taken_0x1eaf94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf94) {
            ctx->pc = 0x1EAFACu;
            goto label_1eafac;
        }
    }
    ctx->pc = 0x1EAF9Cu;
    // 0x1eaf9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eafa0: 0x8fb60138  lw          $s6, 0x138($sp)
    ctx->pc = 0x1eafa0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafa4: 0x26c21330  addiu       $v0, $s6, 0x1330
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4912));
    // 0x1eafa8: 0xa44500aa  sh          $a1, 0xAA($v0)
    ctx->pc = 0x1eafa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 5));
label_1eafac:
    // 0x1eafac: 0x32e6ffff  andi        $a2, $s7, 0xFFFF
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eafb0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1eafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1eafb4: 0x14c2001b  bne         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EAFB4u;
    {
        const bool branch_taken_0x1eafb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eafb4) {
            ctx->pc = 0x1EB024u;
            goto label_1eb024;
        }
    }
    ctx->pc = 0x1EAFBCu;
    // 0x1eafbc: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafc0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafc4: 0x8d050368  lw          $a1, 0x368($t0)
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x1eafc8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1eafcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eafccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eafd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eafd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eafd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EAFD4u;
    SET_GPR_U32(ctx, 31, 0x1EAFDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EAFD4u, 0x1EAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFDCu;
label_1eafdc:
    // 0x1eafdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eafdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eafe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eafe4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafe8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1eafe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eafec: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1eafecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1eaff0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaff4: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1eaff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1eaff8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaffc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1eaffcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb000: 0x8fb10138  lw          $s1, 0x138($sp)
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb004: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1eb004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb008: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb00c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eb00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eb010: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb014: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eb018: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1eb01c: 0x34c42018  ori         $a0, $a2, 0x2018
    ctx->pc = 0x1eb01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8216);
    // 0x1eb020: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x1eb020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_1eb024:
    // 0x1eb024: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1eb024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eb028: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x1eb028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x1eb02c: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EB02Cu;
    {
        const bool branch_taken_0x1eb02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eb02c) {
            ctx->pc = 0x1EB0B4u;
            goto label_1eb0b4;
        }
    }
    ctx->pc = 0x1EB034u;
    // 0x1eb034: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb038: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb03c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1eb03cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1eb040: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1eb040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eb044: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1eb044u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1eb048: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb04c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1eb050: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb054: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eb058: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EB058u;
    SET_GPR_U32(ctx, 31, 0x1EB060u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EB058u, 0x1EB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB060u;
label_1eb060:
    // 0x1eb060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb064: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb068: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1eb068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb06c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1eb070: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb074: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eb074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb078: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb07c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eb07cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb080: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb084: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1eb084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb088: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb08c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eb090: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1eb094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb098: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EB098u;
    SET_GPR_U32(ctx, 31, 0x1EB0A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EB098u, 0x1EB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0A0u;
label_1eb0a0:
    // 0x1eb0a0: 0x8fb50138  lw          $s5, 0x138($sp)
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0a4: 0x26a31330  addiu       $v1, $s5, 0x1330
    ctx->pc = 0x1eb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4912));
    // 0x1eb0a8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1eb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1eb0ac: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1eb0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1eb0b0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1eb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_1eb0b4:
    // 0x1eb0b4: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0b8: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1eb0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1eb0bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1eb0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1eb0c0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1eb0c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EB0C4u;
    {
        const bool branch_taken_0x1eb0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0c4) {
            ctx->pc = 0x1EB160u;
            goto label_1eb160;
        }
    }
    ctx->pc = 0x1EB0CCu;
    // 0x1eb0cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb0d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb0d4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0d8: 0xc05d400  jal         func_175000
    ctx->pc = 0x1EB0D8u;
    SET_GPR_U32(ctx, 31, 0x1EB0E0u);
    ctx->pc = 0x175000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175000u, 0x1EB0D8u, 0x1EB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0E0u;
label_1eb0e0:
    // 0x1eb0e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb0e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0e8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1eb0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eb0ec: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0f0: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x1eb0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1eb0f4: 0xc0960d0  jal         func_258340
    ctx->pc = 0x1EB0F4u;
    SET_GPR_U32(ctx, 31, 0x1EB0FCu);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x1EB0F4u, 0x1EB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0FCu;
label_1eb0fc:
    // 0x1eb0fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb100: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb104: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eb104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eb108: 0xc096188  jal         func_258620
    ctx->pc = 0x1EB108u;
    SET_GPR_U32(ctx, 31, 0x1EB110u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1EB108u, 0x1EB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB110u;
label_1eb110:
    // 0x1eb110: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb114: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb118: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EB118u;
    SET_GPR_U32(ctx, 31, 0x1EB120u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EB118u, 0x1EB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB120u;
label_1eb120:
    // 0x1eb120: 0x8fb50138  lw          $s5, 0x138($sp)
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb124: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1eb128: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1eb128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1eb12c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1eb12cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eb130: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eb130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb134: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb138: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x1eb138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eb13c: 0x24830510  addiu       $v1, $a0, 0x510
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x1eb140: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1eb140u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eb144: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eb144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb148: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb14c: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eb150: 0x24b005a0  addiu       $s0, $a1, 0x5A0
    ctx->pc = 0x1eb150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
    // 0x1eb154: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eb154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb158: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x1EB158u;
    {
        const bool branch_taken_0x1eb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb158) {
            ctx->pc = 0x1EBC20u;
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EB160u;
label_1eb160:
    // 0x1eb160: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb164: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x1eb164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x1eb168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb16c: 0x3055001f  andi        $s5, $v0, 0x1F
    ctx->pc = 0x1eb16cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eb170: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EB170u;
    {
        const bool branch_taken_0x1eb170 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb170) {
            ctx->pc = 0x1EB1C8u;
            goto label_1eb1c8;
        }
    }
    ctx->pc = 0x1EB178u;
    // 0x1eb178: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb17c: 0x90441308  lbu         $a0, 0x1308($v0)
    ctx->pc = 0x1eb17cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb180: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x1eb180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1eb184: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x1eb184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1eb188: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1eb188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eb18c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB18Cu;
    {
        const bool branch_taken_0x1eb18c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb18c) {
            ctx->pc = 0x1EB1C8u;
            goto label_1eb1c8;
        }
    }
    ctx->pc = 0x1EB194u;
    // 0x1eb194: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb198: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1eb198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb19c: 0x34850040  ori         $a1, $a0, 0x40
    ctx->pc = 0x1eb19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1eb1a0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1eb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1eb1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1a8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1ac: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1eb1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x1eb1b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1b4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1b8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1eb1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1eb1bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb1bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1c0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1c4: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x1eb1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_1eb1c8:
    // 0x1eb1c8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1cc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb1d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EB1D0u;
    SET_GPR_U32(ctx, 31, 0x1EB1D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EB1D0u, 0x1EB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1D8u;
label_1eb1d8:
    // 0x1eb1d8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1dc: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x1eb1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1eb1e0: 0x24900120  addiu       $s0, $a0, 0x120
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1eb1e4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb1e8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1ec: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1eb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eb1f0: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x1eb1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x1eb1f4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb1f8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1eb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1eb200: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x1eb204: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb208: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1eb208u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb20c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb210: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1eb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eb214: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x1eb214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1eb218: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb218u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb21c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1eb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1eb220: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1eb224: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb228: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1eb228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x1eb22c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb230: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x1eb230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x1eb234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb238: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1eb238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eb23c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EB23Cu;
    {
        const bool branch_taken_0x1eb23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb23c) {
            ctx->pc = 0x1EB2F0u;
            goto label_1eb2f0;
        }
    }
    ctx->pc = 0x1EB244u;
    // 0x1eb244: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eb244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb248: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb24c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eb24cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb250: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb254: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1eb254u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb258: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb25c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1eb25cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb260: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb264: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1eb264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb268: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1eb268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb26c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1eb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1eb270: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1eb270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb274: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb274u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb278: 0xa50710a6  sh          $a3, 0x10A6($t0)
    ctx->pc = 0x1eb278u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4262), (uint16_t)GPR_U32(ctx, 7));
    // 0x1eb27c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb280: 0x90431308  lbu         $v1, 0x1308($v0)
    ctx->pc = 0x1eb280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb284: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eb284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb288: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1eb288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eb28c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1eb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb290: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EB290u;
    {
        const bool branch_taken_0x1eb290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb290) {
            ctx->pc = 0x1EB2F0u;
            goto label_1eb2f0;
        }
    }
    ctx->pc = 0x1EB298u;
    // 0x1eb298: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb29c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2a0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1eb2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1eb2a4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1eb2a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eb2a8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1eb2a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1eb2ac: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2b0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1eb2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1eb2b4: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1eb2b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1eb2b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb2bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eb2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eb2c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EB2C0u;
    SET_GPR_U32(ctx, 31, 0x1EB2C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EB2C0u, 0x1EB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2C8u;
label_1eb2c8:
    // 0x1eb2c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1eb2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb2d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EB2D0u;
    SET_GPR_U32(ctx, 31, 0x1EB2D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EB2D0u, 0x1EB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2D8u;
label_1eb2d8:
    // 0x1eb2d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eb2d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb2dc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eb2e4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1eb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1eb2e8: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1eb2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1eb2ec: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1eb2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_1eb2f0:
    // 0x1eb2f0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2f4: 0x90851308  lbu         $a1, 0x1308($a0)
    ctx->pc = 0x1eb2f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x1eb2f8: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1eb2f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1eb2fc: 0x30c70080  andi        $a3, $a2, 0x80
    ctx->pc = 0x1eb2fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1eb300: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1EB300u;
    {
        const bool branch_taken_0x1eb300 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb300) {
            ctx->pc = 0x1EB334u;
            goto label_1eb334;
        }
    }
    ctx->pc = 0x1EB308u;
    // 0x1eb308: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb30c: 0x25020234  addiu       $v0, $t0, 0x234
    ctx->pc = 0x1eb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 564));
    // 0x1eb310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb314: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb318: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1EB318u;
    SET_GPR_U32(ctx, 31, 0x1EB320u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x1EB318u, 0x1EB320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB320u;
label_1eb320:
    // 0x1eb320: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb324: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x1eb324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x1eb328: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb32c: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1EB32Cu;
    SET_GPR_U32(ctx, 31, 0x1EB334u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x1EB32Cu, 0x1EB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB334u;
label_1eb334:
    // 0x1eb334: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb338: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1eb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eb33c: 0x249002d0  addiu       $s0, $a0, 0x2D0
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x1eb340: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb344: 0xafa70118  sw          $a3, 0x118($sp)
    ctx->pc = 0x1eb344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 7));
    // 0x1eb348: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb34c: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x1eb34cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb350: 0xffa80110  sd          $t0, 0x110($sp)
    ctx->pc = 0x1eb350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 8));
    // 0x1eb354: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb358: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb35c: 0x91221308  lbu         $v0, 0x1308($t1)
    ctx->pc = 0x1eb35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4872)));
    // 0x1eb360: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x1eb360u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb364: 0x31430080  andi        $v1, $t2, 0x80
    ctx->pc = 0x1eb364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)128);
    // 0x1eb368: 0x2505024c  addiu       $a1, $t0, 0x24C
    ctx->pc = 0x1eb368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 588));
    // 0x1eb36c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb36cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb370: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1eb374: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb378: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1eb378u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eb37c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB37Cu;
    SET_GPR_U32(ctx, 31, 0x1EB384u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB37Cu, 0x1EB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB384u;
label_1eb384:
    // 0x1eb384: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb388: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1eb388u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eb38c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1eb38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb390: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1eb394: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1eb394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eb398: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1eb398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1eb39c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1eb39cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb3a0: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x1EB3A0u;
    SET_GPR_U32(ctx, 31, 0x1EB3A8u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x1EB3A0u, 0x1EB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3A8u;
label_1eb3a8:
    // 0x1eb3a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EB3A8u;
    SET_GPR_U32(ctx, 31, 0x1EB3B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EB3A8u, 0x1EB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3B0u;
label_1eb3b0:
    // 0x1eb3b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb3b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb3b4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1eb3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1eb3b8: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1eb3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1eb3bc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1eb3c0: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x1eb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1eb3c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb3c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eb3cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1eb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1eb3d0: 0x24033001  addiu       $v1, $zero, 0x3001
    ctx->pc = 0x1eb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1eb3d4: 0xfe230060  sd          $v1, 0x60($s1)
    ctx->pc = 0x1eb3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
    // 0x1eb3d8: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1eb3dc: 0xfe2201b0  sd          $v0, 0x1B0($s1)
    ctx->pc = 0x1eb3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 2));
    // 0x1eb3e0: 0x34048900  ori         $a0, $zero, 0x8900
    ctx->pc = 0x1eb3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x1eb3e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1eb3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb3e8: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1eb3ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1eb3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb3f0: 0xfe2400f0  sd          $a0, 0xF0($s1)
    ctx->pc = 0x1eb3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 4));
    // 0x1eb3f4: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x1eb3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1eb3f8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x1eb3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x1eb3fc: 0x34c707ff  ori         $a3, $a2, 0x7FF
    ctx->pc = 0x1eb3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2047);
    // 0x1eb400: 0xfe270070  sd          $a3, 0x70($s1)
    ctx->pc = 0x1eb400u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 7));
    // 0x1eb404: 0x34088900  ori         $t0, $zero, 0x8900
    ctx->pc = 0x1eb404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x1eb408: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1eb408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb40c: 0x24037800  addiu       $v1, $zero, 0x7800
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1eb410: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb414: 0xfe220240  sd          $v0, 0x240($s1)
    ctx->pc = 0x1eb414u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 2));
    // 0x1eb418: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x1eb418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1eb41c: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1eb41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1eb420: 0x344307ff  ori         $v1, $v0, 0x7FF
    ctx->pc = 0x1eb420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2047);
    // 0x1eb424: 0xfe2301c0  sd          $v1, 0x1C0($s1)
    ctx->pc = 0x1eb424u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 448), GPR_U64(ctx, 3));
    // 0x1eb428: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb42c: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1eb42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb430: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb434: 0x305e0080  andi        $fp, $v0, 0x80
    ctx->pc = 0x1eb434u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1eb438: 0x17c0003e  bnez        $fp, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB438u;
    {
        const bool branch_taken_0x1eb438 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb438) {
            ctx->pc = 0x1EB534u;
            goto label_1eb534;
        }
    }
    ctx->pc = 0x1EB440u;
    // 0x1eb440: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1eb440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eb444: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eb448: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB448u;
    {
        const bool branch_taken_0x1eb448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb448) {
            ctx->pc = 0x1EB460u;
            goto label_1eb460;
        }
    }
    ctx->pc = 0x1EB450u;
    // 0x1eb450: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb454: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb458: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EB458u;
    SET_GPR_U32(ctx, 31, 0x1EB460u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EB458u, 0x1EB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB460u;
label_1eb460:
    // 0x1eb460: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1eb464: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1eb468: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb46c: 0x2485000f  addiu       $a1, $a0, 0xF
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1eb470: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1eb470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1eb474: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1eb478: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1eb47c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1eb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb480: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1eb484: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1eb488: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x1eb488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x1eb48c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eb48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eb490: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb494: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1eb494u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb498: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb49c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1eb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1eb4a0: 0x247002d0  addiu       $s0, $v1, 0x2D0
    ctx->pc = 0x1eb4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x1eb4a4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb4a8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1eb4ac: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1eb4b0: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eb4b4: 0xae650024  sw          $a1, 0x24($s3)
    ctx->pc = 0x1eb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 5));
    // 0x1eb4b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eb4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb4bc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1eb4bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1eb4c0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EB4C0u;
    SET_GPR_U32(ctx, 31, 0x1EB4C8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EB4C0u, 0x1EB4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB4C8u;
label_1eb4c8:
    // 0x1eb4c8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eb4c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb4cc: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x1eb4ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1eb4d0: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x1eb4d4: 0x25020ae8  addiu       $v0, $t0, 0xAE8
    ctx->pc = 0x1eb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2792));
    // 0x1eb4d8: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1eb4d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1eb4dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1eb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1eb4e0: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1eb4e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb4e8: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1eb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1eb4ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1eb4ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1eb4f0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1eb4f4: 0x24b60ae8  addiu       $s6, $a1, 0xAE8
    ctx->pc = 0x1eb4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x1eb4f8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1eb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb4fc: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1eb500: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1eb500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1eb504: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1eb504u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1eb508: 0x32e8ffff  andi        $t0, $s7, 0xFFFF
    ctx->pc = 0x1eb508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eb50c: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eb510: 0x15040008  bne         $t0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB510u;
    {
        const bool branch_taken_0x1eb510 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eb510) {
            ctx->pc = 0x1EB534u;
            goto label_1eb534;
        }
    }
    ctx->pc = 0x1EB518u;
    // 0x1eb518: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb51c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb520: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1eb520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb524: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1eb524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eb528: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EB528u;
    SET_GPR_U32(ctx, 31, 0x1EB530u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EB528u, 0x1EB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB530u;
label_1eb530:
    // 0x1eb530: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eb530u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1eb534:
    // 0x1eb534: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb538: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb53c: 0x90641308  lbu         $a0, 0x1308($v1)
    ctx->pc = 0x1eb53cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x1eb540: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1eb540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1eb544: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x1eb544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1eb548: 0x2504025c  addiu       $a0, $t0, 0x25C
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 604));
    // 0x1eb54c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x1eb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1eb550: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB550u;
    SET_GPR_U32(ctx, 31, 0x1EB558u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB550u, 0x1EB558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB558u;
label_1eb558:
    // 0x1eb558: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1eb558u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb55c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb560: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1eb564: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1eb564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eb568: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1eb56c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1eb56cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb570: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x1EB570u;
    SET_GPR_U32(ctx, 31, 0x1EB578u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x1EB570u, 0x1EB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB578u;
label_1eb578:
    // 0x1eb578: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb57c: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x1eb57cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1eb580: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1eb580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eb584: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1eb584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb588: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1eb588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1eb58c: 0xfe230080  sd          $v1, 0x80($s1)
    ctx->pc = 0x1eb58cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 3));
    // 0x1eb590: 0xde2301d0  ld          $v1, 0x1D0($s1)
    ctx->pc = 0x1eb590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1eb594: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eb598: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1eb598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1eb59c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1eb59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eb5a0: 0xfe2501d0  sd          $a1, 0x1D0($s1)
    ctx->pc = 0x1eb5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 5));
    // 0x1eb5a4: 0xde270080  ld          $a3, 0x80($s1)
    ctx->pc = 0x1eb5a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1eb5a8: 0x2408ffe7  addiu       $t0, $zero, -0x19
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1eb5ac: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1eb5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb5b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1eb5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1eb5b4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1eb5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1eb5b8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1eb5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1eb5bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb5c0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1eb5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1eb5c4: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x1eb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x1eb5c8: 0xde2501d0  ld          $a1, 0x1D0($s1)
    ctx->pc = 0x1eb5c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1eb5cc: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1eb5d0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb5d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1eb5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1eb5d8: 0x2ac38  dsll        $s5, $v0, 16
    ctx->pc = 0x1eb5d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 16);
    // 0x1eb5dc: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x1eb5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1eb5e0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1eb5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eb5e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1eb5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1eb5e8: 0xfe2201d0  sd          $v0, 0x1D0($s1)
    ctx->pc = 0x1eb5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 2));
    // 0x1eb5ec: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb5f0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1eb5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1eb5f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb5f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb5fc: 0xfe2200b8  sd          $v0, 0xB8($s1)
    ctx->pc = 0x1eb5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 184), GPR_U64(ctx, 2));
    // 0x1eb600: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb604: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb608: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb60c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1eb60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1eb610: 0xfe2300e8  sd          $v1, 0xE8($s1)
    ctx->pc = 0x1eb610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 232), GPR_U64(ctx, 3));
    // 0x1eb614: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1eb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb618: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb61c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1eb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb620: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1eb620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1eb624: 0xfe220208  sd          $v0, 0x208($s1)
    ctx->pc = 0x1eb624u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 2));
    // 0x1eb628: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb62c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1eb62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb630: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1eb630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eb634: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1eb634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1eb638: 0xfe240238  sd          $a0, 0x238($s1)
    ctx->pc = 0x1eb638u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 568), GPR_U64(ctx, 4));
    // 0x1eb63c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eb640: 0x34450006  ori         $a1, $v0, 0x6
    ctx->pc = 0x1eb640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1eb644: 0x5a83c  dsll32      $s5, $a1, 0
    ctx->pc = 0x1eb644u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb648: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x1eb64c: 0x34639400  ori         $v1, $v1, 0x9400
    ctx->pc = 0x1eb64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37888);
    // 0x1eb650: 0x752825  or          $a1, $v1, $s5
    ctx->pc = 0x1eb650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x1eb654: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1eb654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb658: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1eb658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1eb65c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1eb65cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1eb660: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eb660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb664: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1eb664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb668: 0xc0958e0  jal         func_256380
    ctx->pc = 0x1EB668u;
    SET_GPR_U32(ctx, 31, 0x1EB670u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x1EB668u, 0x1EB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB670u;
label_1eb670:
    // 0x1eb670: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eb670u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb674: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eb674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb67c: 0xc0958e0  jal         func_256380
    ctx->pc = 0x1EB67Cu;
    SET_GPR_U32(ctx, 31, 0x1EB684u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x1EB67Cu, 0x1EB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB684u;
label_1eb684:
    // 0x1eb684: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eb684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb688: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb68c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb690: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1eb690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb694: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1eb694u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb698: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x1eb698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
    // 0x1eb69c: 0x2464026c  addiu       $a0, $v1, 0x26C
    ctx->pc = 0x1eb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 620));
    // 0x1eb6a0: 0x24100150  addiu       $s0, $zero, 0x150
    ctx->pc = 0x1eb6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1eb6a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1eb6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb6a8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1eb6a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb6ac: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB6ACu;
    SET_GPR_U32(ctx, 31, 0x1EB6B4u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB6ACu, 0x1EB6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6B4u;
label_1eb6b4:
    // 0x1eb6b4: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1eb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1eb6b8: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1eb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1eb6bc: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x1eb6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1eb6c0: 0x24450150  addiu       $a1, $v0, 0x150
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1eb6c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1eb6c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb6c8: 0xc0747f8  jal         func_1D1FE0
    ctx->pc = 0x1EB6C8u;
    SET_GPR_U32(ctx, 31, 0x1EB6D0u);
    ctx->pc = 0x1D1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FE0u, 0x1EB6C8u, 0x1EB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6D0u;
label_1eb6d0:
    // 0x1eb6d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb6d4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb6d8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb6dc: 0x90851308  lbu         $a1, 0x1308($a0)
    ctx->pc = 0x1eb6dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x1eb6e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1eb6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1eb6e4: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x1eb6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1eb6e8: 0x24640264  addiu       $a0, $v1, 0x264
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 612));
    // 0x1eb6ec: 0x241007f0  addiu       $s0, $zero, 0x7F0
    ctx->pc = 0x1eb6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1eb6f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1eb6f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb6f4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB6F4u;
    SET_GPR_U32(ctx, 31, 0x1EB6FCu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB6F4u, 0x1EB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6FCu;
label_1eb6fc:
    // 0x1eb6fc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1eb6fcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb700: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1eb700u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1eb704: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1eb704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1eb708: 0x268507f0  addiu       $a1, $s4, 0x7F0
    ctx->pc = 0x1eb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2032));
    // 0x1eb70c: 0x3c104080  lui         $s0, 0x4080
    ctx->pc = 0x1eb70cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb710: 0x36030006  ori         $v1, $s0, 0x6
    ctx->pc = 0x1eb710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
    // 0x1eb714: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x1eb714u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb718: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb71c: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x1eb71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1eb720: 0x538025  or          $s0, $v0, $s3
    ctx->pc = 0x1eb720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1eb724: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1eb724u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb728: 0xc0749e0  jal         func_1D2780
    ctx->pc = 0x1EB728u;
    SET_GPR_U32(ctx, 31, 0x1EB730u);
    ctx->pc = 0x1D2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2780u, 0x1EB728u, 0x1EB730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB730u;
label_1eb730:
    // 0x1eb730: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1eb730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1eb734: 0x268507f0  addiu       $a1, $s4, 0x7F0
    ctx->pc = 0x1eb734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2032));
    // 0x1eb738: 0xc074d28  jal         func_1D34A0
    ctx->pc = 0x1EB738u;
    SET_GPR_U32(ctx, 31, 0x1EB740u);
    ctx->pc = 0x1D34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34A0u, 0x1EB738u, 0x1EB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB740u;
label_1eb740:
    // 0x1eb740: 0x3c134080  lui         $s3, 0x4080
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb744: 0x36700002  ori         $s0, $s3, 0x2
    ctx->pc = 0x1eb744u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x1eb748: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1eb748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1eb74c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1eb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb750: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x1eb750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1eb754: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1eb754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb758: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x1eb758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1eb75c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1eb75cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1eb760: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1eb760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb764: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x1eb764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1eb768: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1eb768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb76c: 0x3c052402  lui         $a1, 0x2402
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb770: 0x34a41400  ori         $a0, $a1, 0x1400
    ctx->pc = 0x1eb770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5120);
    // 0x1eb774: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1eb774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb778: 0x26870840  addiu       $a3, $s4, 0x840
    ctx->pc = 0x1eb778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
    // 0x1eb77c: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1eb77cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1eb780: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb784: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1eb784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb788: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb78c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb790: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x1eb790u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x1eb794: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb798: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1eb798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb79c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1eb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb7a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb7a4: 0xfe820810  sd          $v0, 0x810($s4)
    ctx->pc = 0x1eb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2064), GPR_U64(ctx, 2));
    // 0x1eb7a8: 0x3c120005  lui         $s2, 0x5
    ctx->pc = 0x1eb7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)5 << 16));
    // 0x1eb7ac: 0x36423001  ori         $v0, $s2, 0x3001
    ctx->pc = 0x1eb7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)12289);
    // 0x1eb7b0: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x1eb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x1eb7b4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1eb7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1eb7b8: 0x34a43001  ori         $a0, $a1, 0x3001
    ctx->pc = 0x1eb7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12289);
    // 0x1eb7bc: 0xfe840820  sd          $a0, 0x820($s4)
    ctx->pc = 0x1eb7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2080), GPR_U64(ctx, 4));
    // 0x1eb7c0: 0x3c08510e  lui         $t0, 0x510E
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20750 << 16));
    // 0x1eb7c4: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x1eb7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x1eb7c8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1eb7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eb7cc: 0x34048011  ori         $a0, $zero, 0x8011
    ctx->pc = 0x1eb7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x1eb7d0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1eb7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb7d4: 0xfe830070  sd          $v1, 0x70($s4)
    ctx->pc = 0x1eb7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 3));
    // 0x1eb7d8: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1eb7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1eb7dc: 0x34632512  ori         $v1, $v1, 0x2512
    ctx->pc = 0x1eb7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9490);
    // 0x1eb7e0: 0xfe830078  sd          $v1, 0x78($s4)
    ctx->pc = 0x1eb7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 3));
    // 0x1eb7e4: 0x3c02510e  lui         $v0, 0x510E
    ctx->pc = 0x1eb7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20750 << 16));
    // 0x1eb7e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1eb7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1eb7ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1eb7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb7f0: 0x34058011  ori         $a1, $zero, 0x8011
    ctx->pc = 0x1eb7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x1eb7f4: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x1eb7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1eb7f8: 0xfe860860  sd          $a2, 0x860($s4)
    ctx->pc = 0x1eb7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2144), GPR_U64(ctx, 6));
    // 0x1eb7fc: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x1eb7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x1eb800: 0x35072512  ori         $a3, $t0, 0x2512
    ctx->pc = 0x1eb800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)9490);
    // 0x1eb804: 0xfe870868  sd          $a3, 0x868($s4)
    ctx->pc = 0x1eb804u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2152), GPR_U64(ctx, 7));
    // 0x1eb808: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb80c: 0x24450274  addiu       $a1, $v0, 0x274
    ctx->pc = 0x1eb80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    // 0x1eb810: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb814: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1eb814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1eb818: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb81c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x1EB81Cu;
    SET_GPR_U32(ctx, 31, 0x1EB824u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x1EB81Cu, 0x1EB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB824u;
label_1eb824:
    // 0x1eb824: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb828: 0x8c850274  lw          $a1, 0x274($a0)
    ctx->pc = 0x1eb828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1eb82c: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x1eb82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x1eb830: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb834: 0x8c430278  lw          $v1, 0x278($v0)
    ctx->pc = 0x1eb834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x1eb838: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x1eb838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x1eb83c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1eb83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1eb840: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x1eb840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1eb844: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1eb844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1eb848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb84c: 0x3c026040  lui         $v0, 0x6040
    ctx->pc = 0x1eb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24640 << 16));
    // 0x1eb850: 0x34474080  ori         $a3, $v0, 0x4080
    ctx->pc = 0x1eb850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16512);
    // 0x1eb854: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1eb854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1eb858: 0x35084080  ori         $t0, $t0, 0x4080
    ctx->pc = 0x1eb858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16512);
    // 0x1eb85c: 0x3c026020  lui         $v0, 0x6020
    ctx->pc = 0x1eb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24608 << 16));
    // 0x1eb860: 0x34492020  ori         $t1, $v0, 0x2020
    ctx->pc = 0x1eb860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1eb864: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1eb868: 0x346a2020  ori         $t2, $v1, 0x2020
    ctx->pc = 0x1eb868u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x1eb86c: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x1EB86Cu;
    SET_GPR_U32(ctx, 31, 0x1EB874u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x1EB86Cu, 0x1EB874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB874u;
label_1eb874:
    // 0x1eb874: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb874u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb878: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1eb878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1eb87c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1eb87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb880: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x1eb880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x1eb884: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x1eb884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1eb888: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1eb888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eb88c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1eb88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1eb890: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb894: 0x34c50002  ori         $a1, $a2, 0x2
    ctx->pc = 0x1eb894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x1eb898: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1eb898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb89c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb8a0: 0x34640700  ori         $a0, $v1, 0x700
    ctx->pc = 0x1eb8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1eb8a4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1eb8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb8a8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1eb8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb8ac: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1eb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1eb8b0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1eb8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1eb8b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1eb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1eb8b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1eb8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1eb8bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1eb8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb8c0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1eb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1eb8c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1eb8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb8c8: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x1eb8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb8cc: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x1eb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1eb8d0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1eb8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1eb8d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1eb8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb8d8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1eb8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb8dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1eb8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb8e0: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x1eb8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1eb8e4: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x1eb8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb8e8: 0xfd070020  sd          $a3, 0x20($t0)
    ctx->pc = 0x1eb8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 7));
    // 0x1eb8ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1eb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb8f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1eb8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb8f4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb8f8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1eb8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb8fc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb900: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1eb900u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1eb904: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1eb908: 0x34433001  ori         $v1, $v0, 0x3001
    ctx->pc = 0x1eb908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x1eb90c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1eb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb910: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1eb910u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1eb914: 0x3c1e0005  lui         $fp, 0x5
    ctx->pc = 0x1eb914u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)5 << 16));
    // 0x1eb918: 0x37c23001  ori         $v0, $fp, 0x3001
    ctx->pc = 0x1eb918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)12289);
    // 0x1eb91c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb920: 0xfc620030  sd          $v0, 0x30($v1)
    ctx->pc = 0x1eb920u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
    // 0x1eb924: 0x3c04612e  lui         $a0, 0x612E
    ctx->pc = 0x1eb924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24878 << 16));
    // 0x1eb928: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x1eb928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1eb92c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1eb92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb930: 0x34028021  ori         $v0, $zero, 0x8021
    ctx->pc = 0x1eb930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x1eb934: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1eb934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1eb938: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1eb938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1eb93c: 0xfc430070  sd          $v1, 0x70($v0)
    ctx->pc = 0x1eb93cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 3));
    // 0x1eb940: 0x3c05612e  lui         $a1, 0x612E
    ctx->pc = 0x1eb940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24878 << 16));
    // 0x1eb944: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x1eb944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1eb948: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1eb948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb94c: 0x34048021  ori         $a0, $zero, 0x8021
    ctx->pc = 0x1eb94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x1eb950: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1eb950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1eb954: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1eb954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1eb958: 0xfc450070  sd          $a1, 0x70($v0)
    ctx->pc = 0x1eb958u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 5));
    // 0x1eb95c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1eb95cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1eb960: 0x26139d80  addiu       $s3, $s0, -0x6280
    ctx->pc = 0x1eb960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942080));
    // 0x1eb964: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1eb964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eb968: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eb968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eb96c: 0x70a01628  paddub      $v0, $a1, $zero
    ctx->pc = 0x1eb96cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb970: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1eb970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1eb974:
    // 0x1eb974: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x1eb974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1eb978: 0x7a640010  lq          $a0, 0x10($s3)
    ctx->pc = 0x1eb978u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1eb97c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1eb97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1eb980: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1eb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eb984: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1eb984u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1eb988: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x1eb988u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x1eb98c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1eb98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1eb990: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EB990u;
    {
        const bool branch_taken_0x1eb990 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1eb990) {
            ctx->pc = 0x1EB974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb974;
        }
    }
    ctx->pc = 0x1EB998u;
    // 0x1eb998: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x1eb998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1eb99c: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x1eb99cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1eb9a0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb9a4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb9a8: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1eb9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb9ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb9b0: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x1eb9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1eb9b4: 0x2504027c  addiu       $a0, $t0, 0x27C
    ctx->pc = 0x1eb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 636));
    // 0x1eb9b8: 0x24050a40  addiu       $a1, $zero, 0xA40
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x1eb9bc: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB9BCu;
    SET_GPR_U32(ctx, 31, 0x1EB9C4u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB9BCu, 0x1EB9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB9C4u;
label_1eb9c4:
    // 0x1eb9c4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1eb9c4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9c8: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x1eb9c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1eb9cc: 0x26c20a40  addiu       $v0, $s6, 0xA40
    ctx->pc = 0x1eb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2624));
    // 0x1eb9d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb9d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9d4: 0xdfa60110  ld          $a2, 0x110($sp)
    ctx->pc = 0x1eb9d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1eb9d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1eb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eb9dc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eb9dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1eb9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb9e4: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x1EB9E4u;
    SET_GPR_U32(ctx, 31, 0x1EB9ECu);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x1EB9E4u, 0x1EB9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB9ECu;
label_1eb9ec:
    // 0x1eb9ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb9ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9f0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb9f4: 0x8ca6027c  lw          $a2, 0x27C($a1)
    ctx->pc = 0x1eb9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 636)));
    // 0x1eb9f8: 0x70c0b628  paddub      $s6, $a2, $zero
    ctx->pc = 0x1eb9f8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eb9fc: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x1eb9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x1eba00: 0x35073001  ori         $a3, $t0, 0x3001
    ctx->pc = 0x1eba00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)12289);
    // 0x1eba04: 0xfec70030  sd          $a3, 0x30($s6)
    ctx->pc = 0x1eba04u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 7));
    // 0x1eba08: 0x3c04312e  lui         $a0, 0x312E
    ctx->pc = 0x1eba08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12590 << 16));
    // 0x1eba0c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1eba0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1eba10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1eba10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eba14: 0x34068028  ori         $a2, $zero, 0x8028
    ctx->pc = 0x1eba14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1eba18: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x1eba18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1eba1c: 0xfec40070  sd          $a0, 0x70($s6)
    ctx->pc = 0x1eba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 4));
    // 0x1eba20: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eba20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eba24: 0x8cb10280  lw          $s1, 0x280($a1)
    ctx->pc = 0x1eba24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x1eba28: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x1eba28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eba2c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1eba30: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x1eba30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x1eba34: 0xfec30030  sd          $v1, 0x30($s6)
    ctx->pc = 0x1eba34u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 3));
    // 0x1eba38: 0x3c06312e  lui         $a2, 0x312E
    ctx->pc = 0x1eba38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12590 << 16));
    // 0x1eba3c: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x1eba3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1eba40: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1eba40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eba44: 0x34038028  ori         $v1, $zero, 0x8028
    ctx->pc = 0x1eba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1eba48: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1eba48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eba4c: 0xfec40070  sd          $a0, 0x70($s6)
    ctx->pc = 0x1eba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 4));
    // 0x1eba50: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eba54: 0x90a31308  lbu         $v1, 0x1308($a1)
    ctx->pc = 0x1eba54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4872)));
    // 0x1eba58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1eba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eba5c: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x1eba5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1eba60: 0x14c0006f  bnez        $a2, . + 4 + (0x6F << 2)
    ctx->pc = 0x1EBA60u;
    {
        const bool branch_taken_0x1eba60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eba60) {
            ctx->pc = 0x1EBC20u;
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EBA68u;
    // 0x1eba68: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x1eba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eba6c: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x1eba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eba70: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBA70u;
    {
        const bool branch_taken_0x1eba70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eba70) {
            ctx->pc = 0x1EBA90u;
            goto label_1eba90;
        }
    }
    ctx->pc = 0x1EBA78u;
    // 0x1eba78: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eba78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eba7c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1eba7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1eba80: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1eba80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eba84: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1eba84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1eba88: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EBA88u;
    SET_GPR_U32(ctx, 31, 0x1EBA90u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EBA88u, 0x1EBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA90u;
label_1eba90:
    // 0x1eba90: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1eba94: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1eba94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1eba98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1eba98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eba9c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1eba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ebaa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ebaa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebaa4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ebaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ebaa8: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1ebaac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebaacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebab0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ebab4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ebab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ebab8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1ebab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1ebabc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ebabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ebac0: 0x8c350ae8  lw          $s5, 0xAE8($at)
    ctx->pc = 0x1ebac0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebac4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ebac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebac8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1ebac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1ebacc: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1ebaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ebad0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ebad0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebad4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1ebad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ebad8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ebad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ebadc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1ebadcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ebae0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EBAE0u;
    SET_GPR_U32(ctx, 31, 0x1EBAE8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EBAE0u, 0x1EBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBAE8u;
label_1ebae8:
    // 0x1ebae8: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1ebae8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebaec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ebaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ebaf0: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1ebaf4: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1ebaf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebaf8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ebaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ebafc: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1ebafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1ebb00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb04: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ebb08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ebb08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebb0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ebb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb10: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1ebb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1ebb14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ebb14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ebb1c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ebb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ebb20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ebb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ebb24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ebb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb28: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1ebb28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb2c: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1ebb2cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ebb30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ebb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebb34: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ebb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ebb38: 0x24850510  addiu       $a1, $a0, 0x510
    ctx->pc = 0x1ebb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x1ebb3c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1ebb3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ebb40: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ebb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ebb44: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ebb44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebb48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ebb48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ebb4c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1ebb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ebb50: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EBB50u;
    SET_GPR_U32(ctx, 31, 0x1EBB58u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EBB50u, 0x1EBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB58u;
label_1ebb58:
    // 0x1ebb58: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1ebb58u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebb5c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ebb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb60: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1ebb64: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x1ebb64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebb68: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1ebb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb6c: 0x24a40ae8  addiu       $a0, $a1, 0xAE8
    ctx->pc = 0x1ebb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x1ebb70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb74: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1ebb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ebb78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ebb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebb7c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1ebb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb80: 0x24b00ae8  addiu       $s0, $a1, 0xAE8
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x1ebb84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb88: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ebb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ebb8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ebb90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ebb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ebb94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ebb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb98: 0x8c350ae8  lw          $s5, 0xAE8($at)
    ctx->pc = 0x1ebb98u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb9c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebba0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ebba4: 0x249005a0  addiu       $s0, $a0, 0x5A0
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x1ebba8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ebba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ebbac: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ebbacu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebbb0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ebbb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ebbb4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1ebbb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ebbb8: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EBBB8u;
    SET_GPR_U32(ctx, 31, 0x1EBBC0u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EBBB8u, 0x1EBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBC0u;
label_1ebbc0:
    // 0x1ebbc0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1ebbc0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebbc4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1ebbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1ebbc8: 0x24850ae8  addiu       $a1, $a0, 0xAE8
    ctx->pc = 0x1ebbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x1ebbcc: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x1ebbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebbd0: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x1ebbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1ebbd4: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1ebbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1ebbd8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBBD8u;
    {
        const bool branch_taken_0x1ebbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ebbd8) {
            ctx->pc = 0x1EBBF0u;
            goto label_1ebbf0;
        }
    }
    ctx->pc = 0x1EBBE0u;
    // 0x1ebbe0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebbe4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ebbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ebbe8: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EBBE8u;
    SET_GPR_U32(ctx, 31, 0x1EBBF0u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EBBE8u, 0x1EBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBF0u;
label_1ebbf0:
    // 0x1ebbf0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1ebbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebbf4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1ebbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ebbf8: 0x30901000  andi        $s0, $a0, 0x1000
    ctx->pc = 0x1ebbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x1ebbfc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBBFCu;
    {
        const bool branch_taken_0x1ebbfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbfc) {
            ctx->pc = 0x1EBC20u;
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EBC04u;
    // 0x1ebc04: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1ebc04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebc08: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ebc0c: 0x34a30200  ori         $v1, $a1, 0x200
    ctx->pc = 0x1ebc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1ebc10: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1ebc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x1ebc14: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebc18: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebc1c: 0xa67010a6  sh          $s0, 0x10A6($s3)
    ctx->pc = 0x1ebc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4262), (uint16_t)GPR_U32(ctx, 16));
label_1ebc20:
    // 0x1ebc20: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1ebc20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ebc24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ebc24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ebc28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ebc28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ebc2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ebc2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ebc30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ebc30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebc34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ebc34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebc38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ebc38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebc3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ebc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebc40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebc44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebc48: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x1ebc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ebc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC54u;
}
