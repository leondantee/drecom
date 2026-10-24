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
// Address: 0x14ace0 - 0x14ad10
void caseD_4_0x14ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14ace0");
#endif

    switch (ctx->pc) {
        case 0x14ad00u: goto label_14ad00;
        default: break;
    }

    ctx->pc = 0x14ace0u;

    // 0x14ace0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ace4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ace8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14acec: 0x24060a1b  addiu       $a2, $zero, 0xA1B
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2587));
    // 0x14acf0: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14acf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14acf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14acf8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14ACF8u;
    SET_GPR_U32(ctx, 31, 0x14AD00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14ACF8u, 0x14AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD00u;
label_14ad00:
    // 0x14ad00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad04: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ad04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ad08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ad0c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14ad10u;
}
