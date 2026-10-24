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

// Function: entry_0014ef8c
// Address: 0x14ef8c - 0x14ef98
void entry_0014ef8c_0x14ef8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ef8c_0x14ef8c");
#endif

    ctx->pc = 0x14ef8cu;

    // 0x14ef8c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14ef90: 0xc0c5360  jal         func_314D80
    ctx->pc = 0x14EF90u;
    SET_GPR_U32(ctx, 31, 0x14EF98u);
    ctx->pc = 0x314D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314D80u, 0x14EF90u, 0x14EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF98u;
}
