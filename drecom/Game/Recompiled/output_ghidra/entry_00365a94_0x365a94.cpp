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

// Function: entry_00365a94
// Address: 0x365a94 - 0x365ac4
void entry_00365a94_0x365a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365a94_0x365a94");
#endif

    switch (ctx->pc) {
        case 0x365ab4u: goto label_365ab4;
        default: break;
    }

    ctx->pc = 0x365a94u;

    // 0x365a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x365aa0: 0x24061e01  addiu       $a2, $zero, 0x1E01
    ctx->pc = 0x365aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x365aa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365aa8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365aac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365AACu;
    SET_GPR_U32(ctx, 31, 0x365AB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365AACu, 0x365AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AB4u;
label_365ab4:
    // 0x365ab4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ab8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365ac0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x365ac4u;
}
