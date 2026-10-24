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

// Function: entry_00301a98
// Address: 0x301a98 - 0x301ad0
void entry_00301a98_0x301a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301a98_0x301a98");
#endif

    switch (ctx->pc) {
        case 0x301ab8u: goto label_301ab8;
        default: break;
    }

    ctx->pc = 0x301a98u;

    // 0x301a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x301a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301a9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301aa0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x301aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x301aa4: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x301aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x301aa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x301aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301aac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x301aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x301ab0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x301AB0u;
    SET_GPR_U32(ctx, 31, 0x301AB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x301AB0u, 0x301AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AB8u;
label_301ab8:
    // 0x301ab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x301ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301abc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x301abcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x301ac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301ac4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x301ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x301ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301acc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x301accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x301ad0u;
}
