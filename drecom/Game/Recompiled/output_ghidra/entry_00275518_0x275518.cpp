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

// Function: entry_00275518
// Address: 0x275518 - 0x27552c
void entry_00275518_0x275518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275518_0x275518");
#endif

    ctx->pc = 0x275518u;

    // 0x275518: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x275518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27551c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27551Cu;
    {
        const bool branch_taken_0x27551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27551c) {
            ctx->pc = 0x275460u;
            return;
        }
    }
    ctx->pc = 0x275524u;
    // 0x275524: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x275524u;
    {
        const bool branch_taken_0x275524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275524) {
            ctx->pc = 0x2755D0u;
            return;
        }
    }
    ctx->pc = 0x27552Cu;
}
