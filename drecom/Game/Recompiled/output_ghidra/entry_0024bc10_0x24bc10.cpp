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

// Function: entry_0024bc10
// Address: 0x24bc10 - 0x24bc1c
void entry_0024bc10_0x24bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024bc10_0x24bc10");
#endif

    switch (ctx->pc) {
        case 0x24bc18u: goto label_24bc18;
        default: break;
    }

    ctx->pc = 0x24bc10u;

    // 0x24bc10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BC10u;
    SET_GPR_U32(ctx, 31, 0x24BC18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BC10u, 0x24BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC18u;
label_24bc18:
    // 0x24bc18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bc18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24bc1cu;
}
