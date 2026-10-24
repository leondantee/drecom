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
// Address: 0x155844 - 0x155868
void caseD_0_0x155844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x155844");
#endif

    switch (ctx->pc) {
        case 0x155858u: goto label_155858;
        default: break;
    }

    ctx->pc = 0x155844u;

    // 0x155844: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x155844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x155848: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x15584c: 0x8e061338  lw          $a2, 0x1338($s0)
    ctx->pc = 0x15584cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x155850: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x155850u;
    SET_GPR_U32(ctx, 31, 0x155858u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155850u, 0x155858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155858u;
label_155858:
    // 0x155858: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15585c: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x15585cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x155860: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x155860u;
    {
        const bool branch_taken_0x155860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155860) {
            ctx->pc = 0x155A40u;
            return;
        }
    }
    ctx->pc = 0x155868u;
}
