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

// Function: entry_0034027c
// Address: 0x34027c - 0x340298
void entry_0034027c_0x34027c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034027c_0x34027c");
#endif

    ctx->pc = 0x34027cu;

    // 0x34027c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x340280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340284: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340284u;
    {
        const bool branch_taken_0x340284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340284) {
            ctx->pc = 0x340298u;
            return;
        }
    }
    ctx->pc = 0x34028Cu;
    // 0x34028c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x34028cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x340290u;
    {
        const bool branch_taken_0x340290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340290) {
            ctx->pc = 0x3402ACu;
            return;
        }
    }
    ctx->pc = 0x340298u;
}
