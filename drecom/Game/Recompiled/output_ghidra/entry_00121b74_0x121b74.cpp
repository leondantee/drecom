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

// Function: entry_00121b74
// Address: 0x121b74 - 0x121b90
void entry_00121b74_0x121b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121b74_0x121b74");
#endif

    switch (ctx->pc) {
        case 0x121b84u: goto label_121b84;
        default: break;
    }

    ctx->pc = 0x121b74u;

    // 0x121b74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b78: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121b78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121b7c: 0xc048044  jal         func_120110
    ctx->pc = 0x121B7Cu;
    SET_GPR_U32(ctx, 31, 0x121B84u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x121B7Cu, 0x121B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B84u;
label_121b84:
    // 0x121b84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x121b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121b88: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x121B88u;
    {
        const bool branch_taken_0x121b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b88) {
            ctx->pc = 0x121C48u;
            return;
        }
    }
    ctx->pc = 0x121B90u;
}
