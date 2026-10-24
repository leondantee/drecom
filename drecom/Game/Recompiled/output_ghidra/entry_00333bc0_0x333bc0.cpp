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

// Function: entry_00333bc0
// Address: 0x333bc0 - 0x333bd4
void entry_00333bc0_0x333bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333bc0_0x333bc0");
#endif

    ctx->pc = 0x333bc0u;

    // 0x333bc0: 0x2a690004  slti        $t1, $s3, 0x4
    ctx->pc = 0x333bc0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x333bc4: 0x1520ffed  bnez        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x333BC4u;
    {
        const bool branch_taken_0x333bc4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x333bc4) {
            ctx->pc = 0x333B7Cu;
            return;
        }
    }
    ctx->pc = 0x333BCCu;
    // 0x333bcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x333BCCu;
    {
        const bool branch_taken_0x333bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333bcc) {
            ctx->pc = 0x333C40u;
            return;
        }
    }
    ctx->pc = 0x333BD4u;
}
