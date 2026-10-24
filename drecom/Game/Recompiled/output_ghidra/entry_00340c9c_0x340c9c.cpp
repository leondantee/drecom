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

// Function: entry_00340c9c
// Address: 0x340c9c - 0x340cb8
void entry_00340c9c_0x340c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340c9c_0x340c9c");
#endif

    ctx->pc = 0x340c9cu;

    // 0x340c9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ca0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x340ca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x340ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ca8: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x340ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x340cac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340cacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340cb0: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x340CB0u;
    SET_GPR_U32(ctx, 31, 0x340CB8u);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x340CB0u, 0x340CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340CB8u;
}
