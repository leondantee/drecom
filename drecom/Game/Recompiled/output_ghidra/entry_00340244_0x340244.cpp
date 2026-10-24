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

// Function: entry_00340244
// Address: 0x340244 - 0x340260
void entry_00340244_0x340244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340244_0x340244");
#endif

    ctx->pc = 0x340244u;

    // 0x340244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x340248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34024c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34024Cu;
    {
        const bool branch_taken_0x34024c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34024c) {
            ctx->pc = 0x340260u;
            return;
        }
    }
    ctx->pc = 0x340254u;
    // 0x340254: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340258: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x340258u;
    {
        const bool branch_taken_0x340258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340258) {
            ctx->pc = 0x3402ACu;
            return;
        }
    }
    ctx->pc = 0x340260u;
}
