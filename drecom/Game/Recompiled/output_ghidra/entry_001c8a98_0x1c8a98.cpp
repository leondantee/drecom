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

// Function: entry_001c8a98
// Address: 0x1c8a98 - 0x1c8ab4
void entry_001c8a98_0x1c8a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a98_0x1c8a98");
#endif

    switch (ctx->pc) {
        case 0x1c8aa0u: goto label_1c8aa0;
        default: break;
    }

    ctx->pc = 0x1c8a98u;

    // 0x1c8a98: 0xc057e44  jal         func_15F910
    ctx->pc = 0x1C8A98u;
    SET_GPR_U32(ctx, 31, 0x1C8AA0u);
    ctx->pc = 0x15F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F910u, 0x1C8A98u, 0x1C8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AA0u;
label_1c8aa0:
    // 0x1c8aa0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8aa0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8aa4: 0x14600138  bnez        $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x1C8AA4u;
    {
        const bool branch_taken_0x1c8aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aa4) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C8AACu;
    // 0x1c8aac: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1C8AACu;
    {
        const bool branch_taken_0x1c8aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aac) {
            ctx->pc = 0x1C8EA4u;
            return;
        }
    }
    ctx->pc = 0x1C8AB4u;
}
