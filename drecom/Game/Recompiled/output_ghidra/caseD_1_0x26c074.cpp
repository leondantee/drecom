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

// Function: caseD_1
// Address: 0x26c074 - 0x26c09c
void caseD_1_0x26c074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x26c074");
#endif

    switch (ctx->pc) {
        case 0x26c094u: goto label_26c094;
        default: break;
    }

    ctx->pc = 0x26c074u;

    // 0x26c074: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c07c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c080: 0x24063c62  addiu       $a2, $zero, 0x3C62
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15458));
    // 0x26c084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c08c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C08Cu;
    SET_GPR_U32(ctx, 31, 0x26C094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C08Cu, 0x26C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C094u;
label_26c094:
    // 0x26c094: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x26C094u;
    {
        const bool branch_taken_0x26c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c094) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C09Cu;
}
