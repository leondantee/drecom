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

// Function: entry_002a925c
// Address: 0x2a925c - 0x2a9270
void entry_002a925c_0x2a925c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a925c_0x2a925c");
#endif

    ctx->pc = 0x2a925cu;

    // 0x2a925c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2a925cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2a9260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a9260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9264: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a9264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9268: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x2A9268u;
    SET_GPR_U32(ctx, 31, 0x2A9270u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x2A9268u, 0x2A9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9270u;
}
