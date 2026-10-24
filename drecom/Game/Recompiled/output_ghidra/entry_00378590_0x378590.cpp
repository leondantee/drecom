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

// Function: entry_00378590
// Address: 0x378590 - 0x3785a8
void entry_00378590_0x378590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378590_0x378590");
#endif

    switch (ctx->pc) {
        case 0x37859cu: goto label_37859c;
        default: break;
    }

    ctx->pc = 0x378590u;

    // 0x378590: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x378590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378594: 0xc067ed0  jal         func_19FB40
    ctx->pc = 0x378594u;
    SET_GPR_U32(ctx, 31, 0x37859Cu);
    ctx->pc = 0x19FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB40u, 0x378594u, 0x37859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37859Cu;
label_37859c:
    // 0x37859c: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37859Cu;
    {
        const bool branch_taken_0x37859c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37859c) {
            ctx->pc = 0x378584u;
            return;
        }
    }
    ctx->pc = 0x3785A4u;
    // 0x3785a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3785a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x3785a8u;
}
