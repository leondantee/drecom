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

// Function: entry_00107f4c
// Address: 0x107f4c - 0x107f54
void entry_00107f4c_0x107f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f4c_0x107f4c");
#endif

    ctx->pc = 0x107f4cu;

    // 0x107f4c: 0xc042234  jal         func_1088D0
    ctx->pc = 0x107F4Cu;
    SET_GPR_U32(ctx, 31, 0x107F54u);
    ctx->pc = 0x107F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F4Cu;
    // 0x107f50: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D0u, 0x107F4Cu, 0x107F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F54u;
}
