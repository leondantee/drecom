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

// Function: entry_001d1368
// Address: 0x1d1368 - 0x1d1390
void entry_001d1368_0x1d1368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1368_0x1d1368");
#endif

    switch (ctx->pc) {
        case 0x1d1380u: goto label_1d1380;
        default: break;
    }

    ctx->pc = 0x1d1368u;

    // 0x1d1368: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1368u;
    {
        const bool branch_taken_0x1d1368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1368) {
            ctx->pc = 0x1D1390u;
            return;
        }
    }
    ctx->pc = 0x1D1370u;
    // 0x1d1370: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1d1374: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x1d1374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1d1378: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D1378u;
    SET_GPR_U32(ctx, 31, 0x1D1380u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D1380u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D1380u) { return; }
    ctx->pc = 0x1D1380u;
label_1d1380:
    // 0x1d1380: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x1d1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1d1384: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d1384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1388: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D1388u;
    SET_GPR_U32(ctx, 31, 0x1D1390u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D1390u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D1390u) { return; }
    ctx->pc = 0x1D1390u;
}
