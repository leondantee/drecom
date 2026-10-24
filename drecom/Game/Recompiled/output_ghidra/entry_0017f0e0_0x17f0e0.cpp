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

// Function: entry_0017f0e0
// Address: 0x17f0e0 - 0x17f0f8
void entry_0017f0e0_0x17f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0e0_0x17f0e0");
#endif

    ctx->pc = 0x17f0e0u;

    // 0x17f0e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f0e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x17f0e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f0e8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x17f0e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f0ec: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x17f0ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f0f0: 0xc05f8d4  jal         func_17E350
    ctx->pc = 0x17F0F0u;
    SET_GPR_U32(ctx, 31, 0x17F0F8u);
    ctx->pc = 0x17E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E350u, 0x17F0F0u, 0x17F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0F8u;
}
