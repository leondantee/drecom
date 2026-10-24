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

// Function: caseD_0
// Address: 0x1330e0 - 0x133110
void caseD_0_0x1330e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1330e0");
#endif

    switch (ctx->pc) {
        case 0x133100u: goto label_133100;
        default: break;
    }

    ctx->pc = 0x1330e0u;

    // 0x1330e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1330e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1330e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1330e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1330e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1330ec: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1330f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1330f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1330f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1330f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1330F8u;
    SET_GPR_U32(ctx, 31, 0x133100u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1330F8u, 0x133100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133100u;
label_133100:
    // 0x133100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133104: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13310c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13310cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133110u;
}
