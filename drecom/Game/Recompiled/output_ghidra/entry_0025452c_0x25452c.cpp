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

// Function: entry_0025452c
// Address: 0x25452c - 0x254538
void entry_0025452c_0x25452c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025452c_0x25452c");
#endif

    switch (ctx->pc) {
        case 0x254534u: goto label_254534;
        default: break;
    }

    ctx->pc = 0x25452cu;

    // 0x25452c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x25452Cu;
    SET_GPR_U32(ctx, 31, 0x254534u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x25452Cu, 0x254534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254534u;
label_254534:
    // 0x254534: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x254534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x254538u;
}
