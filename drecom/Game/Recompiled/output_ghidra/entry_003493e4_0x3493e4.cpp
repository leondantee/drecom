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

// Function: entry_003493e4
// Address: 0x3493e4 - 0x349410
void entry_003493e4_0x3493e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003493e4_0x3493e4");
#endif

    switch (ctx->pc) {
        case 0x349404u: goto label_349404;
        default: break;
    }

    ctx->pc = 0x3493e4u;

    // 0x3493e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493e8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3493e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3493ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3493f0: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x3493f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3493f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3493f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3493f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3493fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3493FCu;
    SET_GPR_U32(ctx, 31, 0x349404u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3493FCu, 0x349404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349404u;
label_349404:
    // 0x349404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349408: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34940c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x34940cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x349410u;
}
