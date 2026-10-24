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

// Function: entry_0027967c
// Address: 0x27967c - 0x279688
void entry_0027967c_0x27967c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027967c_0x27967c");
#endif

    switch (ctx->pc) {
        case 0x279684u: goto label_279684;
        default: break;
    }

    ctx->pc = 0x27967cu;

    // 0x27967c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27967Cu;
    SET_GPR_U32(ctx, 31, 0x279684u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27967Cu, 0x279684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279684u;
label_279684:
    // 0x279684: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x279688u;
}
