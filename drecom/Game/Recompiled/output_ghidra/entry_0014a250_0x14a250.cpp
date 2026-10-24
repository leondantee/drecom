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

// Function: entry_0014a250
// Address: 0x14a250 - 0x14a270
void entry_0014a250_0x14a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a250_0x14a250");
#endif

    ctx->pc = 0x14a250u;

    // 0x14a250: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a254: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a258: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a25c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x14a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x14a260: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14a260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14a264: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a268: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A268u;
    SET_GPR_U32(ctx, 31, 0x14A270u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A268u, 0x14A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A270u;
}
