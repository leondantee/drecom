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
// Address: 0x2de7e0 - 0x2de810
void caseD_6_0x2de7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2de7e0");
#endif

    switch (ctx->pc) {
        case 0x2de800u: goto label_2de800;
        default: break;
    }

    ctx->pc = 0x2de7e0u;

    // 0x2de7e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de7e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de7e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2de7ec: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2de7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2de7f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de7f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2de7f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DE7F8u;
    SET_GPR_U32(ctx, 31, 0x2DE800u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE7F8u, 0x2DE800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE800u;
label_2de800:
    // 0x2de800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de804: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2de808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de80c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de80cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2de810u;
}
