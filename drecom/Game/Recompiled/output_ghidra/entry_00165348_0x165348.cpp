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

// Function: entry_00165348
// Address: 0x165348 - 0x165358
void entry_00165348_0x165348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165348_0x165348");
#endif

    ctx->pc = 0x165348u;

    // 0x165348: 0x2e430200  sltiu       $v1, $s2, 0x200
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x16534c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x16534Cu;
    {
        const bool branch_taken_0x16534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16534c) {
            ctx->pc = 0x16530Cu;
            return;
        }
    }
    ctx->pc = 0x165354u;
    // 0x165354: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x165358u;
}
