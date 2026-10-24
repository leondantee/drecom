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

// Function: entry_0015c500
// Address: 0x15c500 - 0x15c538
void entry_0015c500_0x15c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c500_0x15c500");
#endif

    ctx->pc = 0x15c500u;

    // 0x15c500: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c504: 0x8c5013e8  lw          $s0, 0x13E8($v0)
    ctx->pc = 0x15c504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c508: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c50c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c510: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x15c514: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C518u;
    {
        const bool branch_taken_0x15c518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c518) {
            ctx->pc = 0x15C538u;
            return;
        }
    }
    ctx->pc = 0x15C520u;
    // 0x15c520: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c524: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x15c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c528: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c52c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15c530: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C530u;
    {
        const bool branch_taken_0x15c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c530) {
            ctx->pc = 0x15C580u;
            return;
        }
    }
    ctx->pc = 0x15C538u;
}
