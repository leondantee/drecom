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

// Function: entry_00166c28
// Address: 0x166c28 - 0x166c30
void entry_00166c28_0x166c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166c28_0x166c28");
#endif

    ctx->pc = 0x166c28u;

    // 0x166c28: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x166C28u;
    SET_GPR_U32(ctx, 31, 0x166C30u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x166C28u, 0x166C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C30u;
}
