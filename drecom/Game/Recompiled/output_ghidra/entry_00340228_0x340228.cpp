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

// Function: entry_00340228
// Address: 0x340228 - 0x340244
void entry_00340228_0x340228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340228_0x340228");
#endif

    ctx->pc = 0x340228u;

    // 0x340228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34022c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340230: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340230u;
    {
        const bool branch_taken_0x340230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340230) {
            ctx->pc = 0x340244u;
            return;
        }
    }
    ctx->pc = 0x340238u;
    // 0x340238: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x340238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34023c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34023Cu;
    {
        const bool branch_taken_0x34023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34023c) {
            ctx->pc = 0x3402ACu;
            return;
        }
    }
    ctx->pc = 0x340244u;
}
