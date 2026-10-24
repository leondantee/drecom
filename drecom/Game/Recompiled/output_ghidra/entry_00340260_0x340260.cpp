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

// Function: entry_00340260
// Address: 0x340260 - 0x34027c
void entry_00340260_0x340260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340260_0x340260");
#endif

    ctx->pc = 0x340260u;

    // 0x340260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340264: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x340264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340268: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340268u;
    {
        const bool branch_taken_0x340268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340268) {
            ctx->pc = 0x34027Cu;
            return;
        }
    }
    ctx->pc = 0x340270u;
    // 0x340270: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x340270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340274: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x340274u;
    {
        const bool branch_taken_0x340274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340274) {
            ctx->pc = 0x3402ACu;
            return;
        }
    }
    ctx->pc = 0x34027Cu;
}
