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

// Function: caseD_6
// Address: 0x12c58c - 0x12c5c8
void caseD_6_0x12c58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x12c58c");
#endif

    switch (ctx->pc) {
        case 0x12c5acu: goto label_12c5ac;
        default: break;
    }

    ctx->pc = 0x12c58cu;

    // 0x12c58c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c590: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c594: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x12c598: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12c59c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c5a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12c5a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12C5A4u;
    SET_GPR_U32(ctx, 31, 0x12C5ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C5A4u, 0x12C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5ACu;
label_12c5ac:
    // 0x12c5ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c5b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c5b4: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x12c5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x12c5b8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c5bc: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x12c5bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x12c5c0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12c5c4: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x12c5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x12c5c8u;
}
