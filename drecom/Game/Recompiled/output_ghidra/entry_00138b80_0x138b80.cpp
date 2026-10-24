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

// Function: entry_00138b80
// Address: 0x138b80 - 0x138b94
void entry_00138b80_0x138b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b80_0x138b80");
#endif

    ctx->pc = 0x138b80u;

    // 0x138b80: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138b80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138b84: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x138B84u;
    {
        const bool branch_taken_0x138b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b84) {
            ctx->pc = 0x138B38u;
            return;
        }
    }
    ctx->pc = 0x138B8Cu;
    // 0x138b8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x138B8Cu;
    {
        const bool branch_taken_0x138b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b8c) {
            ctx->pc = 0x138C18u;
            return;
        }
    }
    ctx->pc = 0x138B94u;
}
