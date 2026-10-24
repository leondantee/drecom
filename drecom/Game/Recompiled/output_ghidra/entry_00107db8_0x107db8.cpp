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

// Function: entry_00107db8
// Address: 0x107db8 - 0x107dc0
void entry_00107db8_0x107db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107db8_0x107db8");
#endif

    ctx->pc = 0x107db8u;

    // 0x107db8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107DB8u;
    SET_GPR_U32(ctx, 31, 0x107DC0u);
    ctx->pc = 0x107DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DB8u;
    // 0x107dbc: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107DB8u, 0x107DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DC0u;
}
