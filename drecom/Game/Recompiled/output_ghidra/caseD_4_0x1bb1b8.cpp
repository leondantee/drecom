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
// Address: 0x1bb1b8 - 0x1bb1fc
void caseD_4_0x1bb1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1bb1b8");
#endif

    switch (ctx->pc) {
        case 0x1bb1ecu: goto label_1bb1ec;
        default: break;
    }

    ctx->pc = 0x1bb1b8u;

    // 0x1bb1b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bb1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb1bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb1c0: 0xa06510a8  sb          $a1, 0x10A8($v1)
    ctx->pc = 0x1bb1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bb1c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb1c8: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1bb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x1bb1cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb1d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bb1d8: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1bb1dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb1e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bb1e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BB1E4u;
    SET_GPR_U32(ctx, 31, 0x1BB1ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB1E4u, 0x1BB1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1ECu;
label_1bb1ec:
    // 0x1bb1ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb1f0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1bb1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bb1f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb1f8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bb1fcu;
}
