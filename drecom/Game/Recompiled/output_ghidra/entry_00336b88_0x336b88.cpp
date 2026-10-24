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

// Function: entry_00336b88
// Address: 0x336b88 - 0x336ba4
void entry_00336b88_0x336b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336b88_0x336b88");
#endif

    ctx->pc = 0x336b88u;

    // 0x336b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336b8c: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336B8Cu;
    {
        const bool branch_taken_0x336b8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336b8c) {
            ctx->pc = 0x336BB4u;
            return;
        }
    }
    ctx->pc = 0x336B94u;
    // 0x336b94: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336B94u;
    {
        const bool branch_taken_0x336b94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b94) {
            ctx->pc = 0x336BA4u;
            return;
        }
    }
    ctx->pc = 0x336B9Cu;
    // 0x336b9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336B9Cu;
    {
        const bool branch_taken_0x336b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b9c) {
            ctx->pc = 0x336BBCu;
            return;
        }
    }
    ctx->pc = 0x336BA4u;
}
