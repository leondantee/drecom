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

// Function: entry_00183770
// Address: 0x183770 - 0x18377c
void entry_00183770_0x183770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183770_0x183770");
#endif

    switch (ctx->pc) {
        case 0x183778u: goto label_183778;
        default: break;
    }

    ctx->pc = 0x183770u;

    // 0x183770: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x183770u;
    SET_GPR_U32(ctx, 31, 0x183778u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x183770u, 0x183778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183778u;
label_183778:
    // 0x183778: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x18377cu;
}
