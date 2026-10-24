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

// Function: Rain_trans_end_ot2
// Address: 0x1adde0 - 0x1adfc0
void Rain_trans_end_ot2_0x1adde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_trans_end_ot2_0x1adde0");
#endif

    switch (ctx->pc) {
        case 0x1ade08u: goto label_1ade08;
        default: break;
    }

    ctx->pc = 0x1adde0u;

    // 0x1adde0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1adde4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1adde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1adde8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1adde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1addec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1addecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1addf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1addf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1addf4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1addf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1addf8: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x1addf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1addfc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1addfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade00: 0xc06b868  jal         func_1AE1A0
    ctx->pc = 0x1ADE00u;
    SET_GPR_U32(ctx, 31, 0x1ADE08u);
    ctx->pc = 0x1AE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE1A0u, 0x1ADE00u, 0x1ADE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE08u;
label_1ade08:
    // 0x1ade08: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ade08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ade0c: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ade14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ade18: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ade18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ade1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade20: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1ade20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1ade24: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ade28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade2c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ade2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ade30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ade38: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ade38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ade3c: 0x3c023b00  lui         $v0, 0x3B00
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15104 << 16));
    // 0x1ade40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ade40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ade44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ade48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ade4c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1ade4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1ade50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ade50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ade54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade58: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ade58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ade5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ade5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ade60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade64: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ade64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ade68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ade6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ade70: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ade70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ade74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ade74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ade78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ade78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ade7c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ade7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ade80: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ade80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ade84: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1ade84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ade88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade8c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ade8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ade90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ade90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ade94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade98: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ade98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ade9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adea0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adea4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adea8: 0x3c0243ff  lui         $v0, 0x43FF
    ctx->pc = 0x1adea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17407 << 16));
    // 0x1adeac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1adeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1adeb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1adeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adeb4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1adeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adeb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1adeb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1adebc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1adebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1adec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adec4: 0x0  nop
    ctx->pc = 0x1adec4u;
    // NOP
    // 0x1adec8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1adec8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adecc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aded0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1aded0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1aded4: 0x3c02435f  lui         $v0, 0x435F
    ctx->pc = 0x1aded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17247 << 16));
    // 0x1aded8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adedc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1adedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1adee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1adee4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1adee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1adee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adeec: 0x0  nop
    ctx->pc = 0x1adeecu;
    // NOP
    // 0x1adef0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1adef0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adef4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adef8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1adef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1adefc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1adefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adf00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf04: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adf04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adf08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adf10: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adf14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1adf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1adf18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf1c: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1adf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1adf20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1adf24: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1adf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1adf28: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1adf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1adf2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf30: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1adf30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1adf34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1adf38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf3c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1adf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1adf40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adf48: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adf4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf50: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1adf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1adf54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1adf58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1adf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1adf5c: 0x39102  srl         $s2, $v1, 4
    ctx->pc = 0x1adf5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1adf60: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1adf60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1adf64: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1adf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1adf68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adf6c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1adf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1adf70: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1adf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1adf74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adf7c: 0x3c02012b  lui         $v0, 0x12B
    ctx->pc = 0x1adf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)299 << 16));
    // 0x1adf80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adf88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1adf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1adf8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1adf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adf94: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1adf94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1adf98: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1adf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1adf9c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1adf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1adfa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adfa4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1adfa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adfa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1adfa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adfac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adfb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adfb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1adfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADFC0u;
}
