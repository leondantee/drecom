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
// Address: 0x19a1fc - 0x19a234
void caseD_4_0x19a1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x19a1fc");
#endif

    switch (ctx->pc) {
        case 0x19a21cu: goto label_19a21c;
        default: break;
    }

    ctx->pc = 0x19a1fcu;

    // 0x19a1fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a204: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19a208: 0x24061e15  addiu       $a2, $zero, 0x1E15
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7701));
    // 0x19a20c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a210: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19a214: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19A214u;
    SET_GPR_U32(ctx, 31, 0x19A21Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A214u, 0x19A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A21Cu;
label_19a21c:
    // 0x19a21c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a220: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19a224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a228: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a22c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19A22Cu;
    {
        const bool branch_taken_0x19a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a22c) {
            ctx->pc = 0x19A284u;
            return;
        }
    }
    ctx->pc = 0x19A234u;
}
