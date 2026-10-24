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

// Function: entry_001ba980
// Address: 0x1ba980 - 0x1ba994
void entry_001ba980_0x1ba980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba980_0x1ba980");
#endif

    switch (ctx->pc) {
        case 0x1ba988u: goto label_1ba988;
        default: break;
    }

    ctx->pc = 0x1ba980u;

    // 0x1ba980: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BA980u;
    SET_GPR_U32(ctx, 31, 0x1BA988u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA980u, 0x1BA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA988u;
label_1ba988:
    // 0x1ba988: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba988u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba98c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1BA98Cu;
    {
        const bool branch_taken_0x1ba98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba98c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA994u;
}
