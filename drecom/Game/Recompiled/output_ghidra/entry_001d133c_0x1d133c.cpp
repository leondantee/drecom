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

// Function: entry_001d133c
// Address: 0x1d133c - 0x1d1368
void entry_001d133c_0x1d133c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d133c_0x1d133c");
#endif

    ctx->pc = 0x1d133cu;

    // 0x1d133c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d1340: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x1d1340u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1d1344: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d1344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d1348: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d134c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D134Cu;
    {
        const bool branch_taken_0x1d134c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d134c) {
            ctx->pc = 0x1D1368u;
            return;
        }
    }
    ctx->pc = 0x1D1354u;
    // 0x1d1354: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1358: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d1358u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d135c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1360: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1d1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d1364: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d1364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x1d1368u;
}
