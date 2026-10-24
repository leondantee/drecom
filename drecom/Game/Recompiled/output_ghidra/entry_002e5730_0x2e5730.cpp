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

// Function: entry_002e5730
// Address: 0x2e5730 - 0x2e5760
void entry_002e5730_0x2e5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5730_0x2e5730");
#endif

    switch (ctx->pc) {
        case 0x2e5750u: goto label_2e5750;
        default: break;
    }

    ctx->pc = 0x2e5730u;

    // 0x2e5730: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5734: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5738: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e573c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e573cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e5740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5748u;
    SET_GPR_U32(ctx, 31, 0x2E5750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5748u, 0x2E5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5750u;
label_2e5750:
    // 0x2e5750: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5754: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e575c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e575cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e5760u;
}
