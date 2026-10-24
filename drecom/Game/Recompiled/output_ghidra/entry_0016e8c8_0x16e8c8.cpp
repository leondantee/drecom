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

// Function: entry_0016e8c8
// Address: 0x16e8c8 - 0x16e8f4
void entry_0016e8c8_0x16e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e8c8_0x16e8c8");
#endif

    ctx->pc = 0x16e8c8u;

    // 0x16e8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e8cc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x16e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16e8d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E8D0u;
    {
        const bool branch_taken_0x16e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8d0) {
            ctx->pc = 0x16E8F4u;
            return;
        }
    }
    ctx->pc = 0x16E8D8u;
    // 0x16e8d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e8dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e8e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16e8e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e8e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x16e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x16e8ec: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x16E8ECu;
    {
        const bool branch_taken_0x16e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8ec) {
            ctx->pc = 0x16E848u;
            return;
        }
    }
    ctx->pc = 0x16E8F4u;
}
