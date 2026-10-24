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

// Function: entry_0036bb78
// Address: 0x36bb78 - 0x36bba8
void entry_0036bb78_0x36bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bb78_0x36bb78");
#endif

    switch (ctx->pc) {
        case 0x36bb98u: goto label_36bb98;
        default: break;
    }

    ctx->pc = 0x36bb78u;

    // 0x36bb78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36bb84: 0x24065a07  addiu       $a2, $zero, 0x5A07
    ctx->pc = 0x36bb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23047));
    // 0x36bb88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36bb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bb8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36bb90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36BB90u;
    SET_GPR_U32(ctx, 31, 0x36BB98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36BB90u, 0x36BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB98u;
label_36bb98:
    // 0x36bb98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bb9c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36bb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36bba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36bba4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36bba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36bba8u;
}
