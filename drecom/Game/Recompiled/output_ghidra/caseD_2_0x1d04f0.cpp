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
// Address: 0x1d04f0 - 0x1d0528
void caseD_2_0x1d04f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1d04f0");
#endif

    switch (ctx->pc) {
        case 0x1d0510u: goto label_1d0510;
        default: break;
    }

    ctx->pc = 0x1d04f0u;

    // 0x1d04f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d04f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d04f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1d04fc: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x1d04fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1d0500: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0504: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d0508: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1D0508u;
    SET_GPR_U32(ctx, 31, 0x1D0510u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D0508u, 0x1D0510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0510u;
label_1d0510:
    // 0x1d0510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0514: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1d0514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1d0518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d051c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d051cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0524: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d0528u;
}
