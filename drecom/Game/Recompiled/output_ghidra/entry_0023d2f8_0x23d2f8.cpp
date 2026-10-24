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

// Function: entry_0023d2f8
// Address: 0x23d2f8 - 0x23d320
void entry_0023d2f8_0x23d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d2f8_0x23d2f8");
#endif

    ctx->pc = 0x23d2f8u;

    // 0x23d2f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2fc: 0x8444127c  lh          $a0, 0x127C($v0)
    ctx->pc = 0x23d2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23d300: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D300u;
    {
        const bool branch_taken_0x23d300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d300) {
            ctx->pc = 0x23D320u;
            return;
        }
    }
    ctx->pc = 0x23D308u;
    // 0x23d308: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d30c: 0x84a2127c  lh          $v0, 0x127C($a1)
    ctx->pc = 0x23d30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x23d310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d314: 0xa4a2127c  sh          $v0, 0x127C($a1)
    ctx->pc = 0x23d314u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d318: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D348u;
            return;
        }
    }
    ctx->pc = 0x23D320u;
}
