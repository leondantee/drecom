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

// Function: entry_001fa314
// Address: 0x1fa314 - 0x1fa340
void entry_001fa314_0x1fa314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa314_0x1fa314");
#endif

    ctx->pc = 0x1fa314u;

    // 0x1fa314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1fa314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1fa318: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1fa318u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1fa31c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1fa31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1fa320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa324: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA324u;
    {
        const bool branch_taken_0x1fa324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa324) {
            ctx->pc = 0x1FA340u;
            return;
        }
    }
    ctx->pc = 0x1FA32Cu;
    // 0x1fa32c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa330: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1fa330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fa334: 0x28630320  slti        $v1, $v1, 0x320
    ctx->pc = 0x1fa334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x1fa338: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FA338u;
    {
        const bool branch_taken_0x1fa338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa338) {
            ctx->pc = 0x1FA3D4u;
            return;
        }
    }
    ctx->pc = 0x1FA340u;
}
