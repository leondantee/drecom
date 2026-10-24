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
// Address: 0x22a68c - 0x22a6c0
void caseD_4_0x22a68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x22a68c");
#endif

    switch (ctx->pc) {
        case 0x22a6b8u: goto label_22a6b8;
        default: break;
    }

    ctx->pc = 0x22a68cu;

    // 0x22a68c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22a690: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a694: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22a694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22a698: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a69c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a6a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22a6a4: 0x2406781a  addiu       $a2, $zero, 0x781A
    ctx->pc = 0x22a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30746));
    // 0x22a6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a6ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a6b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22A6B0u;
    SET_GPR_U32(ctx, 31, 0x22A6B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A6B0u, 0x22A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6B8u;
label_22a6b8:
    // 0x22a6b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a6bc: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x22a6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22a6c0u;
}
