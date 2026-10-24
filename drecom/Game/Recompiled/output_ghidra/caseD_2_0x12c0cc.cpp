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

// Function: caseD_2
// Address: 0x12c0cc - 0x12c0fc
void caseD_2_0x12c0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12c0cc");
#endif

    switch (ctx->pc) {
        case 0x12c0ecu: goto label_12c0ec;
        default: break;
    }

    ctx->pc = 0x12c0ccu;

    // 0x12c0cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c0d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c0d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12c0d8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x12c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c0dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c0e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12c0e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12C0E4u;
    SET_GPR_U32(ctx, 31, 0x12C0ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C0E4u, 0x12C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0ECu;
label_12c0ec:
    // 0x12c0ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c0f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12c0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12c0f4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x12c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c0f8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x12c0fcu;
}
