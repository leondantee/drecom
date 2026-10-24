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

// Function: entry_001b6518
// Address: 0x1b6518 - 0x1b6540
void entry_001b6518_0x1b6518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6518_0x1b6518");
#endif

    ctx->pc = 0x1b6518u;

    // 0x1b6518: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b651c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b651cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b6520: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x1B6520u;
    {
        const bool branch_taken_0x1b6520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6520) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6528u;
    // 0x1b6528: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b652c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b652cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b6530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6534: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b6534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6538: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x1B6538u;
    {
        const bool branch_taken_0x1b6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6538) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6540u;
}
