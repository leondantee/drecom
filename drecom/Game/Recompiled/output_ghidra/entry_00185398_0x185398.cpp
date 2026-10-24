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

// Function: entry_00185398
// Address: 0x185398 - 0x1853a8
void entry_00185398_0x185398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185398_0x185398");
#endif

    ctx->pc = 0x185398u;

    // 0x185398: 0x2a03000f  slti        $v1, $s0, 0xF
    ctx->pc = 0x185398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x18539c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18539Cu;
    {
        const bool branch_taken_0x18539c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18539c) {
            ctx->pc = 0x185358u;
            return;
        }
    }
    ctx->pc = 0x1853A4u;
    // 0x1853a4: 0x0  nop
    ctx->pc = 0x1853a4u;
    // NOP
    ctx->pc = 0x1853a8u;
}
