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

// Function: entry_00164e88
// Address: 0x164e88 - 0x164e90
void entry_00164e88_0x164e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e88_0x164e88");
#endif

    ctx->pc = 0x164e88u;

    // 0x164e88: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x164E88u;
    SET_GPR_U32(ctx, 31, 0x164E90u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x164E88u, 0x164E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E90u;
}
