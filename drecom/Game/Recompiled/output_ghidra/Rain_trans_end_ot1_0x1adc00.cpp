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

// Function: Rain_trans_end_ot1
// Address: 0x1adc00 - 0x1adde0
void Rain_trans_end_ot1_0x1adc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_trans_end_ot1_0x1adc00");
#endif

    switch (ctx->pc) {
        case 0x1adc28u: goto label_1adc28;
        default: break;
    }

    ctx->pc = 0x1adc00u;

    // 0x1adc00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1adc04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1adc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1adc08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1adc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1adc0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adc10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1adc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adc14: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1adc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1adc18: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x1adc18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1adc1c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1adc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc20: 0xc06b868  jal         func_1AE1A0
    ctx->pc = 0x1ADC20u;
    SET_GPR_U32(ctx, 31, 0x1ADC28u);
    ctx->pc = 0x1AE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE1A0u, 0x1ADC20u, 0x1ADC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC28u;
label_1adc28:
    // 0x1adc28: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adc2c: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1adc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adc38: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adc3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc40: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1adc40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1adc44: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1adc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1adc48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc4c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adc50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adc58: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adc5c: 0x3c023b00  lui         $v0, 0x3B00
    ctx->pc = 0x1adc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15104 << 16));
    // 0x1adc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc68: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1adc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1adc6c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1adc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1adc70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc78: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1adc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1adc7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1adc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adc80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc84: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adc84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adc88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adc8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adc90: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adc94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1adc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1adc98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adc9c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1adca0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1adca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1adca4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1adca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1adca8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adcac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1adcacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1adcb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1adcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1adcb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adcb8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adcbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adcc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adcc4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adcc8: 0x3c0243ff  lui         $v0, 0x43FF
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17407 << 16));
    // 0x1adccc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1adcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1adcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1adcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adcd4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1adcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adcd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1adcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1adcdc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1adce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adce4: 0x0  nop
    ctx->pc = 0x1adce4u;
    // NOP
    // 0x1adce8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1adce8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adcec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adcf0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1adcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1adcf4: 0x3c02435f  lui         $v0, 0x435F
    ctx->pc = 0x1adcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17247 << 16));
    // 0x1adcf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1adcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adcfc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1adcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1add00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1add00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1add04: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1add08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1add08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1add0c: 0x0  nop
    ctx->pc = 0x1add0cu;
    // NOP
    // 0x1add10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1add10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1add14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1add14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add18: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1add18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1add1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1add20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1add20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add24: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1add24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1add28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1add28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1add30: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1add30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1add34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1add34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1add38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1add3c: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1add3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1add40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1add40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1add44: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1add48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1add48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1add4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1add4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add50: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1add50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1add54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1add54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1add58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add5c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1add5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1add60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1add60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1add64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1add68: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1add68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1add6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1add6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add70: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1add70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1add74: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1add74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1add78: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1add78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1add7c: 0x39102  srl         $s2, $v1, 4
    ctx->pc = 0x1add7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1add80: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1add80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1add84: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1add84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1add88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1add88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1add8c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1add90: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1add90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1add94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1add94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1add98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1add98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1add9c: 0x3c02012b  lui         $v0, 0x12B
    ctx->pc = 0x1add9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)299 << 16));
    // 0x1adda0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adda4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adda8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1adda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1addac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1addacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1addb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1addb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1addb4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1addb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1addb8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1addb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1addbc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1addbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1addc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1addc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1addc4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1addc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1addc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1addc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1addcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1addccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1addd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1addd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1addd4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1addd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1addd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADDE0u;
}
