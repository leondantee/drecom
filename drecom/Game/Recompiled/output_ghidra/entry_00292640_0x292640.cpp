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

// Function: entry_00292640
// Address: 0x292640 - 0x292660
void entry_00292640_0x292640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292640_0x292640");
#endif

    ctx->pc = 0x292640u;

    // 0x292640: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x292640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x292644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292648: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292648u;
    {
        const bool branch_taken_0x292648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292648) {
            ctx->pc = 0x292670u;
            return;
        }
    }
    ctx->pc = 0x292650u;
    // 0x292650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292650u;
    {
        const bool branch_taken_0x292650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292650) {
            ctx->pc = 0x292660u;
            return;
        }
    }
    ctx->pc = 0x292658u;
    // 0x292658: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x292658u;
    {
        const bool branch_taken_0x292658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292658) {
            ctx->pc = 0x292688u;
            return;
        }
    }
    ctx->pc = 0x292660u;
}
