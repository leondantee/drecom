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

// Function: entry_0027f6d0
// Address: 0x27f6d0 - 0x27f708
void entry_0027f6d0_0x27f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f6d0_0x27f6d0");
#endif

    switch (ctx->pc) {
        case 0x27f6e4u: goto label_27f6e4;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f704u: goto label_27f704;
        default: break;
    }

    ctx->pc = 0x27f6d0u;

    // 0x27f6d0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f6d4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f6d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f6d8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f6dc: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F6DCu;
    SET_GPR_U32(ctx, 31, 0x27F6E4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F6DCu, 0x27F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6E4u;
label_27f6e4:
    // 0x27f6e4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27f6e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f6e8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27f6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f6ec: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f6f0: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F6F0u;
    SET_GPR_U32(ctx, 31, 0x27F6F8u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F6F0u, 0x27F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6F8u;
label_27f6f8:
    // 0x27f6f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f6fc: 0xc084964  jal         func_212590
    ctx->pc = 0x27F6FCu;
    SET_GPR_U32(ctx, 31, 0x27F704u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F6FCu, 0x27F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F704u;
label_27f704:
    // 0x27f704: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27f708u;
}
