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

// Function: caseD_5
// Address: 0x26c118 - 0x26c140
void caseD_5_0x26c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x26c118");
#endif

    switch (ctx->pc) {
        case 0x26c138u: goto label_26c138;
        default: break;
    }

    ctx->pc = 0x26c118u;

    // 0x26c118: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c11c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c120: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c124: 0x24060a74  addiu       $a2, $zero, 0xA74
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2676));
    // 0x26c128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c12c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c130: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C130u;
    SET_GPR_U32(ctx, 31, 0x26C138u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C130u, 0x26C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C138u;
label_26c138:
    // 0x26c138: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26C138u;
    {
        const bool branch_taken_0x26c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c138) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C140u;
}
