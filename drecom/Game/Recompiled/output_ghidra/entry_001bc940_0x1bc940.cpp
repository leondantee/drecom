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

// Function: entry_001bc940
// Address: 0x1bc940 - 0x1bc954
void entry_001bc940_0x1bc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc940_0x1bc940");
#endif

    switch (ctx->pc) {
        case 0x1bc948u: goto label_1bc948;
        default: break;
    }

    ctx->pc = 0x1bc940u;

    // 0x1bc940: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BC940u;
    SET_GPR_U32(ctx, 31, 0x1BC948u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC940u, 0x1BC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC948u;
label_1bc948:
    // 0x1bc948: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc948u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc94c: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1BC94Cu;
    {
        const bool branch_taken_0x1bc94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc94c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC954u;
}
