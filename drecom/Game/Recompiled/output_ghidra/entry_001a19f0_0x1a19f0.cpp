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

// Function: entry_001a19f0
// Address: 0x1a19f0 - 0x1a1a18
void entry_001a19f0_0x1a19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a19f0_0x1a19f0");
#endif

    ctx->pc = 0x1a19f0u;

    // 0x1a19f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a19f4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a19f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A19F8u;
    {
        const bool branch_taken_0x1a19f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19f8) {
            ctx->pc = 0x1A1A40u;
            return;
        }
    }
    ctx->pc = 0x1A1A00u;
    // 0x1a1a00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1a04: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a1a08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1a0c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1a1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1a1a10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1A10u;
    {
        const bool branch_taken_0x1a1a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a10) {
            ctx->pc = 0x1A1A40u;
            return;
        }
    }
    ctx->pc = 0x1A1A18u;
}
