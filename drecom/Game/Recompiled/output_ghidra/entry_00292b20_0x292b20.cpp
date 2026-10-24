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

// Function: entry_00292b20
// Address: 0x292b20 - 0x292b30
void entry_00292b20_0x292b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292b20_0x292b20");
#endif

    ctx->pc = 0x292b20u;

    // 0x292b20: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x292b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x292b24: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x292B24u;
    {
        const bool branch_taken_0x292b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292b24) {
            ctx->pc = 0x292B04u;
            return;
        }
    }
    ctx->pc = 0x292B2Cu;
    // 0x292b2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x292b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x292b30u;
}
