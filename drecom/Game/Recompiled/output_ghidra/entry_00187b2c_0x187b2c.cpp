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

// Function: entry_00187b2c
// Address: 0x187b2c - 0x187b44
void entry_00187b2c_0x187b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b2c_0x187b2c");
#endif

    ctx->pc = 0x187b2cu;

    // 0x187b2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x187b30: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187B30u;
    {
        const bool branch_taken_0x187b30 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x187b30) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187B38u;
    // 0x187b38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x187b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x187b3c: 0xc061f34  jal         func_187CD0
    ctx->pc = 0x187B3Cu;
    SET_GPR_U32(ctx, 31, 0x187B44u);
    ctx->pc = 0x187CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187CD0u, 0x187B3Cu, 0x187B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B44u;
}
