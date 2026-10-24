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
// Address: 0x14a718 - 0x14a748
void caseD_4_0x14a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14a718");
#endif

    switch (ctx->pc) {
        case 0x14a738u: goto label_14a738;
        default: break;
    }

    ctx->pc = 0x14a718u;

    // 0x14a718: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a71c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a720: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a724: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a72c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a730: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A730u;
    SET_GPR_U32(ctx, 31, 0x14A738u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A730u, 0x14A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A738u;
label_14a738:
    // 0x14a738: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a73c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14a740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a744: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a748u;
}
