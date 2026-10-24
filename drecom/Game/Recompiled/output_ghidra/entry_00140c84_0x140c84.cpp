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

// Function: entry_00140c84
// Address: 0x140c84 - 0x140c8c
void entry_00140c84_0x140c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c84_0x140c84");
#endif

    ctx->pc = 0x140c84u;

    // 0x140c84: 0xc05f838  jal         func_17E0E0
    ctx->pc = 0x140C84u;
    SET_GPR_U32(ctx, 31, 0x140C8Cu);
    ctx->pc = 0x17E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E0E0u, 0x140C84u, 0x140C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C8Cu;
}
