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
// Address: 0x1323bc - 0x1323ec
void caseD_6_0x1323bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1323bc");
#endif

    switch (ctx->pc) {
        case 0x1323dcu: goto label_1323dc;
        default: break;
    }

    ctx->pc = 0x1323bcu;

    // 0x1323bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1323bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1323c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1323c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1323c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1323c8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1323c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1323cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1323ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1323d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1323d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1323d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1323D4u;
    SET_GPR_U32(ctx, 31, 0x1323DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1323D4u, 0x1323DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323DCu;
label_1323dc:
    // 0x1323dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1323e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1323e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1323e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1323e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1323e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1323e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1323ecu;
}
