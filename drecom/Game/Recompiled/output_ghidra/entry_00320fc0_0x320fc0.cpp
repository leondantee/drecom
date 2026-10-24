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

// Function: entry_00320fc0
// Address: 0x320fc0 - 0x320fe0
void entry_00320fc0_0x320fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320fc0_0x320fc0");
#endif

    ctx->pc = 0x320fc0u;

    // 0x320fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fc4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320fc4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320fc8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320fcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320fd4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320fdc: 0x0  nop
    ctx->pc = 0x320fdcu;
    // NOP
    ctx->pc = 0x320fe0u;
}
