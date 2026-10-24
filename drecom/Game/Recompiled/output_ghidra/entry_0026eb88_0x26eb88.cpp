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

// Function: entry_0026eb88
// Address: 0x26eb88 - 0x26eba8
void entry_0026eb88_0x26eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026eb88_0x26eb88");
#endif

    ctx->pc = 0x26eb88u;

    // 0x26eb88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26eb94: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x26eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x26eb98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26eb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26eb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26eba0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EBA0u;
    SET_GPR_U32(ctx, 31, 0x26EBA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EBA0u, 0x26EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBA8u;
}
