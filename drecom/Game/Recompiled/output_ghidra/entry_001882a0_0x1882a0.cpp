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

// Function: entry_001882a0
// Address: 0x1882a0 - 0x1882b0
void entry_001882a0_0x1882a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882a0_0x1882a0");
#endif

    ctx->pc = 0x1882a0u;

    // 0x1882a0: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x1882a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1882a4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x188258u;
            return;
        }
    }
    ctx->pc = 0x1882ACu;
    // 0x1882ac: 0x0  nop
    ctx->pc = 0x1882acu;
    // NOP
    ctx->pc = 0x1882b0u;
}
