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

// Function: entry_001d08fc
// Address: 0x1d08fc - 0x1d0910
void entry_001d08fc_0x1d08fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d08fc_0x1d08fc");
#endif

    switch (ctx->pc) {
        case 0x1d0904u: goto label_1d0904;
        default: break;
    }

    ctx->pc = 0x1d08fcu;

    // 0x1d08fc: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1D08FCu;
    SET_GPR_U32(ctx, 31, 0x1D0904u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1D08FCu, 0x1D0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0904u;
label_1d0904:
    // 0x1d0904: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d0904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d0908: 0x14a00045  bnez        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D0908u;
    {
        const bool branch_taken_0x1d0908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0908) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D0910u;
}
