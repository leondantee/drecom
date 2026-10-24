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

// Function: entry_0015afd4
// Address: 0x15afd4 - 0x15afe0
void entry_0015afd4_0x15afd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015afd4_0x15afd4");
#endif

    ctx->pc = 0x15afd4u;

    // 0x15afd4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15afd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15afd8: 0xc05c04c  jal         func_170130
    ctx->pc = 0x15AFD8u;
    SET_GPR_U32(ctx, 31, 0x15AFE0u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x15AFD8u, 0x15AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFE0u;
}
