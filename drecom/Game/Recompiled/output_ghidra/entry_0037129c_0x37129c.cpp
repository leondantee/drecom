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

// Function: entry_0037129c
// Address: 0x37129c - 0x3712ac
void entry_0037129c_0x37129c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037129c_0x37129c");
#endif

    switch (ctx->pc) {
        case 0x3712a4u: goto label_3712a4;
        default: break;
    }

    ctx->pc = 0x37129cu;

    // 0x37129c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37129Cu;
    SET_GPR_U32(ctx, 31, 0x3712A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37129Cu, 0x3712A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712A4u;
label_3712a4:
    // 0x3712a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3712a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3712a8: 0x0  nop
    ctx->pc = 0x3712a8u;
    // NOP
    ctx->pc = 0x3712acu;
}
