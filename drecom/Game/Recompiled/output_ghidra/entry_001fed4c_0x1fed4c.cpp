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

// Function: entry_001fed4c
// Address: 0x1fed4c - 0x1fed88
void entry_001fed4c_0x1fed4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed4c_0x1fed4c");
#endif

    ctx->pc = 0x1fed4cu;

    // 0x1fed4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed50: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fed50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fed54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fed5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fed60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fed68: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fed68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fed6c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fed70: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fed78: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fed7c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fed80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fed80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fed84: 0x0  nop
    ctx->pc = 0x1fed84u;
    // NOP
    ctx->pc = 0x1fed88u;
}
