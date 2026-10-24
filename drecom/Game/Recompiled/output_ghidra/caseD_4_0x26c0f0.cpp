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

// Function: caseD_4
// Address: 0x26c0f0 - 0x26c118
void caseD_4_0x26c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x26c0f0");
#endif

    switch (ctx->pc) {
        case 0x26c110u: goto label_26c110;
        default: break;
    }

    ctx->pc = 0x26c0f0u;

    // 0x26c0f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c0f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c0f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c0fc: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x26c0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x26c100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c104: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c108: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C108u;
    SET_GPR_U32(ctx, 31, 0x26C110u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C108u, 0x26C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C110u;
label_26c110:
    // 0x26c110: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26C110u;
    {
        const bool branch_taken_0x26c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c110) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C118u;
}
