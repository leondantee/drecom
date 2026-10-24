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

// Function: entry_00115978
// Address: 0x115978 - 0x11598c
void entry_00115978_0x115978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115978_0x115978");
#endif

    switch (ctx->pc) {
        case 0x115980u: goto label_115980;
        default: break;
    }

    ctx->pc = 0x115978u;

    // 0x115978: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115978u;
    SET_GPR_U32(ctx, 31, 0x115980u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115978u, 0x115980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115980u;
label_115980:
    // 0x115980: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x115984: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x115988: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11598cu;
}
