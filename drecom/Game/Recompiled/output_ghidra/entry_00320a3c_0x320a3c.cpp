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

// Function: entry_00320a3c
// Address: 0x320a3c - 0x320a78
void entry_00320a3c_0x320a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320a3c_0x320a3c");
#endif

    ctx->pc = 0x320a3cu;

    // 0x320a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a40: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320a44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x320a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320a4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320a50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320a58: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320a58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320a5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320a60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320a68: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320a6c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320a70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320a74: 0x0  nop
    ctx->pc = 0x320a74u;
    // NOP
    ctx->pc = 0x320a78u;
}
