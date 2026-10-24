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

// Function: Rain_trans_end_ot0
// Address: 0x1ada20 - 0x1adc00
void Rain_trans_end_ot0_0x1ada20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_trans_end_ot0_0x1ada20");
#endif

    switch (ctx->pc) {
        case 0x1ada48u: goto label_1ada48;
        default: break;
    }

    ctx->pc = 0x1ada20u;

    // 0x1ada20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ada24: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1ada24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ada28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ada28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ada2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ada2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ada30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ada30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ada34: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ada34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1ada38: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x1ada38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ada3c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada40: 0xc06b868  jal         func_1AE1A0
    ctx->pc = 0x1ADA40u;
    SET_GPR_U32(ctx, 31, 0x1ADA48u);
    ctx->pc = 0x1AE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE1A0u, 0x1ADA40u, 0x1ADA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA48u;
label_1ada48:
    // 0x1ada48: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ada48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ada4c: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ada50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ada54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ada58: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ada58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ada5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada60: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1ada60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1ada64: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1ada64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ada68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ada68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada6c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ada6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ada70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ada70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ada74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ada78: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ada78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ada7c: 0x3c023b00  lui         $v0, 0x3B00
    ctx->pc = 0x1ada7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15104 << 16));
    // 0x1ada80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ada80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ada84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ada88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ada8c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1ada8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1ada90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ada90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ada94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ada94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ada98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ada98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ada9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ada9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adaa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adaa4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adaa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adaac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adab0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1adab8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adabc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1adabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1adac0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1adac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1adac4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1adac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adacc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1adaccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1adad0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1adad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adad8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adad8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adadc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adae0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adae4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adae8: 0x3c0243ff  lui         $v0, 0x43FF
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17407 << 16));
    // 0x1adaec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1adaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1adaf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1adaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adaf4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1adaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adaf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1adaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1adafc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1adb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adb04: 0x0  nop
    ctx->pc = 0x1adb04u;
    // NOP
    // 0x1adb08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1adb08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adb0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb10: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1adb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1adb14: 0x3c02435f  lui         $v0, 0x435F
    ctx->pc = 0x1adb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17247 << 16));
    // 0x1adb18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1adb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adb1c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1adb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adb20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1adb20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1adb24: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1adb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1adb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adb2c: 0x0  nop
    ctx->pc = 0x1adb2cu;
    // NOP
    // 0x1adb30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1adb30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adb34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1adb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1adb3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1adb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adb40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb44: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adb44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adb48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adb50: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adb54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1adb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1adb58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adb5c: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1adb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1adb60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1adb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1adb64: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1adb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1adb68: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1adb6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1adb70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1adb74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1adb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1adb78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb7c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adb80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adb88: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adb8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb90: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1adb94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1adb98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1adb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1adb9c: 0x39102  srl         $s2, $v1, 4
    ctx->pc = 0x1adb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1adba0: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1adba0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1adba4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1adba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1adba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adbac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1adbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1adbb0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1adbb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adbb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adbbc: 0x3c02012b  lui         $v0, 0x12B
    ctx->pc = 0x1adbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)299 << 16));
    // 0x1adbc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adbc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adbc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1adbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1adbcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adbd0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1adbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adbd4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1adbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1adbd8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1adbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1adbdc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1adbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1adbe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adbe4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1adbe4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adbe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1adbe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adbf4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1adbf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1adbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADC00u;
}
