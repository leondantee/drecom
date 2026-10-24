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

// Function: entry_00254f14
// Address: 0x254f14 - 0x254f20
void entry_00254f14_0x254f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254f14_0x254f14");
#endif

    ctx->pc = 0x254f14u;

    // 0x254f14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x254f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x254f18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x254f20u;
}
