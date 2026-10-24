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

// Function: Item_get_init
// Address: 0x336830 - 0x336d34
void Item_get_init_0x336830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_get_init_0x336830");
#endif

    switch (ctx->pc) {
        case 0x3369dcu: goto label_3369dc;
        case 0x336a88u: goto label_336a88;
        case 0x336ab4u: goto label_336ab4;
        case 0x336ae4u: goto label_336ae4;
        case 0x336b24u: goto label_336b24;
        case 0x336b5cu: goto label_336b5c;
        case 0x336b6cu: goto label_336b6c;
        case 0x336b80u: goto label_336b80;
        case 0x336bacu: goto label_336bac;
        case 0x336bbcu: goto label_336bbc;
        case 0x336bd0u: goto label_336bd0;
        case 0x336c20u: goto label_336c20;
        case 0x336c50u: goto label_336c50;
        case 0x336c7cu: goto label_336c7c;
        case 0x336cacu: goto label_336cac;
        case 0x336cbcu: goto label_336cbc;
        default: break;
    }

    ctx->pc = 0x336830u;

    // 0x336830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x336830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x336834: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x336834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x336838: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x336838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33683c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x336840: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x336840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x336844: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x336844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x336848: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x336848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33684c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x336850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33685c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x336860: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x336860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x336864: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x336864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x336868: 0x247e4af0  addiu       $fp, $v1, 0x4AF0
    ctx->pc = 0x336868u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 19184));
    // 0x33686c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x33686cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x336870: 0x24634a20  addiu       $v1, $v1, 0x4A20
    ctx->pc = 0x336870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18976));
    // 0x336874: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x336874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x336878: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x336878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62C778u));
    // 0x33687c: 0x90630088  lbu         $v1, 0x88($v1)
    ctx->pc = 0x33687cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x336880: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x336880u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x336884: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x336884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62C778u));
    // 0x336888: 0x90630089  lbu         $v1, 0x89($v1)
    ctx->pc = 0x336888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 137)));
    // 0x33688c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x33688cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x336890: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x336890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62C778u));
    // 0x336894: 0x90630088  lbu         $v1, 0x88($v1)
    ctx->pc = 0x336894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x336898: 0xa3a300a8  sb          $v1, 0xA8($sp)
    ctx->pc = 0x336898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x33689c: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x33689cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62C778u));
    // 0x3368a0: 0x90630089  lbu         $v1, 0x89($v1)
    ctx->pc = 0x3368a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 137)));
    // 0x3368a4: 0xa3a300a9  sb          $v1, 0xA9($sp)
    ctx->pc = 0x3368a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 3));
    // 0x3368a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3368a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3368ac: 0xa2035e04  sb          $v1, 0x5E04($s0)
    ctx->pc = 0x3368acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62BF54u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62BF54u, _value); } while (0);
    // 0x3368b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3368b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3368b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3368b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3368b8: 0x0  nop
    ctx->pc = 0x3368b8u;
    // NOP
    // 0x3368bc: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x3368bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62BF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF50u, _value); } while (0); }
    // 0x3368c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3368c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3368c4: 0x0  nop
    ctx->pc = 0x3368c4u;
    // NOP
    // 0x3368c8: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x3368c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62BF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF50u, _value); } while (0); }
    // 0x3368cc: 0x8e045dd4  lw          $a0, 0x5DD4($s0)
    ctx->pc = 0x3368ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x62BF24u));
    // 0x3368d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3368d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3368d4: 0x108300f7  beq         $a0, $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x3368D4u;
    {
        const bool branch_taken_0x3368d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3368d4) {
            ctx->pc = 0x336CB4u;
            goto label_336cb4;
        }
    }
    ctx->pc = 0x3368DCu;
    // 0x3368dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3368dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3368e0: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x3368E0u;
    {
        const bool branch_taken_0x3368e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3368e0) {
            ctx->pc = 0x336BD8u;
            goto label_336bd8;
        }
    }
    ctx->pc = 0x3368E8u;
    // 0x3368e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3368e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3368ec: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3368ECu;
    {
        const bool branch_taken_0x3368ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3368ec) {
            ctx->pc = 0x336B88u;
            goto label_336b88;
        }
    }
    ctx->pc = 0x3368F4u;
    // 0x3368f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3368f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3368f8: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x3368F8u;
    {
        const bool branch_taken_0x3368f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3368f8) {
            ctx->pc = 0x336B38u;
            goto label_336b38;
        }
    }
    ctx->pc = 0x336900u;
    // 0x336900: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336900u;
    {
        const bool branch_taken_0x336900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336900) {
            ctx->pc = 0x336910u;
            goto label_336910;
        }
    }
    ctx->pc = 0x336908u;
    // 0x336908: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x336908u;
    {
        const bool branch_taken_0x336908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336908) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336910u;
label_336910:
    // 0x336910: 0x261161d4  addiu       $s1, $s0, 0x61D4
    ctx->pc = 0x336910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25044));
    // 0x336914: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x336914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x336918: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x336918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x33691c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x33691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x336920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336924: 0x0  nop
    ctx->pc = 0x336924u;
    // NOP
    // 0x336928: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x336928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x33692c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x33692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x336930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336934: 0x0  nop
    ctx->pc = 0x336934u;
    // NOP
    // 0x336938: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x336938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x33693c: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x33693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x336940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336944: 0x0  nop
    ctx->pc = 0x336944u;
    // NOP
    // 0x336948: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x336948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x33694c: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x33694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x336950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336954: 0x0  nop
    ctx->pc = 0x336954u;
    // NOP
    // 0x336958: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x336958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x33695c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x33695cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x336960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336964: 0x0  nop
    ctx->pc = 0x336964u;
    // NOP
    // 0x336968: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x336968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x33696c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x33696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x336970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336974: 0x0  nop
    ctx->pc = 0x336974u;
    // NOP
    // 0x336978: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x336978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x33697c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x33697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x336980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336984: 0x0  nop
    ctx->pc = 0x336984u;
    // NOP
    // 0x336988: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x336988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x33698c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x33698cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x336990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336994: 0x0  nop
    ctx->pc = 0x336994u;
    // NOP
    // 0x336998: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x336998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x33699c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x33699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x3369a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3369a4: 0x0  nop
    ctx->pc = 0x3369a4u;
    // NOP
    // 0x3369a8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3369a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x3369ac: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x3369acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x3369b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3369b4: 0x0  nop
    ctx->pc = 0x3369b4u;
    // NOP
    // 0x3369b8: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x3369b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x3369bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3369bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3369c0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x3369c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3369c4: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x3369c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x3369c8: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x3369c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3369cc: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x3369ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x3369d0: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x3369d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x3369d4: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x3369D4u;
    SET_GPR_U32(ctx, 31, 0x3369DCu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x3369D4u, 0x3369DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369DCu;
label_3369dc:
    // 0x3369dc: 0x26116318  addiu       $s1, $s0, 0x6318
    ctx->pc = 0x3369dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25368));
    // 0x3369e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3369e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3369e8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x3369e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x3369ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3369f0: 0x0  nop
    ctx->pc = 0x3369f0u;
    // NOP
    // 0x3369f4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x3369f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x3369f8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x3369f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x3369fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a00: 0x0  nop
    ctx->pc = 0x336a00u;
    // NOP
    // 0x336a04: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x336a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x336a08: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x336a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x336a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a10: 0x0  nop
    ctx->pc = 0x336a10u;
    // NOP
    // 0x336a14: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x336a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x336a18: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x336a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x336a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a20: 0x0  nop
    ctx->pc = 0x336a20u;
    // NOP
    // 0x336a24: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x336a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x336a28: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x336a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x336a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a30: 0x0  nop
    ctx->pc = 0x336a30u;
    // NOP
    // 0x336a34: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x336a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x336a38: 0x3c0243a8  lui         $v0, 0x43A8
    ctx->pc = 0x336a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17320 << 16));
    // 0x336a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a40: 0x0  nop
    ctx->pc = 0x336a40u;
    // NOP
    // 0x336a44: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x336a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x336a48: 0x3c0243d3  lui         $v0, 0x43D3
    ctx->pc = 0x336a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17363 << 16));
    // 0x336a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a50: 0x0  nop
    ctx->pc = 0x336a50u;
    // NOP
    // 0x336a54: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x336a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x336a58: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x336a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
    // 0x336a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a60: 0x0  nop
    ctx->pc = 0x336a60u;
    // NOP
    // 0x336a64: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x336a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x336a68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x336a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x336a6c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x336a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x336a70: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x336a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x336a74: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x336a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x336a78: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x336a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x336a7c: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x336a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x336a80: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x336A80u;
    SET_GPR_U32(ctx, 31, 0x336A88u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x336A80u, 0x336A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A88u;
label_336a88:
    // 0x336a88: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x336a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x336a8c: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x336a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x336a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336a94: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x336A94u;
    {
        const bool branch_taken_0x336a94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336a94) {
            ctx->pc = 0x336ADCu;
            goto label_336adc;
        }
    }
    ctx->pc = 0x336A9Cu;
    // 0x336a9c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336A9Cu;
    {
        const bool branch_taken_0x336a9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a9c) {
            ctx->pc = 0x336AACu;
            goto label_336aac;
        }
    }
    ctx->pc = 0x336AA4u;
    // 0x336aa4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x336AA4u;
    {
        const bool branch_taken_0x336aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336aa4) {
            ctx->pc = 0x336B04u;
            goto label_336b04;
        }
    }
    ctx->pc = 0x336AACu;
label_336aac:
    // 0x336aac: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x336AACu;
    SET_GPR_U32(ctx, 31, 0x336AB4u);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x336AACu, 0x336AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AB4u;
label_336ab4:
    // 0x336ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ab8: 0xa2026625  sb          $v0, 0x6625($s0)
    ctx->pc = 0x336ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 2));
    // 0x336abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ac0: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x336ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x336ac4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x336ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336ac8: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x336ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x336acc: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x336accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x336ad0: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x336ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x336ad4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x336AD4u;
    {
        const bool branch_taken_0x336ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ad4) {
            ctx->pc = 0x336B04u;
            goto label_336b04;
        }
    }
    ctx->pc = 0x336ADCu;
label_336adc:
    // 0x336adc: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x336ADCu;
    SET_GPR_U32(ctx, 31, 0x336AE4u);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x336ADCu, 0x336AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AE4u;
label_336ae4:
    // 0x336ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ae8: 0xa2026625  sb          $v0, 0x6625($s0)
    ctx->pc = 0x336ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 2));
    // 0x336aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336af0: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x336af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x336af4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x336af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336af8: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x336af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x336afc: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x336afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x336b00: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x336b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
label_336b04:
    // 0x336b04: 0x26120520  addiu       $s2, $s0, 0x520
    ctx->pc = 0x336b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x336b08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x336b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x336b0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x336b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x336b10: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x336b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336b14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336b18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b1c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336B1Cu;
    SET_GPR_U32(ctx, 31, 0x336B24u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336B1Cu, 0x336B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B24u;
label_336b24:
    // 0x336b24: 0x8e035dd4  lw          $v1, 0x5DD4($s0)
    ctx->pc = 0x336b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x336b28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x336b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336b2c: 0xae035dd4  sw          $v1, 0x5DD4($s0)
    ctx->pc = 0x336b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 3));
    // 0x336b30: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x336B30u;
    {
        const bool branch_taken_0x336b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b30) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336B38u;
label_336b38:
    // 0x336b38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336b3c: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336B3Cu;
    {
        const bool branch_taken_0x336b3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336b3c) {
            ctx->pc = 0x336B64u;
            goto label_336b64;
        }
    }
    ctx->pc = 0x336B44u;
    // 0x336b44: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336B44u;
    {
        const bool branch_taken_0x336b44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b44) {
            ctx->pc = 0x336B54u;
            goto label_336b54;
        }
    }
    ctx->pc = 0x336B4Cu;
    // 0x336b4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336B4Cu;
    {
        const bool branch_taken_0x336b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b4c) {
            ctx->pc = 0x336B6Cu;
            goto label_336b6c;
        }
    }
    ctx->pc = 0x336B54u;
label_336b54:
    // 0x336b54: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x336B54u;
    SET_GPR_U32(ctx, 31, 0x336B5Cu);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x336B54u, 0x336B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B5Cu;
label_336b5c:
    // 0x336b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336B5Cu;
    {
        const bool branch_taken_0x336b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b5c) {
            ctx->pc = 0x336B6Cu;
            goto label_336b6c;
        }
    }
    ctx->pc = 0x336B64u;
label_336b64:
    // 0x336b64: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x336B64u;
    SET_GPR_U32(ctx, 31, 0x336B6Cu);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x336B64u, 0x336B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B6Cu;
label_336b6c:
    // 0x336b6c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x336b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336b70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336b70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336b74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b78: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336B78u;
    SET_GPR_U32(ctx, 31, 0x336B80u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336B78u, 0x336B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B80u;
label_336b80:
    // 0x336b80: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x336B80u;
    {
        const bool branch_taken_0x336b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b80) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336B88u;
label_336b88:
    // 0x336b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336b8c: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336B8Cu;
    {
        const bool branch_taken_0x336b8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336b8c) {
            ctx->pc = 0x336BB4u;
            goto label_336bb4;
        }
    }
    ctx->pc = 0x336B94u;
    // 0x336b94: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336B94u;
    {
        const bool branch_taken_0x336b94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b94) {
            ctx->pc = 0x336BA4u;
            goto label_336ba4;
        }
    }
    ctx->pc = 0x336B9Cu;
    // 0x336b9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336B9Cu;
    {
        const bool branch_taken_0x336b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b9c) {
            ctx->pc = 0x336BBCu;
            goto label_336bbc;
        }
    }
    ctx->pc = 0x336BA4u;
label_336ba4:
    // 0x336ba4: 0xc0a15a8  jal         func_2856A0
    ctx->pc = 0x336BA4u;
    SET_GPR_U32(ctx, 31, 0x336BACu);
    ctx->pc = 0x2856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856A0u, 0x336BA4u, 0x336BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BACu;
label_336bac:
    // 0x336bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336BACu;
    {
        const bool branch_taken_0x336bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bac) {
            ctx->pc = 0x336BBCu;
            goto label_336bbc;
        }
    }
    ctx->pc = 0x336BB4u;
label_336bb4:
    // 0x336bb4: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x336BB4u;
    SET_GPR_U32(ctx, 31, 0x336BBCu);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x336BB4u, 0x336BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BBCu;
label_336bbc:
    // 0x336bbc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x336bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336bc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336bc8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336BC8u;
    SET_GPR_U32(ctx, 31, 0x336BD0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336BC8u, 0x336BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BD0u;
label_336bd0:
    // 0x336bd0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x336BD0u;
    {
        const bool branch_taken_0x336bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bd0) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336BD8u;
label_336bd8:
    // 0x336bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336bdc: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x336BDCu;
    {
        const bool branch_taken_0x336bdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336bdc) {
            ctx->pc = 0x336C40u;
            goto label_336c40;
        }
    }
    ctx->pc = 0x336BE4u;
    // 0x336be4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336BE4u;
    {
        const bool branch_taken_0x336be4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336be4) {
            ctx->pc = 0x336BF4u;
            goto label_336bf4;
        }
    }
    ctx->pc = 0x336BECu;
    // 0x336bec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x336BECu;
    {
        const bool branch_taken_0x336bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bec) {
            ctx->pc = 0x336C94u;
            goto label_336c94;
        }
    }
    ctx->pc = 0x336BF4u;
label_336bf4:
    // 0x336bf4: 0x26120120  addiu       $s2, $s0, 0x120
    ctx->pc = 0x336bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x336bf8: 0x15b840  sll         $s7, $s5, 1
    ctx->pc = 0x336bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x336bfc: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x336bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x336c00: 0x345400a4  ori         $s4, $v0, 0xA4
    ctx->pc = 0x336c00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x336c04: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x336c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336c08: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x336c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x336c0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x336c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x336c10: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x336c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x336c14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x336c14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336c18: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x336C18u;
    SET_GPR_U32(ctx, 31, 0x336C20u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x336C18u, 0x336C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C20u;
label_336c20:
    // 0x336c20: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x336c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x336c24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x336c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x336c28: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x336c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x336c2c: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x336c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336c34: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
    // 0x336c38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x336C38u;
    {
        const bool branch_taken_0x336c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336c38) {
            ctx->pc = 0x336C94u;
            goto label_336c94;
        }
    }
    ctx->pc = 0x336C40u;
label_336c40:
    // 0x336c40: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x336c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x336c44: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x336c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x336c48: 0xc0ce1ec  jal         func_3387B0
    ctx->pc = 0x336C48u;
    SET_GPR_U32(ctx, 31, 0x336C50u);
    ctx->pc = 0x3387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387B0u, 0x336C48u, 0x336C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C50u;
label_336c50:
    // 0x336c50: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x336c50u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336c54: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x336c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x336c58: 0x34540085  ori         $s4, $v0, 0x85
    ctx->pc = 0x336c58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)133);
    // 0x336c5c: 0x26120120  addiu       $s2, $s0, 0x120
    ctx->pc = 0x336c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x336c60: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x336c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336c64: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x336c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x336c68: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x336c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x336c6c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x336c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x336c70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x336c70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336c74: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x336C74u;
    SET_GPR_U32(ctx, 31, 0x336C7Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x336C74u, 0x336C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C7Cu;
label_336c7c:
    // 0x336c7c: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x336c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x336c80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x336c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x336c84: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x336c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x336c88: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x336c8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336c90: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
label_336c94:
    // 0x336c94: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x336c98: 0x24442728  addiu       $a0, $v0, 0x2728
    ctx->pc = 0x336c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10024));
    // 0x336c9c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x336c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x336ca0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x336ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x336ca4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x336CA4u;
    SET_GPR_U32(ctx, 31, 0x336CACu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x336CACu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x336CACu) { return; }
    ctx->pc = 0x336CACu;
label_336cac:
    // 0x336cac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x336CACu;
    {
        const bool branch_taken_0x336cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336cac) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336CB4u;
label_336cb4:
    // 0x336cb4: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x336CB4u;
    SET_GPR_U32(ctx, 31, 0x336CBCu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x336CB4u, 0x336CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336CBCu;
label_336cbc:
    // 0x336cbc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x336CBCu;
    {
        const bool branch_taken_0x336cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336cbc) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336CC4u;
    // 0x336cc4: 0x8e04685c  lw          $a0, 0x685C($s0)
    ctx->pc = 0x336cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x336cc8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x336cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x336ccc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x336cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x336cd0: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x336cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x336cd4: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x336cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x336cd8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x336cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x336cdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x336CDCu;
    {
        const bool branch_taken_0x336cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336cdc) {
            ctx->pc = 0x336CF4u;
            goto label_336cf4;
        }
    }
    ctx->pc = 0x336CE4u;
    // 0x336ce4: 0x8e046870  lw          $a0, 0x6870($s0)
    ctx->pc = 0x336ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x336ce8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x336ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x336cec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x336cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x336cf0: 0xae036870  sw          $v1, 0x6870($s0)
    ctx->pc = 0x336cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 3));
label_336cf4:
    // 0x336cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336cf8: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x336cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x336cfc: 0xae005dd4  sw          $zero, 0x5DD4($s0)
    ctx->pc = 0x336cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 0));
label_336d00:
    // 0x336d00: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x336d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x336d04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x336d04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x336d08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x336d08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x336d0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x336d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x336d10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x336d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336d14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336d28: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x336d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x336d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x336D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336D34u;
}
