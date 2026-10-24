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

// Function: R10f_event_hamon
// Address: 0x27acf0 - 0x27ae1c
void R10f_event_hamon_0x27acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_event_hamon_0x27acf0");
#endif

    switch (ctx->pc) {
        case 0x27ad44u: goto label_27ad44;
        case 0x27adc8u: goto label_27adc8;
        case 0x27add4u: goto label_27add4;
        case 0x27adf4u: goto label_27adf4;
        case 0x27ae00u: goto label_27ae00;
        default: break;
    }

    ctx->pc = 0x27acf0u;

    // 0x27acf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27acf4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27acf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27acfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ad00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ad04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27ad08: 0x24511ac0  addiu       $s1, $v0, 0x1AC0
    ctx->pc = 0x27ad08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27ad0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621AC8u));
    // 0x27ad10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ad14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27ad18: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x27ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x27ad1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ad20: 0x8c521390  lw          $s2, 0x1390($v0)
    ctx->pc = 0x27ad20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x27ad24: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27ad28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27ad2c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x27ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x27ad30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ad34: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x27ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x27ad38: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27ad38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ad3c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x27AD3Cu;
    {
        const bool branch_taken_0x27ad3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ad3c) {
            ctx->pc = 0x27ADD8u;
            goto label_27add8;
        }
    }
    ctx->pc = 0x27AD44u;
label_27ad44:
    // 0x27ad44: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27ad48: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AD48u;
    {
        const bool branch_taken_0x27ad48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ad48) {
            ctx->pc = 0x27AD60u;
            goto label_27ad60;
        }
    }
    ctx->pc = 0x27AD50u;
    // 0x27ad50: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x27ad54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ad54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad58: 0x0  nop
    ctx->pc = 0x27ad58u;
    // NOP
    // 0x27ad5c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x27ad5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_27ad60:
    // 0x27ad60: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x27ad64: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x27ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27ad68: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AD68u;
    {
        const bool branch_taken_0x27ad68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27ad68) {
            ctx->pc = 0x27AD84u;
            goto label_27ad84;
        }
    }
    ctx->pc = 0x27AD70u;
    // 0x27ad70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ad70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad74: 0x0  nop
    ctx->pc = 0x27ad74u;
    // NOP
    // 0x27ad78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27ad78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27ad7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27AD7Cu;
    {
        const bool branch_taken_0x27ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ad7c) {
            ctx->pc = 0x27ADA0u;
            goto label_27ada0;
        }
    }
    ctx->pc = 0x27AD84u;
label_27ad84:
    // 0x27ad84: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x27ad88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ad8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27ad8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ad90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ad90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad94: 0x0  nop
    ctx->pc = 0x27ad94u;
    // NOP
    // 0x27ad98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27ad98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27ad9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27ad9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27ada0:
    // 0x27ada0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x27ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x27ada4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ada4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ada8: 0x0  nop
    ctx->pc = 0x27ada8u;
    // NOP
    // 0x27adac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27adacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27adb0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27adb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27adb4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27adb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27adb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27adb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27adbc: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x27adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27adc0: 0xc0962e4  jal         func_258B90
    ctx->pc = 0x27ADC0u;
    SET_GPR_U32(ctx, 31, 0x27ADC8u);
    ctx->pc = 0x258B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B90u, 0x27ADC0u, 0x27ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADC8u;
label_27adc8:
    // 0x27adc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27adcc: 0xc084964  jal         func_212590
    ctx->pc = 0x27ADCCu;
    SET_GPR_U32(ctx, 31, 0x27ADD4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27ADCCu, 0x27ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADD4u;
label_27add4:
    // 0x27add4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27add4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27add8:
    // 0x27add8: 0x2e020118  sltiu       $v0, $s0, 0x118
    ctx->pc = 0x27add8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)280) ? 1 : 0);
    // 0x27addc: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x27ADDCu;
    {
        const bool branch_taken_0x27addc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27addc) {
            ctx->pc = 0x27AD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ad44;
        }
    }
    ctx->pc = 0x27ADE4u;
    // 0x27ade4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x27ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x27ade8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x27ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27adec: 0xc084964  jal         func_212590
    ctx->pc = 0x27ADECu;
    SET_GPR_U32(ctx, 31, 0x27ADF4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27ADECu, 0x27ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADF4u;
label_27adf4:
    // 0x27adf4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x27adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x27adf8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27ADF8u;
    SET_GPR_U32(ctx, 31, 0x27AE00u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27ADF8u, 0x27AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE00u;
label_27ae00:
    // 0x27ae00: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27ae00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ae04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ae04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ae08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ae08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ae0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ae0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ae10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ae14: 0x3e00008  jr          $ra
    ctx->pc = 0x27AE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AE1Cu;
}
