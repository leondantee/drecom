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

// Function: caseD_0
// Address: 0x33bbc0 - 0x33bbe4
void caseD_0_0x33bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x33bbc0");
#endif

    switch (ctx->pc) {
        case 0x33bbccu: goto label_33bbcc;
        default: break;
    }

    ctx->pc = 0x33bbc0u;

    // 0x33bbc0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33bbc4: 0xc0cf198  jal         func_33C660
    ctx->pc = 0x33BBC4u;
    SET_GPR_U32(ctx, 31, 0x33BBCCu);
    ctx->pc = 0x33C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C660u, 0x33BBC4u, 0x33BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBCCu;
label_33bbcc:
    // 0x33bbcc: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x33bbccu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33bbd0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BBD0u;
    {
        const bool branch_taken_0x33bbd0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbd0) {
            ctx->pc = 0x33BBE4u;
            return;
        }
    }
    ctx->pc = 0x33BBD8u;
    // 0x33bbd8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33bbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33bbdc: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x33BBDCu;
    {
        const bool branch_taken_0x33bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbdc) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BBE4u;
}
