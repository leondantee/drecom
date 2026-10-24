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

// Function: entry_0018e390
// Address: 0x18e390 - 0x18e3b4
void entry_0018e390_0x18e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e390_0x18e390");
#endif

    switch (ctx->pc) {
        case 0x18e3a8u: goto label_18e3a8;
        default: break;
    }

    ctx->pc = 0x18e390u;

    // 0x18e390: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x18e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18e394: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E394u;
    {
        const bool branch_taken_0x18e394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e394) {
            ctx->pc = 0x18E3B4u;
            return;
        }
    }
    ctx->pc = 0x18E39Cu;
    // 0x18e39c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e39cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e3a0: 0xc063b4c  jal         func_18ED30
    ctx->pc = 0x18E3A0u;
    SET_GPR_U32(ctx, 31, 0x18E3A8u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E3A0u, 0x18E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3A8u;
label_18e3a8:
    // 0x18e3a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e3a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e3ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18E3ACu;
    {
        const bool branch_taken_0x18e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3ac) {
            ctx->pc = 0x18E420u;
            return;
        }
    }
    ctx->pc = 0x18E3B4u;
}
