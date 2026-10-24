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

// Function: entry_002542f0
// Address: 0x2542f0 - 0x2542fc
void entry_002542f0_0x2542f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002542f0_0x2542f0");
#endif

    switch (ctx->pc) {
        case 0x2542f8u: goto label_2542f8;
        default: break;
    }

    ctx->pc = 0x2542f0u;

    // 0x2542f0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2542F0u;
    SET_GPR_U32(ctx, 31, 0x2542F8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2542F0u, 0x2542F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542F8u;
label_2542f8:
    // 0x2542f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2542f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2542fcu;
}
