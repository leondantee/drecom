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

// Function: entry_001fae5c
// Address: 0x1fae5c - 0x1fae98
void entry_001fae5c_0x1fae5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae5c_0x1fae5c");
#endif

    ctx->pc = 0x1fae5cu;

    // 0x1fae5c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae60: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fae60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fae64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fae6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fae70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fae78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fae78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fae7c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fae80: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fae88: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fae8c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fae90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fae94: 0x0  nop
    ctx->pc = 0x1fae94u;
    // NOP
    ctx->pc = 0x1fae98u;
}
