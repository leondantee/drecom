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

// Function: entry_001a26f0
// Address: 0x1a26f0 - 0x1a2708
void entry_001a26f0_0x1a26f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26f0_0x1a26f0");
#endif

    ctx->pc = 0x1a26f0u;

    // 0x1a26f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26f4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a26f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a26fc: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1a26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1a2700: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1A2700u;
    {
        const bool branch_taken_0x1a2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2700) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A2708u;
}
