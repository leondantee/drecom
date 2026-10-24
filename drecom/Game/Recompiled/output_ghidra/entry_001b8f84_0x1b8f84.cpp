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

// Function: entry_001b8f84
// Address: 0x1b8f84 - 0x1b9058
void entry_001b8f84_0x1b8f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f84_0x1b8f84");
#endif

    switch (ctx->pc) {
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8ff0u: goto label_1b8ff0;
        default: break;
    }

    ctx->pc = 0x1b8f84u;

    // 0x1b8f84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f88: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f90: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b8f94: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b8f98: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8f9c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B8F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8FA4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B8FA4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B8FA4u) { return; }
    ctx->pc = 0x1B8FA4u;
label_1b8fa4:
    // 0x1b8fa4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8fa4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8fa8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8fac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B8FACu;
    SET_GPR_U32(ctx, 31, 0x1B8FB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B8FACu, 0x1B8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FB4u;
label_1b8fb4:
    // 0x1b8fb4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1b8fb4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8fb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8fbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8fc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8fc4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B8FC4u;
    SET_GPR_U32(ctx, 31, 0x1B8FCCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B8FC4u, 0x1B8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FCCu;
label_1b8fcc:
    // 0x1b8fcc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8fd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8fd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8fd8: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1b8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b8fdc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b8fdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b8fe0: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x1b8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1b8fe4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1b8fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b8fe8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B8FE8u;
    SET_GPR_U32(ctx, 31, 0x1B8FF0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B8FE8u, 0x1B8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF0u;
label_1b8ff0:
    // 0x1b8ff0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b8ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b8ff4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8ff8: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8ffc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9000: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9008: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b900c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9010: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9014: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9018: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b9018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b901c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b901cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9020: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b9020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1b9024: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9028: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b9028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b902c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9030: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9034: 0x0  nop
    ctx->pc = 0x1b9034u;
    // NOP
    // 0x1b9038: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9038u;
    {
        const bool branch_taken_0x1b9038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9038) {
            ctx->pc = 0x1B9058u;
            return;
        }
    }
    ctx->pc = 0x1B9040u;
    // 0x1b9040: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9048: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b904c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9050: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9054: 0xac851b60  sw          $a1, 0x1B60($a0)
    ctx->pc = 0x1b9054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 5));
    ctx->pc = 0x1b9058u;
}
