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

// Function: entry_0016a734
// Address: 0x16a734 - 0x16a748
void entry_0016a734_0x16a734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a734_0x16a734");
#endif

    ctx->pc = 0x16a734u;

    // 0x16a734: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a738: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16a73c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a73cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a740: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16a740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a744: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x16a748u;
}
