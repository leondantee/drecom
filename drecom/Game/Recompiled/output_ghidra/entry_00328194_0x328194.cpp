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

// Function: entry_00328194
// Address: 0x328194 - 0x3281a0
void entry_00328194_0x328194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328194_0x328194");
#endif

    switch (ctx->pc) {
        case 0x32819cu: goto label_32819c;
        default: break;
    }

    ctx->pc = 0x328194u;

    // 0x328194: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x328194u;
    SET_GPR_U32(ctx, 31, 0x32819Cu);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x328194u, 0x32819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32819Cu;
label_32819c:
    // 0x32819c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x3281a0u;
}
