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

// Function: entry_00303484
// Address: 0x303484 - 0x3034a4
void entry_00303484_0x303484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303484_0x303484");
#endif

    ctx->pc = 0x303484u;

    // 0x303484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30348c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30348cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303490: 0x24061407  addiu       $a2, $zero, 0x1407
    ctx->pc = 0x303490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5127));
    // 0x303494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30349c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30349Cu;
    SET_GPR_U32(ctx, 31, 0x3034A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30349Cu, 0x3034A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034A4u;
}
