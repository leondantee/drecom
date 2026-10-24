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
// Address: 0x2deb70 - 0x2debac
void caseD_0_0x2deb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2deb70");
#endif

    switch (ctx->pc) {
        case 0x2deb9cu: goto label_2deb9c;
        default: break;
    }

    ctx->pc = 0x2deb70u;

    // 0x2deb70: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2deb74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2deb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deb78: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2deb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2deb7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2deb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deb80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deb84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2deb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2deb88: 0x24060a2b  addiu       $a2, $zero, 0xA2B
    ctx->pc = 0x2deb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2603));
    // 0x2deb8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2deb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deb90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2deb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2deb94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DEB94u;
    SET_GPR_U32(ctx, 31, 0x2DEB9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEB94u, 0x2DEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB9Cu;
label_2deb9c:
    // 0x2deb9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deba0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2deba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2deba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2deba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2deba8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2deba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2debacu;
}
