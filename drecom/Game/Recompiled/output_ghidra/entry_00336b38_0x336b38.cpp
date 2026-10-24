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

// Function: entry_00336b38
// Address: 0x336b38 - 0x336b54
void entry_00336b38_0x336b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336b38_0x336b38");
#endif

    ctx->pc = 0x336b38u;

    // 0x336b38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336b3c: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336B3Cu;
    {
        const bool branch_taken_0x336b3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336b3c) {
            ctx->pc = 0x336B64u;
            return;
        }
    }
    ctx->pc = 0x336B44u;
    // 0x336b44: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336B44u;
    {
        const bool branch_taken_0x336b44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b44) {
            ctx->pc = 0x336B54u;
            return;
        }
    }
    ctx->pc = 0x336B4Cu;
    // 0x336b4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336B4Cu;
    {
        const bool branch_taken_0x336b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b4c) {
            ctx->pc = 0x336B6Cu;
            return;
        }
    }
    ctx->pc = 0x336B54u;
}
