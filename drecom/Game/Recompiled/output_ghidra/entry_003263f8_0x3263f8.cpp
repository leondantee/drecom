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

// Function: entry_003263f8
// Address: 0x3263f8 - 0x326414
void entry_003263f8_0x3263f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003263f8_0x3263f8");
#endif

    ctx->pc = 0x3263f8u;

    // 0x3263f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3263f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3263fc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3263fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326400: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326404: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x326404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x326408: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x326408u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x32640c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32640Cu;
    {
        const bool branch_taken_0x32640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32640c) {
            ctx->pc = 0x32644Cu;
            return;
        }
    }
    ctx->pc = 0x326414u;
}
