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

// Function: entry_0037ca4c
// Address: 0x37ca4c - 0x37ca80
void entry_0037ca4c_0x37ca4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ca4c_0x37ca4c");
#endif

    ctx->pc = 0x37ca4cu;

    // 0x37ca4c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x37ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ca50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37ca50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca54: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x37ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x37ca58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ca60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37CA60u;
    {
        const bool branch_taken_0x37ca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca60) {
            ctx->pc = 0x37CA80u;
            return;
        }
    }
    ctx->pc = 0x37CA68u;
    // 0x37ca68: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ca6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37ca6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x37ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37ca74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37CA78u;
    {
        const bool branch_taken_0x37ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca78) {
            ctx->pc = 0x37CA9Cu;
            return;
        }
    }
    ctx->pc = 0x37CA80u;
}
