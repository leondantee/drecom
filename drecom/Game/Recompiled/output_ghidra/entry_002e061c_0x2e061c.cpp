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

// Function: entry_002e061c
// Address: 0x2e061c - 0x2e0644
void entry_002e061c_0x2e061c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e061c_0x2e061c");
#endif

    ctx->pc = 0x2e061cu;

    // 0x2e061c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0620: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2e0620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2e0624: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0624u;
    {
        const bool branch_taken_0x2e0624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0624) {
            ctx->pc = 0x2E0644u;
            return;
        }
    }
    ctx->pc = 0x2E062Cu;
    // 0x2e062c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0630: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e0634: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0638: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2e0638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e063c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E063Cu;
    {
        const bool branch_taken_0x2e063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e063c) {
            ctx->pc = 0x2E065Cu;
            return;
        }
    }
    ctx->pc = 0x2E0644u;
}
