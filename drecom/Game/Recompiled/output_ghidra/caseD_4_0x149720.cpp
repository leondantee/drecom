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
// Address: 0x149720 - 0x149750
void caseD_4_0x149720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x149720");
#endif

    switch (ctx->pc) {
        case 0x149740u: goto label_149740;
        default: break;
    }

    ctx->pc = 0x149720u;

    // 0x149720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149724: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149728: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14972c: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x14972cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x149730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149734: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149738: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149738u;
    SET_GPR_U32(ctx, 31, 0x149740u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149738u, 0x149740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149740u;
label_149740:
    // 0x149740: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149744: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x149748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14974c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14974cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149750u;
}
