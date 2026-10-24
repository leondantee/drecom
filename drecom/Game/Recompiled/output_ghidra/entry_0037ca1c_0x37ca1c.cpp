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

// Function: entry_0037ca1c
// Address: 0x37ca1c - 0x37ca40
void entry_0037ca1c_0x37ca1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ca1c_0x37ca1c");
#endif

    ctx->pc = 0x37ca1cu;

    // 0x37ca1c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37ca20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37CA20u;
    {
        const bool branch_taken_0x37ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca20) {
            ctx->pc = 0x37CA40u;
            return;
        }
    }
    ctx->pc = 0x37CA28u;
    // 0x37ca28: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37ca2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37ca2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca30: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x37ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ca34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37CA38u;
    {
        const bool branch_taken_0x37ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca38) {
            ctx->pc = 0x37CA4Cu;
            return;
        }
    }
    ctx->pc = 0x37CA40u;
}
