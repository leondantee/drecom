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

// Function: entry_0021ea74
// Address: 0x21ea74 - 0x21eb88
void entry_0021ea74_0x21ea74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ea74_0x21ea74");
#endif

    switch (ctx->pc) {
        case 0x21ea7cu: goto label_21ea7c;
        case 0x21ea88u: goto label_21ea88;
        case 0x21eab0u: goto label_21eab0;
        case 0x21eabcu: goto label_21eabc;
        case 0x21eaccu: goto label_21eacc;
        case 0x21ead8u: goto label_21ead8;
        case 0x21eafcu: goto label_21eafc;
        case 0x21eb20u: goto label_21eb20;
        case 0x21eb2cu: goto label_21eb2c;
        case 0x21eb3cu: goto label_21eb3c;
        case 0x21eb48u: goto label_21eb48;
        case 0x21eb70u: goto label_21eb70;
        case 0x21eb80u: goto label_21eb80;
        default: break;
    }

    ctx->pc = 0x21ea74u;

    // 0x21ea74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21EA74u;
    SET_GPR_U32(ctx, 31, 0x21EA7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21EA74u, 0x21EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA7Cu;
label_21ea7c:
    // 0x21ea7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21ea7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21ea80: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EA80u;
    SET_GPR_U32(ctx, 31, 0x21EA88u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EA80u, 0x21EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA88u;
label_21ea88:
    // 0x21ea88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21ea88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ea8c: 0x3c033f50  lui         $v1, 0x3F50
    ctx->pc = 0x21ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
    // 0x21ea90: 0x3464624d  ori         $a0, $v1, 0x624D
    ctx->pc = 0x21ea90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25165);
    // 0x21ea94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ea94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x21ea98: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x21ea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
    // 0x21ea9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21eaa0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x21eaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
    // 0x21eaa4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x21eaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21eaa8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EAA8u;
    SET_GPR_U32(ctx, 31, 0x21EAB0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EAA8u, 0x21EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAB0u;
label_21eab0:
    // 0x21eab0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21eab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eab4: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EAB4u;
    SET_GPR_U32(ctx, 31, 0x21EABCu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EAB4u, 0x21EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EABCu;
label_21eabc:
    // 0x21eabc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eac0: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x21eac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x21eac4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21EAC4u;
    SET_GPR_U32(ctx, 31, 0x21EACCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21EAC4u, 0x21EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EACCu;
label_21eacc:
    // 0x21eacc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21eaccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21ead0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EAD0u;
    SET_GPR_U32(ctx, 31, 0x21EAD8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EAD0u, 0x21EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAD8u;
label_21ead8:
    // 0x21ead8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21ead8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eadc: 0x3c033f84  lui         $v1, 0x3F84
    ctx->pc = 0x21eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
    // 0x21eae0: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x21eae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x21eae4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21eae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21eae8: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x21eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x21eaec: 0x3462147b  ori         $v0, $v1, 0x147B
    ctx->pc = 0x21eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x21eaf0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x21eaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x21eaf4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EAF4u;
    SET_GPR_U32(ctx, 31, 0x21EAFCu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EAF4u, 0x21EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAFCu;
label_21eafc:
    // 0x21eafc: 0x3c03bf9e  lui         $v1, 0xBF9E
    ctx->pc = 0x21eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49054 << 16));
    // 0x21eb00: 0x3463b851  ori         $v1, $v1, 0xB851
    ctx->pc = 0x21eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47185);
    // 0x21eb04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21eb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21eb08: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x21eb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x21eb0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21eb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21eb10: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x21eb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21eb14: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21eb14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb18: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x21EB18u;
    SET_GPR_U32(ctx, 31, 0x21EB20u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x21EB18u, 0x21EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB20u;
label_21eb20:
    // 0x21eb20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21eb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb24: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EB24u;
    SET_GPR_U32(ctx, 31, 0x21EB2Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EB24u, 0x21EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB2Cu;
label_21eb2c:
    // 0x21eb2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eb30: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x21eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x21eb34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21EB34u;
    SET_GPR_U32(ctx, 31, 0x21EB3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21EB34u, 0x21EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB3Cu;
label_21eb3c:
    // 0x21eb3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21eb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21eb40: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EB40u;
    SET_GPR_U32(ctx, 31, 0x21EB48u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EB40u, 0x21EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB48u;
label_21eb48:
    // 0x21eb48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21eb48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb4c: 0x3c033f50  lui         $v1, 0x3F50
    ctx->pc = 0x21eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
    // 0x21eb50: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x21eb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25165);
    // 0x21eb54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21eb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21eb58: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x21eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
    // 0x21eb5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21eb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21eb60: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x21eb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
    // 0x21eb64: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x21eb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21eb68: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EB68u;
    SET_GPR_U32(ctx, 31, 0x21EB70u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EB68u, 0x21EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB70u;
label_21eb70:
    // 0x21eb70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21eb70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb74: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x21eb74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21eb78: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EB78u;
    SET_GPR_U32(ctx, 31, 0x21EB80u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EB78u, 0x21EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB80u;
label_21eb80:
    // 0x21eb80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eb84: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x21eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    ctx->pc = 0x21eb88u;
}
