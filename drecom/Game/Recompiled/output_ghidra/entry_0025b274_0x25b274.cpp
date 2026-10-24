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

// Function: entry_0025b274
// Address: 0x25b274 - 0x25b280
void entry_0025b274_0x25b274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b274_0x25b274");
#endif

    ctx->pc = 0x25b274u;

    // 0x25b274: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x25b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25b278: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x25B278u;
    SET_GPR_U32(ctx, 31, 0x25B280u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x25B278u, 0x25B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B280u;
}
