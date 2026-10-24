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

// Function: entry_00205be4
// Address: 0x205be4 - 0x205bf0
void entry_00205be4_0x205be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205be4_0x205be4");
#endif

    switch (ctx->pc) {
        case 0x205becu: goto label_205bec;
        default: break;
    }

    ctx->pc = 0x205be4u;

    // 0x205be4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x205BE4u;
    SET_GPR_U32(ctx, 31, 0x205BECu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x205BE4u, 0x205BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BECu;
label_205bec:
    // 0x205bec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x205bf0u;
}
