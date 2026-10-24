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

// Function: entry_001a1c60
// Address: 0x1a1c60 - 0x1a1c88
void entry_001a1c60_0x1a1c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c60_0x1a1c60");
#endif

    ctx->pc = 0x1a1c60u;

    // 0x1a1c60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c64: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a1c68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1C68u;
    {
        const bool branch_taken_0x1a1c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c68) {
            ctx->pc = 0x1A1CA0u;
            return;
        }
    }
    ctx->pc = 0x1A1C70u;
    // 0x1a1c70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a1c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1c7c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1a1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1a1c80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C80u;
    {
        const bool branch_taken_0x1a1c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c80) {
            ctx->pc = 0x1A1CA0u;
            return;
        }
    }
    ctx->pc = 0x1A1C88u;
}
