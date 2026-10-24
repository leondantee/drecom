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

// Function: entry_00326084
// Address: 0x326084 - 0x3260a4
void entry_00326084_0x326084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326084_0x326084");
#endif

    ctx->pc = 0x326084u;

    // 0x326084: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x326084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326088: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x326088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32608c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326090: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x326090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x326094: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x326094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x326098: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x326098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x32609c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x32609Cu;
    SET_GPR_U32(ctx, 31, 0x3260A4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3260A4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3260A4u) { return; }
    ctx->pc = 0x3260A4u;
}
