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

// Function: entry_0016a694
// Address: 0x16a694 - 0x16a6a8
void entry_0016a694_0x16a694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a694_0x16a694");
#endif

    ctx->pc = 0x16a694u;

    // 0x16a694: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a698: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16a69c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a69cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a6a0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a6a4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x16a6a8u;
}
