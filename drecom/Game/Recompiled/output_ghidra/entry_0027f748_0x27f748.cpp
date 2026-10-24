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

// Function: entry_0027f748
// Address: 0x27f748 - 0x27f780
void entry_0027f748_0x27f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f748_0x27f748");
#endif

    switch (ctx->pc) {
        case 0x27f75cu: goto label_27f75c;
        case 0x27f770u: goto label_27f770;
        case 0x27f77cu: goto label_27f77c;
        default: break;
    }

    ctx->pc = 0x27f748u;

    // 0x27f748: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f74c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f750: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f754: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F754u;
    SET_GPR_U32(ctx, 31, 0x27F75Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F754u, 0x27F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F75Cu;
label_27f75c:
    // 0x27f75c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27f75cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f760: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27f760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f764: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f768: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F768u;
    SET_GPR_U32(ctx, 31, 0x27F770u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F768u, 0x27F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F770u;
label_27f770:
    // 0x27f770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f774: 0xc084964  jal         func_212590
    ctx->pc = 0x27F774u;
    SET_GPR_U32(ctx, 31, 0x27F77Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F774u, 0x27F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F77Cu;
label_27f77c:
    // 0x27f77c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27f780u;
}
