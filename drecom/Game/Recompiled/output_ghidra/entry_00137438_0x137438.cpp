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

// Function: entry_00137438
// Address: 0x137438 - 0x137444
void entry_00137438_0x137438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137438_0x137438");
#endif

    ctx->pc = 0x137438u;

    // 0x137438: 0x2ac30003  slti        $v1, $s6, 0x3
    ctx->pc = 0x137438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13743c: 0x1460fe08  bnez        $v1, . + 4 + (-0x1F8 << 2)
    ctx->pc = 0x13743Cu;
    {
        const bool branch_taken_0x13743c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13743c) {
            ctx->pc = 0x136C60u;
            return;
        }
    }
    ctx->pc = 0x137444u;
}
