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

// Function: entry_00275430
// Address: 0x275430 - 0x275444
void entry_00275430_0x275430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275430_0x275430");
#endif

    ctx->pc = 0x275430u;

    // 0x275430: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x275430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x275434: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x275434u;
    {
        const bool branch_taken_0x275434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275434) {
            ctx->pc = 0x27532Cu;
            return;
        }
    }
    ctx->pc = 0x27543Cu;
    // 0x27543c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27543Cu;
    {
        const bool branch_taken_0x27543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27543c) {
            ctx->pc = 0x2755D0u;
            return;
        }
    }
    ctx->pc = 0x275444u;
}
