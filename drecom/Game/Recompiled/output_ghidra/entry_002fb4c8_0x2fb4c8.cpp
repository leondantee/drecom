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

// Function: entry_002fb4c8
// Address: 0x2fb4c8 - 0x2fb4dc
void entry_002fb4c8_0x2fb4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb4c8_0x2fb4c8");
#endif

    ctx->pc = 0x2fb4c8u;

    // 0x2fb4c8: 0x2e040010  sltiu       $a0, $s0, 0x10
    ctx->pc = 0x2fb4c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb4cc: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FB4CCu;
    {
        const bool branch_taken_0x2fb4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb4cc) {
            ctx->pc = 0x2FB468u;
            return;
        }
    }
    ctx->pc = 0x2FB4D4u;
    // 0x2fb4d4: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x2FB4D4u;
    {
        const bool branch_taken_0x2fb4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb4d4) {
            ctx->pc = 0x2FB948u;
            return;
        }
    }
    ctx->pc = 0x2FB4DCu;
}
