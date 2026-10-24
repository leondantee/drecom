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

// Function: entry_001ec840
// Address: 0x1ec840 - 0x1ec84c
void entry_001ec840_0x1ec840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec840_0x1ec840");
#endif

    switch (ctx->pc) {
        case 0x1ec848u: goto label_1ec848;
        default: break;
    }

    ctx->pc = 0x1ec840u;

    // 0x1ec840: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EC840u;
    SET_GPR_U32(ctx, 31, 0x1EC848u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EC840u, 0x1EC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC848u;
label_1ec848:
    // 0x1ec848: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ec848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1ec84cu;
}
