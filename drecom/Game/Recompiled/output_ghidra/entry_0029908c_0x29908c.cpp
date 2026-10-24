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

// Function: entry_0029908c
// Address: 0x29908c - 0x2990a0
void entry_0029908c_0x29908c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029908c_0x29908c");
#endif

    ctx->pc = 0x29908cu;

    // 0x29908c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x29908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299094: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299098: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x299098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29909c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29909cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x2990a0u;
}
