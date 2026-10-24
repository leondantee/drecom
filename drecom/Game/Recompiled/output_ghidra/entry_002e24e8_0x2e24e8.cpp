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

// Function: entry_002e24e8
// Address: 0x2e24e8 - 0x2e24fc
void entry_002e24e8_0x2e24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e24e8_0x2e24e8");
#endif

    ctx->pc = 0x2e24e8u;

    // 0x2e24e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2e24e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2e24ec: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x2e24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2e24f0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2e24f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e24f4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E24F4u;
    {
        const bool branch_taken_0x2e24f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e24f4) {
            ctx->pc = 0x2E2470u;
            return;
        }
    }
    ctx->pc = 0x2E24FCu;
}
