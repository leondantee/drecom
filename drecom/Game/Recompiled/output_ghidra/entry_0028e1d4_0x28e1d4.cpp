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

// Function: entry_0028e1d4
// Address: 0x28e1d4 - 0x28e1e8
void entry_0028e1d4_0x28e1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e1d4_0x28e1d4");
#endif

    ctx->pc = 0x28e1d4u;

    // 0x28e1d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e1d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28e1dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e1dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1e0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E1E0u;
    SET_GPR_U32(ctx, 31, 0x28E1E8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E1E0u, 0x28E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1E8u;
}
