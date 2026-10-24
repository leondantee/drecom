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

// Function: entry_0027e908
// Address: 0x27e908 - 0x27e928
void entry_0027e908_0x27e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e908_0x27e908");
#endif

    ctx->pc = 0x27e908u;

    // 0x27e908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e90c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E90Cu;
    {
        const bool branch_taken_0x27e90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e90c) {
            ctx->pc = 0x27E928u;
            return;
        }
    }
    ctx->pc = 0x27E914u;
    // 0x27e914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e918: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E918u;
    {
        const bool branch_taken_0x27e918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e918) {
            ctx->pc = 0x27E928u;
            return;
        }
    }
    ctx->pc = 0x27E920u;
    // 0x27e920: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x27E920u;
    {
        const bool branch_taken_0x27e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e920) {
            ctx->pc = 0x27EA98u;
            return;
        }
    }
    ctx->pc = 0x27E928u;
}
