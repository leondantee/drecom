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

// Function: entry_001bc538
// Address: 0x1bc538 - 0x1bc54c
void entry_001bc538_0x1bc538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc538_0x1bc538");
#endif

    switch (ctx->pc) {
        case 0x1bc540u: goto label_1bc540;
        default: break;
    }

    ctx->pc = 0x1bc538u;

    // 0x1bc538: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BC538u;
    SET_GPR_U32(ctx, 31, 0x1BC540u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC538u, 0x1BC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC540u;
label_1bc540:
    // 0x1bc540: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bc540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc544: 0x100002f9  b           . + 4 + (0x2F9 << 2)
    ctx->pc = 0x1BC544u;
    {
        const bool branch_taken_0x1bc544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc544) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC54Cu;
}
