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

// Function: entry_0017ef9c
// Address: 0x17ef9c - 0x17f050
void entry_0017ef9c_0x17ef9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef9c_0x17ef9c");
#endif

    switch (ctx->pc) {
        case 0x17efd0u: goto label_17efd0;
        case 0x17efe0u: goto label_17efe0;
        case 0x17eff0u: goto label_17eff0;
        case 0x17f014u: goto label_17f014;
        case 0x17f020u: goto label_17f020;
        case 0x17f02cu: goto label_17f02c;
        default: break;
    }

    ctx->pc = 0x17ef9cu;

    // 0x17ef9c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17efa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17efa4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x17efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17efa8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x17efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17efac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x17efacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x17efb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x17efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17efb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x17efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17efb8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x17efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17efbc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x17efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17efc0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x17efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x17efc4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17efc8: 0xc040044  jal         func_100110
    ctx->pc = 0x17EFC8u;
    SET_GPR_U32(ctx, 31, 0x17EFD0u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x17EFC8u, 0x17EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFD0u;
label_17efd0:
    // 0x17efd0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x17efd0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17efd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x17efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17efd8: 0xc040044  jal         func_100110
    ctx->pc = 0x17EFD8u;
    SET_GPR_U32(ctx, 31, 0x17EFE0u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x17EFD8u, 0x17EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFE0u;
label_17efe0:
    // 0x17efe0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17efe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17efe4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17efe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17efe8: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x17EFE8u;
    SET_GPR_U32(ctx, 31, 0x17EFF0u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x17EFE8u, 0x17EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFF0u;
label_17eff0:
    // 0x17eff0: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x17eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x17eff4: 0x3c023ff9  lui         $v0, 0x3FF9
    ctx->pc = 0x17eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16377 << 16));
    // 0x17eff8: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x17eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x17effc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17effcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17f000: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x17f000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x17f004: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17f004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17f008: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x17f008u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f00c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x17F00Cu;
    SET_GPR_U32(ctx, 31, 0x17F014u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x17F00Cu, 0x17F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F014u;
label_17f014:
    // 0x17f014: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17f014u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f018: 0xc0452f2  jal         func_114BC8
    ctx->pc = 0x17F018u;
    SET_GPR_U32(ctx, 31, 0x17F020u);
    ctx->pc = 0x114BC8u;
    {
        ctx->pc = 0x17F020u;
        ps2_stubs::sin(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F020u) { return; }
    ctx->pc = 0x17F020u;
label_17f020:
    // 0x17f020: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17f020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f024: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x17F024u;
    SET_GPR_U32(ctx, 31, 0x17F02Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x17F024u, 0x17F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F02Cu;
label_17f02c:
    // 0x17f02c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17f030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f034: 0x0  nop
    ctx->pc = 0x17f034u;
    // NOP
    // 0x17f038: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x17f038u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17f03c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17f040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f044: 0x0  nop
    ctx->pc = 0x17f044u;
    // NOP
    // 0x17f048: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17f048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17f04c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x17f050u;
}
