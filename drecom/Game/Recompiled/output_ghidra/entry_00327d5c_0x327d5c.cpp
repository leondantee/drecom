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

// Function: entry_00327d5c
// Address: 0x327d5c - 0x327d98
void entry_00327d5c_0x327d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327d5c_0x327d5c");
#endif

    ctx->pc = 0x327d5cu;

    // 0x327d5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d60: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x327d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x327d64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327d68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x327d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x327d6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x327d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x327d70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327d78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x327d78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327d7c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x327d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327d80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x327d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327d88: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x327d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x327d8c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x327d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x327d90: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x327d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327d94: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x327d94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x327d98u;
}
