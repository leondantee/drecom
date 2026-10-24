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

// Function: entry_001d99dc
// Address: 0x1d99dc - 0x1d99f4
void entry_001d99dc_0x1d99dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d99dc_0x1d99dc");
#endif

    ctx->pc = 0x1d99dcu;

    // 0x1d99dc: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d99e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d99e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D99E4u;
    {
        const bool branch_taken_0x1d99e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99e4) {
            ctx->pc = 0x1D99F4u;
            return;
        }
    }
    ctx->pc = 0x1D99ECu;
    // 0x1d99ec: 0xc0ddf70  jal         func_377DC0
    ctx->pc = 0x1D99ECu;
    SET_GPR_U32(ctx, 31, 0x1D99F4u);
    ctx->pc = 0x377DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377DC0u, 0x1D99ECu, 0x1D99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99F4u;
}
