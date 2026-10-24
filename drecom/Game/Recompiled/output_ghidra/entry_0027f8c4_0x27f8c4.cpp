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

// Function: entry_0027f8c4
// Address: 0x27f8c4 - 0x27f900
void entry_0027f8c4_0x27f8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f8c4_0x27f8c4");
#endif

    switch (ctx->pc) {
        case 0x27f8d8u: goto label_27f8d8;
        case 0x27f8ecu: goto label_27f8ec;
        case 0x27f8f8u: goto label_27f8f8;
        default: break;
    }

    ctx->pc = 0x27f8c4u;

    // 0x27f8c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f8c8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f8c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f8cc: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f8d0: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F8D0u;
    SET_GPR_U32(ctx, 31, 0x27F8D8u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F8D0u, 0x27F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8D8u;
label_27f8d8:
    // 0x27f8d8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27f8d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f8dc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27f8dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f8e0: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f8e4: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F8E4u;
    SET_GPR_U32(ctx, 31, 0x27F8ECu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F8E4u, 0x27F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8ECu;
label_27f8ec:
    // 0x27f8ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f8f0: 0xc084964  jal         func_212590
    ctx->pc = 0x27F8F0u;
    SET_GPR_U32(ctx, 31, 0x27F8F8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F8F0u, 0x27F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8F8u;
label_27f8f8:
    // 0x27f8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f8fc: 0x0  nop
    ctx->pc = 0x27f8fcu;
    // NOP
    ctx->pc = 0x27f900u;
}
