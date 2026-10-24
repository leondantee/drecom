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

// Function: entry_0033e9b8
// Address: 0x33e9b8 - 0x33e9f0
void entry_0033e9b8_0x33e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e9b8_0x33e9b8");
#endif

    switch (ctx->pc) {
        case 0x33e9c8u: goto label_33e9c8;
        case 0x33e9dcu: goto label_33e9dc;
        default: break;
    }

    ctx->pc = 0x33e9b8u;

    // 0x33e9b8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33e9b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33e9bc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x33e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e9c0: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x33E9C0u;
    SET_GPR_U32(ctx, 31, 0x33E9C8u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x33E9C0u, 0x33E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9C8u;
label_33e9c8:
    // 0x33e9c8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33e9c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33e9cc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x33e9ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33e9d0: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x33e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e9d4: 0xc067808  jal         func_19E020
    ctx->pc = 0x33E9D4u;
    SET_GPR_U32(ctx, 31, 0x33E9DCu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x33E9D4u, 0x33E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9DCu;
label_33e9dc:
    // 0x33e9dc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33e9dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33e9e0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x33e9e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33e9e4: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x33e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e9e8: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x33E9E8u;
    SET_GPR_U32(ctx, 31, 0x33E9F0u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x33E9E8u, 0x33E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9F0u;
}
