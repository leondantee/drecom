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

// Function: entry_001a1ea0
// Address: 0x1a1ea0 - 0x1a1eb0
void entry_001a1ea0_0x1a1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ea0_0x1a1ea0");
#endif

    switch (ctx->pc) {
        case 0x1a1eacu: goto label_1a1eac;
        default: break;
    }

    ctx->pc = 0x1a1ea0u;

    // 0x1a1ea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ea4: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1EA4u;
    SET_GPR_U32(ctx, 31, 0x1A1EACu);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1EA4u, 0x1A1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EACu;
label_1a1eac:
    // 0x1a1eac: 0x0  nop
    ctx->pc = 0x1a1eacu;
    // NOP
    ctx->pc = 0x1a1eb0u;
}
