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

// Function: entry_0027045c
// Address: 0x27045c - 0x270468
void entry_0027045c_0x27045c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027045c_0x27045c");
#endif

    switch (ctx->pc) {
        case 0x270464u: goto label_270464;
        default: break;
    }

    ctx->pc = 0x27045cu;

    // 0x27045c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x27045Cu;
    SET_GPR_U32(ctx, 31, 0x270464u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x27045Cu, 0x270464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270464u;
label_270464:
    // 0x270464: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x270468u;
}
