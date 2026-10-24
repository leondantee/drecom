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

// Function: entry_00372c10
// Address: 0x372c10 - 0x372c20
void entry_00372c10_0x372c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372c10_0x372c10");
#endif

    switch (ctx->pc) {
        case 0x372c18u: goto label_372c18;
        default: break;
    }

    ctx->pc = 0x372c10u;

    // 0x372c10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x372C10u;
    SET_GPR_U32(ctx, 31, 0x372C18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x372C10u, 0x372C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C18u;
label_372c18:
    // 0x372c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372c1c: 0x0  nop
    ctx->pc = 0x372c1cu;
    // NOP
    ctx->pc = 0x372c20u;
}
