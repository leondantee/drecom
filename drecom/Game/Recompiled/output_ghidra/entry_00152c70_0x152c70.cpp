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

// Function: entry_00152c70
// Address: 0x152c70 - 0x152c7c
void entry_00152c70_0x152c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152c70_0x152c70");
#endif

    ctx->pc = 0x152c70u;

    // 0x152c70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x152c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x152c74: 0xc054568  jal         func_1515A0
    ctx->pc = 0x152C74u;
    SET_GPR_U32(ctx, 31, 0x152C7Cu);
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x152C74u, 0x152C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C7Cu;
}
