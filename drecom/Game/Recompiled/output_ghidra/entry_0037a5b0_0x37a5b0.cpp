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

// Function: entry_0037a5b0
// Address: 0x37a5b0 - 0x37a5c4
void entry_0037a5b0_0x37a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a5b0_0x37a5b0");
#endif

    ctx->pc = 0x37a5b0u;

    // 0x37a5b0: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x37a5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a5b4: 0x1460ff06  bnez        $v1, . + 4 + (-0xFA << 2)
    ctx->pc = 0x37A5B4u;
    {
        const bool branch_taken_0x37a5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a5b4) {
            ctx->pc = 0x37A1D0u;
            return;
        }
    }
    ctx->pc = 0x37A5BCu;
    // 0x37a5bc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x37A5BCu;
    {
        const bool branch_taken_0x37a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5bc) {
            ctx->pc = 0x37AC60u;
            return;
        }
    }
    ctx->pc = 0x37A5C4u;
}
