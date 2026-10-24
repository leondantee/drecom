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

// Function: entry_00363e24
// Address: 0x363e24 - 0x363e54
void entry_00363e24_0x363e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363e24_0x363e24");
#endif

    switch (ctx->pc) {
        case 0x363e44u: goto label_363e44;
        default: break;
    }

    ctx->pc = 0x363e24u;

    // 0x363e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x363e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x363e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x363e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x363e30: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x363e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x363e34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x363e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363e38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x363e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x363e3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x363E3Cu;
    SET_GPR_U32(ctx, 31, 0x363E44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x363E3Cu, 0x363E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E44u;
label_363e44:
    // 0x363e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e48: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x363e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x363e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x363e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x363e50: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x363e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x363e54u;
}
