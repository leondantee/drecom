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
// Address: 0x26c04c - 0x26c074
void caseD_0_0x26c04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x26c04c");
#endif

    switch (ctx->pc) {
        case 0x26c06cu: goto label_26c06c;
        default: break;
    }

    ctx->pc = 0x26c04cu;

    // 0x26c04c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c058: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
    // 0x26c05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C064u;
    SET_GPR_U32(ctx, 31, 0x26C06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C064u, 0x26C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C06Cu;
label_26c06c:
    // 0x26c06c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x26C06Cu;
    {
        const bool branch_taken_0x26c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c06c) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C074u;
}
