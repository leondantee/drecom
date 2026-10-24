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

// Function: entry_0031f5bc
// Address: 0x31f5bc - 0x31f5e8
void entry_0031f5bc_0x31f5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f5bc_0x31f5bc");
#endif

    ctx->pc = 0x31f5bcu;

    // 0x31f5bc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f5c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f5c8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x31f5c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f5cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f5d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f5d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f5d8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x31f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x31f5dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31f5e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31f5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31f5e4: 0x0  nop
    ctx->pc = 0x31f5e4u;
    // NOP
    ctx->pc = 0x31f5e8u;
}
