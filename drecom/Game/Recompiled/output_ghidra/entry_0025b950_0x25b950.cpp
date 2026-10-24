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

// Function: entry_0025b950
// Address: 0x25b950 - 0x25b9b4
void entry_0025b950_0x25b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b950_0x25b950");
#endif

    switch (ctx->pc) {
        case 0x25b960u: goto label_25b960;
        case 0x25b974u: goto label_25b974;
        case 0x25b988u: goto label_25b988;
        case 0x25b9acu: goto label_25b9ac;
        default: break;
    }

    ctx->pc = 0x25b950u;

    // 0x25b950: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b954: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b958: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25B958u;
    SET_GPR_U32(ctx, 31, 0x25B960u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25B958u, 0x25B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B960u;
label_25b960:
    // 0x25b960: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b964: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b968: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b96c: 0xc067808  jal         func_19E020
    ctx->pc = 0x25B96Cu;
    SET_GPR_U32(ctx, 31, 0x25B974u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25B96Cu, 0x25B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B974u;
label_25b974:
    // 0x25b974: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b978: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b97c: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b980: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25B980u;
    SET_GPR_U32(ctx, 31, 0x25B988u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25B980u, 0x25B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B988u;
label_25b988:
    // 0x25b988: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25b988u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25b98c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b990: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25b990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25b994: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25b998: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b99c: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25b9a0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25b9a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b9a4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25B9A4u;
    SET_GPR_U32(ctx, 31, 0x25B9ACu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25B9A4u, 0x25B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9ACu;
label_25b9ac:
    // 0x25b9ac: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x25B9ACu;
    {
        const bool branch_taken_0x25b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b9ac) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25B9B4u;
}
