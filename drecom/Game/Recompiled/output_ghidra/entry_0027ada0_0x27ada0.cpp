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

// Function: entry_0027ada0
// Address: 0x27ada0 - 0x27add8
void entry_0027ada0_0x27ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ada0_0x27ada0");
#endif

    switch (ctx->pc) {
        case 0x27adc8u: goto label_27adc8;
        case 0x27add4u: goto label_27add4;
        default: break;
    }

    ctx->pc = 0x27ada0u;

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
    ctx->pc = 0x27add8u;
}
