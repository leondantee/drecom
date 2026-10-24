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

// Function: entry_0018e4dc
// Address: 0x18e4dc - 0x18e4e8
void entry_0018e4dc_0x18e4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e4dc_0x18e4dc");
#endif

    ctx->pc = 0x18e4dcu;

    // 0x18e4dc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e4dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x18e4e0: 0xc0c99d8  jal         func_326760
    ctx->pc = 0x18E4E0u;
    SET_GPR_U32(ctx, 31, 0x18E4E8u);
    ctx->pc = 0x326760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326760u, 0x18E4E0u, 0x18E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4E8u;
}
