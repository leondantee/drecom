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

// Function: entry_00114ca8
// Address: 0x114ca8 - 0x114cb4
void entry_00114ca8_0x114ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ca8_0x114ca8");
#endif

    switch (ctx->pc) {
        case 0x114cb0u: goto label_114cb0;
        default: break;
    }

    ctx->pc = 0x114ca8u;

    // 0x114ca8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x114CA8u;
    SET_GPR_U32(ctx, 31, 0x114CB0u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x114CA8u, 0x114CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CB0u;
label_114cb0:
    // 0x114cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x114cb4u;
}
