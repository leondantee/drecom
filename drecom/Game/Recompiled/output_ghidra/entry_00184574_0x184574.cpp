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

// Function: entry_00184574
// Address: 0x184574 - 0x18459c
void entry_00184574_0x184574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184574_0x184574");
#endif

    ctx->pc = 0x184574u;

    // 0x184574: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184578: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x184578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18457c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18457cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184580: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x184580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184584: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x184588: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18458c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x184590: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x184590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184594: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184598: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x18459cu;
}
