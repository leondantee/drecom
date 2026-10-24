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

// Function: Rain_trans_end_ot3
// Address: 0x1adfc0 - 0x1ae1a0
void Rain_trans_end_ot3_0x1adfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_trans_end_ot3_0x1adfc0");
#endif

    switch (ctx->pc) {
        case 0x1adfe8u: goto label_1adfe8;
        default: break;
    }

    ctx->pc = 0x1adfc0u;

    // 0x1adfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1adfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1adfc4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1adfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1adfc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1adfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1adfcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adfd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1adfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adfd4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1adfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1adfd8: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x1adfd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1adfdc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1adfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adfe0: 0xc06b868  jal         func_1AE1A0
    ctx->pc = 0x1ADFE0u;
    SET_GPR_U32(ctx, 31, 0x1ADFE8u);
    ctx->pc = 0x1AE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE1A0u, 0x1ADFE0u, 0x1ADFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFE8u;
label_1adfe8:
    // 0x1adfe8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adfec: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1adfecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adff0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adff4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1adff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1adff8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1adff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1adffc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae000: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1ae000u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1ae004: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1ae004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ae008: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae00c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae00cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae010: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae014: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae018: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae01c: 0x3c023b00  lui         $v0, 0x3B00
    ctx->pc = 0x1ae01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15104 << 16));
    // 0x1ae020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae024: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae028: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ae02c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1ae02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1ae030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae034: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae038: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ae038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ae03c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ae03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae040: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae044: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae044u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae048: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae04c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae050: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae054: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ae054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae058: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae05c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ae05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ae060: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ae060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ae064: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1ae064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae068: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae06c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae06cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ae070: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ae070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae074: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae078: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae078u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae07c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae080: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae084: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae088: 0x3c0243ff  lui         $v0, 0x43FF
    ctx->pc = 0x1ae088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17407 << 16));
    // 0x1ae08c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ae08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ae090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae094: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1ae094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae098: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ae098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae09c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1ae09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1ae0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae0a4: 0x0  nop
    ctx->pc = 0x1ae0a4u;
    // NOP
    // 0x1ae0a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae0a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae0ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae0b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ae0b4: 0x3c02435f  lui         $v0, 0x435F
    ctx->pc = 0x1ae0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17247 << 16));
    // 0x1ae0b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae0bc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1ae0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ae0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae0c4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1ae0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1ae0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae0cc: 0x0  nop
    ctx->pc = 0x1ae0ccu;
    // NOP
    // 0x1ae0d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae0d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae0d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae0d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ae0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ae0dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae0e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae0e4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae0e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae0ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae0f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae0f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ae0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae0f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae0fc: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1ae0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1ae100: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ae100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae104: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ae104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ae108: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1ae108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae10c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae110: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae110u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ae114: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae118: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae11c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae11cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae120: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae124: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae128: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae12c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ae12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae130: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ae134: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae138: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ae13c: 0x39102  srl         $s2, $v1, 4
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ae140: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1ae140u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ae144: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1ae144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1ae148: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ae148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ae14c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1ae14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ae150: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1ae150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1ae154: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae15c: 0x3c02012b  lui         $v0, 0x12B
    ctx->pc = 0x1ae15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)299 << 16));
    // 0x1ae160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae164: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae168: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ae16c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae170: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ae170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae174: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1ae174u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1ae178: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ae17c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ae17cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ae180: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae184: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1ae184u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae194: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae198: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE1A0u;
}
