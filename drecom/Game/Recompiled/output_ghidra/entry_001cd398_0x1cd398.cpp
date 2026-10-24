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

// Function: entry_001cd398
// Address: 0x1cd398 - 0x1cd3ac
void entry_001cd398_0x1cd398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd398_0x1cd398");
#endif

    switch (ctx->pc) {
        case 0x1cd3a0u: goto label_1cd3a0;
        default: break;
    }

    ctx->pc = 0x1cd398u;

    // 0x1cd398: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CD398u;
    SET_GPR_U32(ctx, 31, 0x1CD3A0u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CD398u, 0x1CD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3A0u;
label_1cd3a0:
    // 0x1cd3a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cd3a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd3a4: 0x146001f2  bnez        $v1, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD3ACu;
}
