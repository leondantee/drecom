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

// Function: entry_0027fd04
// Address: 0x27fd04 - 0x27fd40
void entry_0027fd04_0x27fd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027fd04_0x27fd04");
#endif

    switch (ctx->pc) {
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd38u: goto label_27fd38;
        default: break;
    }

    ctx->pc = 0x27fd04u;

    // 0x27fd04: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27fd04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27fd08: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27fd08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27fd0c: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd10: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FD10u;
    SET_GPR_U32(ctx, 31, 0x27FD18u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FD10u, 0x27FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD18u;
label_27fd18:
    // 0x27fd18: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27fd18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fd1c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27fd1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fd20: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd24: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FD24u;
    SET_GPR_U32(ctx, 31, 0x27FD2Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FD24u, 0x27FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD2Cu;
label_27fd2c:
    // 0x27fd2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fd30: 0xc084964  jal         func_212590
    ctx->pc = 0x27FD30u;
    SET_GPR_U32(ctx, 31, 0x27FD38u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FD30u, 0x27FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD38u;
label_27fd38:
    // 0x27fd38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27fd3c: 0x0  nop
    ctx->pc = 0x27fd3cu;
    // NOP
    ctx->pc = 0x27fd40u;
}
