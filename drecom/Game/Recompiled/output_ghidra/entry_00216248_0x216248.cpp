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

// Function: entry_00216248
// Address: 0x216248 - 0x216250
void entry_00216248_0x216248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216248_0x216248");
#endif

    ctx->pc = 0x216248u;

    // 0x216248: 0xc085814  jal         func_216050
    ctx->pc = 0x216248u;
    SET_GPR_U32(ctx, 31, 0x216250u);
    ctx->pc = 0x216050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216050u, 0x216248u, 0x216250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216250u;
}
