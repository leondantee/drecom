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

// Function: entry_002648c0
// Address: 0x2648c0 - 0x2648e0
void entry_002648c0_0x2648c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002648c0_0x2648c0");
#endif

    switch (ctx->pc) {
        case 0x2648d4u: goto label_2648d4;
        default: break;
    }

    ctx->pc = 0x2648c0u;

    // 0x2648c0: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x2648C0u;
    {
        const bool branch_taken_0x2648c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648c0) {
            ctx->pc = 0x264928u;
            return;
        }
    }
    ctx->pc = 0x2648C8u;
    // 0x2648c8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2648c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2648cc: 0xc07675c  jal         func_1D9D70
    ctx->pc = 0x2648CCu;
    SET_GPR_U32(ctx, 31, 0x2648D4u);
    ctx->pc = 0x1D9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D70u, 0x2648CCu, 0x2648D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648D4u;
label_2648d4:
    // 0x2648d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2648d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2648d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2648D8u;
    {
        const bool branch_taken_0x2648d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648d8) {
            ctx->pc = 0x264918u;
            return;
        }
    }
    ctx->pc = 0x2648E0u;
}
