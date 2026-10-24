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
// Address: 0x1b9d30 - 0x1b9d74
void caseD_4_0x1b9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1b9d30");
#endif

    switch (ctx->pc) {
        case 0x1b9d64u: goto label_1b9d64;
        default: break;
    }

    ctx->pc = 0x1b9d30u;

    // 0x1b9d30: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b9d34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d38: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b9d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9d3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d40: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1b9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1b9d44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d4c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b9d50: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1b9d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b9d54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9d58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b9d5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9D5Cu, 0x1B9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D64u;
label_1b9d64:
    // 0x1b9d64: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d68: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x1b9d68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1b9d6c: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x1b9d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b9d70: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x1b9d70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x1b9d74u;
}
