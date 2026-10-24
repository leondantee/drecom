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

// Function: entry_00272a80
// Address: 0x272a80 - 0x272a90
void entry_00272a80_0x272a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272a80_0x272a80");
#endif

    ctx->pc = 0x272a80u;

    // 0x272a80: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272a84: 0x2c420046  sltiu       $v0, $v0, 0x46
    ctx->pc = 0x272a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x272a88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x272A88u;
    {
        const bool branch_taken_0x272a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272a88) {
            ctx->pc = 0x272A68u;
            return;
        }
    }
    ctx->pc = 0x272A90u;
}
