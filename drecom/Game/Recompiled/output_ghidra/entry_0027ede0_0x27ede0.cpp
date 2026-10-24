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

// Function: entry_0027ede0
// Address: 0x27ede0 - 0x27edf4
void entry_0027ede0_0x27ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ede0_0x27ede0");
#endif

    ctx->pc = 0x27ede0u;

    // 0x27ede0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ede4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ede4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ede8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ede8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27edec: 0xc0ce188  jal         func_338620
    ctx->pc = 0x27EDECu;
    SET_GPR_U32(ctx, 31, 0x27EDF4u);
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x27EDECu, 0x27EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDF4u;
}
