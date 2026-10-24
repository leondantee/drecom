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

// Function: entry_0026d828
// Address: 0x26d828 - 0x26d888
void entry_0026d828_0x26d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d828_0x26d828");
#endif

    switch (ctx->pc) {
        case 0x26d838u: goto label_26d838;
        case 0x26d844u: goto label_26d844;
        case 0x26d858u: goto label_26d858;
        case 0x26d864u: goto label_26d864;
        default: break;
    }

    ctx->pc = 0x26d828u;

    // 0x26d828: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d830: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26D830u;
    SET_GPR_U32(ctx, 31, 0x26D838u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26D830u, 0x26D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D838u;
label_26d838:
    // 0x26d838: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d83c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26D83Cu;
    SET_GPR_U32(ctx, 31, 0x26D844u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26D83Cu, 0x26D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D844u;
label_26d844:
    // 0x26d844: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d848: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d84c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d850: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26D850u;
    SET_GPR_U32(ctx, 31, 0x26D858u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26D850u, 0x26D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D858u;
label_26d858:
    // 0x26d858: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26d858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d85c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26D85Cu;
    SET_GPR_U32(ctx, 31, 0x26D864u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26D85Cu, 0x26D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D864u;
label_26d864:
    // 0x26d864: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d868: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d86c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d870: 0x0  nop
    ctx->pc = 0x26d870u;
    // NOP
    // 0x26d874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d87c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26D87Cu;
    {
        const bool branch_taken_0x26d87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d87c) {
            ctx->pc = 0x26D888u;
            return;
        }
    }
    ctx->pc = 0x26D884u;
    // 0x26d884: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x26d884u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26d888u;
}
