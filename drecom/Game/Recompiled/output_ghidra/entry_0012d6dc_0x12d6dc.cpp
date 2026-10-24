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

// Function: entry_0012d6dc
// Address: 0x12d6dc - 0x12d70c
void entry_0012d6dc_0x12d6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d6dc_0x12d6dc");
#endif

    switch (ctx->pc) {
        case 0x12d6fcu: goto label_12d6fc;
        default: break;
    }

    ctx->pc = 0x12d6dcu;

    // 0x12d6dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d6e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d6e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d6e8: 0x24060a04  addiu       $a2, $zero, 0xA04
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
    // 0x12d6ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d6f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d6f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D6F4u;
    SET_GPR_U32(ctx, 31, 0x12D6FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D6F4u, 0x12D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6FCu;
label_12d6fc:
    // 0x12d6fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d700: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d708: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12d70cu;
}
