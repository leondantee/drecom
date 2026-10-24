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

// Function: entry_0020c998
// Address: 0x20c998 - 0x20c9a8
void entry_0020c998_0x20c998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c998_0x20c998");
#endif

    ctx->pc = 0x20c998u;

    // 0x20c998: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c99c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c9a0: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C9A0u;
    SET_GPR_U32(ctx, 31, 0x20C9A8u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C9A0u, 0x20C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9A8u;
}
