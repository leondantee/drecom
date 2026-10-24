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

// Function: entry_0012a7e0
// Address: 0x12a7e0 - 0x12a7ec
void entry_0012a7e0_0x12a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a7e0_0x12a7e0");
#endif

    ctx->pc = 0x12a7e0u;

    // 0x12a7e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7e4: 0xc049770  jal         func_125DC0
    ctx->pc = 0x12A7E4u;
    SET_GPR_U32(ctx, 31, 0x12A7ECu);
    ctx->pc = 0x125DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125DC0u, 0x12A7E4u, 0x12A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7ECu;
}
