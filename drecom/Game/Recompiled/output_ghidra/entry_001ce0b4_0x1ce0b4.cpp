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

// Function: entry_001ce0b4
// Address: 0x1ce0b4 - 0x1ce0c8
void entry_001ce0b4_0x1ce0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce0b4_0x1ce0b4");
#endif

    switch (ctx->pc) {
        case 0x1ce0bcu: goto label_1ce0bc;
        default: break;
    }

    ctx->pc = 0x1ce0b4u;

    // 0x1ce0b4: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CE0B4u;
    SET_GPR_U32(ctx, 31, 0x1CE0BCu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CE0B4u, 0x1CE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0BCu;
label_1ce0bc:
    // 0x1ce0bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce0bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce0c0: 0x146001fb  bnez        $v1, . + 4 + (0x1FB << 2)
    ctx->pc = 0x1CE0C0u;
    {
        const bool branch_taken_0x1ce0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0c0) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE0C8u;
}
