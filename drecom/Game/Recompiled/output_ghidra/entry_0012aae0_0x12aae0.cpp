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

// Function: entry_0012aae0
// Address: 0x12aae0 - 0x12ab00
void entry_0012aae0_0x12aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aae0_0x12aae0");
#endif

    ctx->pc = 0x12aae0u;

    // 0x12aae0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aae8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aaec: 0x24063c45  addiu       $a2, $zero, 0x3C45
    ctx->pc = 0x12aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15429));
    // 0x12aaf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aaf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12aaf8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AAF8u;
    SET_GPR_U32(ctx, 31, 0x12AB00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AAF8u, 0x12AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB00u;
}
