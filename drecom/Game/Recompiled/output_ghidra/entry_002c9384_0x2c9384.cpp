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

// Function: entry_002c9384
// Address: 0x2c9384 - 0x2c9398
void entry_002c9384_0x2c9384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9384_0x2c9384");
#endif

    switch (ctx->pc) {
        case 0x2c938cu: goto label_2c938c;
        default: break;
    }

    ctx->pc = 0x2c9384u;

label_2c9384:
    // 0x2c9384: 0xc0c4c74  jal         func_3131D0
    ctx->pc = 0x2C9384u;
    SET_GPR_U32(ctx, 31, 0x2C938Cu);
    ctx->pc = 0x3131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3131D0u, 0x2C9384u, 0x2C938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C938Cu;
label_2c938c:
    // 0x2c938c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c938cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c9390: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2C9390u;
    {
        const bool branch_taken_0x2c9390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9390) {
            ctx->pc = 0x2C9384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9384;
        }
    }
    ctx->pc = 0x2C9398u;
}
