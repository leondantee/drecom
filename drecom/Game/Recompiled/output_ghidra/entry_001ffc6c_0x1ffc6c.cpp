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

// Function: entry_001ffc6c
// Address: 0x1ffc6c - 0x1ffca8
void entry_001ffc6c_0x1ffc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc6c_0x1ffc6c");
#endif

    ctx->pc = 0x1ffc6cu;

    // 0x1ffc6c: 0x8fbe00d8  lw          $fp, 0xD8($sp)
    ctx->pc = 0x1ffc6cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc70: 0x93c50345  lbu         $a1, 0x345($fp)
    ctx->pc = 0x1ffc70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 837)));
    // 0x1ffc74: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ffc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffc78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ffc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffc7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ffc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffc80: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ffc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ffc88: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1ffc88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffc8c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1ffc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffc90: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc94: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ffc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ffc98: 0x24c30480  addiu       $v1, $a2, 0x480
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
    // 0x1ffc9c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ffc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ffca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ffca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffca4: 0x0  nop
    ctx->pc = 0x1ffca4u;
    // NOP
    ctx->pc = 0x1ffca8u;
}
