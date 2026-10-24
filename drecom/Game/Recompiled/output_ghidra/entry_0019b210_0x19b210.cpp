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

// Function: entry_0019b210
// Address: 0x19b210 - 0x19b230
void entry_0019b210_0x19b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b210_0x19b210");
#endif

    ctx->pc = 0x19b210u;

    // 0x19b210: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b214: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b218: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b21c: 0x24061e10  addiu       $a2, $zero, 0x1E10
    ctx->pc = 0x19b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7696));
    // 0x19b220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b224: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b228: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B228u;
    SET_GPR_U32(ctx, 31, 0x19B230u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B228u, 0x19B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B230u;
}
