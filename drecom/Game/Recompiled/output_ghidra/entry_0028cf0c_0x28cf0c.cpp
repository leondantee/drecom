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

// Function: entry_0028cf0c
// Address: 0x28cf0c - 0x28cf20
void entry_0028cf0c_0x28cf0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cf0c_0x28cf0c");
#endif

    switch (ctx->pc) {
        case 0x28cf18u: goto label_28cf18;
        default: break;
    }

    ctx->pc = 0x28cf0cu;

    // 0x28cf0c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28cf0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cf10: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x28CF10u;
    SET_GPR_U32(ctx, 31, 0x28CF18u);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x28CF10u, 0x28CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF18u;
label_28cf18:
    // 0x28cf18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28cf18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cf1c: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x28cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x28cf20u;
}
