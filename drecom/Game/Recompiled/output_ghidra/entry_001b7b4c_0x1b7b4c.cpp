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

// Function: entry_001b7b4c
// Address: 0x1b7b4c - 0x1b7b74
void entry_001b7b4c_0x1b7b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7b4c_0x1b7b4c");
#endif

    ctx->pc = 0x1b7b4cu;

    // 0x1b7b4c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7b50: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1b7b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1b7b54: 0x106001f8  beqz        $v1, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x1B7B54u;
    {
        const bool branch_taken_0x1b7b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b54) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7B5Cu;
    // 0x1b7b5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7b60: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x1b7b60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b7b64: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1b7b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b7b68: 0xa0a70003  sb          $a3, 0x3($a1)
    ctx->pc = 0x1b7b68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b7b6c: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1B7B6Cu;
    {
        const bool branch_taken_0x1b7b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b6c) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7B74u;
}
