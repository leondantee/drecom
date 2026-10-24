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

// Function: entry_001ce6fc
// Address: 0x1ce6fc - 0x1ce710
void entry_001ce6fc_0x1ce6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce6fc_0x1ce6fc");
#endif

    switch (ctx->pc) {
        case 0x1ce704u: goto label_1ce704;
        default: break;
    }

    ctx->pc = 0x1ce6fcu;

    // 0x1ce6fc: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CE6FCu;
    SET_GPR_U32(ctx, 31, 0x1CE704u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CE6FCu, 0x1CE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE704u;
label_1ce704:
    // 0x1ce704: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce708: 0x14800069  bnez        $a0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE710u;
}
