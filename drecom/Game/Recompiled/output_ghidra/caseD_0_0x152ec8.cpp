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

// Function: caseD_0
// Address: 0x152ec8 - 0x152f28
void caseD_0_0x152ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x152ec8");
#endif

    switch (ctx->pc) {
        case 0x152ee4u: goto label_152ee4;
        case 0x152ef4u: goto label_152ef4;
        case 0x152f08u: goto label_152f08;
        case 0x152f20u: goto label_152f20;
        default: break;
    }

    ctx->pc = 0x152ec8u;

    // 0x152ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152ecc: 0x0  nop
    ctx->pc = 0x152eccu;
    // NOP
    // 0x152ed0: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x152ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
    // 0x152ed4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x152ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x152ed8: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x152ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152edc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x152EDCu;
    SET_GPR_U32(ctx, 31, 0x152EE4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x152EDCu, 0x152EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EE4u;
label_152ee4:
    // 0x152ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x152ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152ee8: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x152ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x152eec: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x152EECu;
    SET_GPR_U32(ctx, 31, 0x152EF4u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x152EECu, 0x152EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF4u;
label_152ef4:
    // 0x152ef4: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x152ef8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x152ef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x152efc: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x152efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152f00: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x152F00u;
    SET_GPR_U32(ctx, 31, 0x152F08u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x152F00u, 0x152F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F08u;
label_152f08:
    // 0x152f08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152f08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152f10: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x152f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x152f14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x152f14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x152f18: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x152F18u;
    SET_GPR_U32(ctx, 31, 0x152F20u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x152F18u, 0x152F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F20u;
label_152f20:
    // 0x152f20: 0x1000084a  b           . + 4 + (0x84A << 2)
    ctx->pc = 0x152F20u;
    {
        const bool branch_taken_0x152f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f20) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x152F28u;
}
