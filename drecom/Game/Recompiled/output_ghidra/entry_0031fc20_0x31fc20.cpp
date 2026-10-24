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

// Function: entry_0031fc20
// Address: 0x31fc20 - 0x31fc30
void entry_0031fc20_0x31fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fc20_0x31fc20");
#endif

    ctx->pc = 0x31fc20u;

    // 0x31fc20: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fc24: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fc24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fc28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc2c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x31fc30u;
}
