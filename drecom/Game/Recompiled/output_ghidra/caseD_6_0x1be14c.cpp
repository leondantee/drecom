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
// Address: 0x1be14c - 0x1be188
void caseD_6_0x1be14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1be14c");
#endif

    switch (ctx->pc) {
        case 0x1be170u: goto label_1be170;
        default: break;
    }

    ctx->pc = 0x1be14cu;

    // 0x1be14c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be150: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be154: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1be154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1be158: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1be158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1be15c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1be15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1be160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be164: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be168: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE168u;
    SET_GPR_U32(ctx, 31, 0x1BE170u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE168u, 0x1BE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE170u;
label_1be170:
    // 0x1be170: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be174: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1be174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1be178: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be17c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1be17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be180: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be184: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1be188u;
}
