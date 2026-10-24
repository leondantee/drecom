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

// Function: entry_00328544
// Address: 0x328544 - 0x328550
void entry_00328544_0x328544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328544_0x328544");
#endif

    switch (ctx->pc) {
        case 0x32854cu: goto label_32854c;
        default: break;
    }

    ctx->pc = 0x328544u;

    // 0x328544: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x328544u;
    SET_GPR_U32(ctx, 31, 0x32854Cu);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x328544u, 0x32854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32854Cu;
label_32854c:
    // 0x32854c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x328550u;
}
