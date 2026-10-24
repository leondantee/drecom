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

// Function: entry_00299d94
// Address: 0x299d94 - 0x299da8
void entry_00299d94_0x299d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299d94_0x299d94");
#endif

    ctx->pc = 0x299d94u;

    // 0x299d94: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d98: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x299d9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299da0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299da4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x299da4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x299da8u;
}
