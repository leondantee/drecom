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

// Function: entry_001b83bc
// Address: 0x1b83bc - 0x1b83c8
void entry_001b83bc_0x1b83bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b83bc_0x1b83bc");
#endif

    switch (ctx->pc) {
        case 0x1b83c4u: goto label_1b83c4;
        default: break;
    }

    ctx->pc = 0x1b83bcu;

    // 0x1b83bc: 0xc0c5244  jal         func_314910
    ctx->pc = 0x1B83BCu;
    SET_GPR_U32(ctx, 31, 0x1B83C4u);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1B83BCu, 0x1B83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83C4u;
label_1b83c4:
    // 0x1b83c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b83c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b83c8u;
}
