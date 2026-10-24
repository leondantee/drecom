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

// Function: entry_00371024
// Address: 0x371024 - 0x371044
void entry_00371024_0x371024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371024_0x371024");
#endif

    ctx->pc = 0x371024u;

    // 0x371024: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371028: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37102c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x37102cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x371030: 0x24061e0c  addiu       $a2, $zero, 0x1E0C
    ctx->pc = 0x371030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7692));
    // 0x371034: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x371034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371038: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x37103c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x37103Cu;
    SET_GPR_U32(ctx, 31, 0x371044u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x37103Cu, 0x371044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371044u;
}
