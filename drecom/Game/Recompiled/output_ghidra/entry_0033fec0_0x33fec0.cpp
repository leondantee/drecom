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

// Function: entry_0033fec0
// Address: 0x33fec0 - 0x33fee8
void entry_0033fec0_0x33fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fec0_0x33fec0");
#endif

    switch (ctx->pc) {
        case 0x33fee4u: goto label_33fee4;
        default: break;
    }

    ctx->pc = 0x33fec0u;

    // 0x33fec0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fec4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x33fec4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33fec8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33fec8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fecc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33feccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fed0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33fed0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fed4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33fed4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fed8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x33fed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33fedc: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x33FEDCu;
    SET_GPR_U32(ctx, 31, 0x33FEE4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x33FEDCu, 0x33FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FEE4u;
label_33fee4:
    // 0x33fee4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33fee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x33fee8u;
}
