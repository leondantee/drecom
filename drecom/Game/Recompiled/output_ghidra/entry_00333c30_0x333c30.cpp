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

// Function: entry_00333c30
// Address: 0x333c30 - 0x333c40
void entry_00333c30_0x333c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333c30_0x333c30");
#endif

    ctx->pc = 0x333c30u;

    // 0x333c30: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x333c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x333c34: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x333C34u;
    {
        const bool branch_taken_0x333c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333c34) {
            ctx->pc = 0x333BE0u;
            return;
        }
    }
    ctx->pc = 0x333C3Cu;
    // 0x333c3c: 0x0  nop
    ctx->pc = 0x333c3cu;
    // NOP
    ctx->pc = 0x333c40u;
}
