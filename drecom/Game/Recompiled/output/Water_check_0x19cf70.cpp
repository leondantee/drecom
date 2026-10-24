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

// Function: Water_check
// Address: 0x19cf70 - 0x19d0c8
void Water_check_0x19cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Water_check_0x19cf70");
#endif

    switch (ctx->pc) {
        case 0x19d000u: goto label_19d000;
        case 0x19d038u: goto label_19d038;
        default: break;
    }

    ctx->pc = 0x19cf70u;

    // 0x19cf70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19cf74: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x19cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x19cf78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19cf7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19cf80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cf84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cf88: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x19cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19cf8c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x19cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x19cf90: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x19cf90u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19cf94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cf94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cf98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19cf9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19cfa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cfa4: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x19cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x19cfa8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cfac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19cfb0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19CFB0u;
    {
        const bool branch_taken_0x19cfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cfb0) {
            ctx->pc = 0x19CFECu;
            goto label_19cfec;
        }
    }
    ctx->pc = 0x19CFB8u;
    // 0x19cfb8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cfbc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cfc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cfc4: 0xc420fce8  lwc1        $f0, -0x318($at)
    ctx->pc = 0x19cfc4u;
    { uint32_t bits = FAST_READ32(0x5CFCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cfc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cfcc: 0x0  nop
    ctx->pc = 0x19cfccu;
    // NOP
    // 0x19cfd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19CFD0u;
    {
        const bool branch_taken_0x19cfd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cfd0) {
            ctx->pc = 0x19CFECu;
            goto label_19cfec;
        }
    }
    ctx->pc = 0x19CFD8u;
    // 0x19cfd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19cfd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cfdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cfe0: 0xc420fce8  lwc1        $f0, -0x318($at)
    ctx->pc = 0x19cfe0u;
    { uint32_t bits = FAST_READ32(0x5CFCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cfe4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19cfe8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_19cfec:
    // 0x19cfec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19cff0: 0x2450d390  addiu       $s0, $v0, -0x2C70
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x19cff4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19cff4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19cff8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19CFF8u;
    {
        const bool branch_taken_0x19cff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cff8) {
            ctx->pc = 0x19D098u;
            goto label_19d098;
        }
    }
    ctx->pc = 0x19D000u;
label_19d000:
    // 0x19d000: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x19d000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x19d004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d008: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d00c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19D00Cu;
    {
        const bool branch_taken_0x19d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d00c) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19D014u;
    // 0x19d014: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x19d014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x19d018: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19d018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d01c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d020: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D020u;
    {
        const bool branch_taken_0x19d020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d020) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19D028u;
    // 0x19d028: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d02c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19d02cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19d030: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x19D030u;
    SET_GPR_U32(ctx, 31, 0x19D038u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x19D030u, 0x19D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D038u;
label_19d038:
    // 0x19d038: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19D038u;
    {
        const bool branch_taken_0x19d038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d038) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19D040u;
    // 0x19d040: 0x26110088  addiu       $s1, $s0, 0x88
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x19d044: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d048: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d04c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d054: 0x0  nop
    ctx->pc = 0x19d054u;
    // NOP
    // 0x19d058: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x19D058u;
    {
        const bool branch_taken_0x19d058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d058) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19D060u;
    // 0x19d060: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19d064: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d068: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d06c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d070: 0x0  nop
    ctx->pc = 0x19d070u;
    // NOP
    // 0x19d074: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19D074u;
    {
        const bool branch_taken_0x19d074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d074) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19D07Cu;
    // 0x19d07c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d080: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19d088: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19d08c: 0x0  nop
    ctx->pc = 0x19d08cu;
    // NOP
label_19d090:
    // 0x19d090: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x19d090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19d094: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19d098:
    // 0x19d098: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x19d098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x19d09c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x19D09Cu;
    {
        const bool branch_taken_0x19d09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d09c) {
            ctx->pc = 0x19D000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d000;
        }
    }
    ctx->pc = 0x19D0A4u;
    // 0x19d0a4: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x19d0a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x19d0a8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19d0a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d0ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d0acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d0b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d0bc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19d0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19d0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0C8u;
}
