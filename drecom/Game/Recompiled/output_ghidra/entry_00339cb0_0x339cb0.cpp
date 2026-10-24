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

// Function: entry_00339cb0
// Address: 0x339cb0 - 0x339cc8
void entry_00339cb0_0x339cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339cb0_0x339cb0");
#endif

    ctx->pc = 0x339cb0u;

    // 0x339cb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339cb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339CB4u;
    {
        const bool branch_taken_0x339cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cb4) {
            ctx->pc = 0x339CC8u;
            return;
        }
    }
    ctx->pc = 0x339CBCu;
    // 0x339cbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x339cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339cc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339CC0u;
    {
        const bool branch_taken_0x339cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cc0) {
            ctx->pc = 0x339CCCu;
            return;
        }
    }
    ctx->pc = 0x339CC8u;
}
