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

// Function: entry_001ffb38
// Address: 0x1ffb38 - 0x1ffb78
void entry_001ffb38_0x1ffb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffb38_0x1ffb38");
#endif

    ctx->pc = 0x1ffb38u;

    // 0x1ffb38: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb3c: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffb40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffb44: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffb48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffb4c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ffb54: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1ffb54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffb58: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffb5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb60: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffb64: 0x26440480  addiu       $a0, $s2, 0x480
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x1ffb68: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1ffb68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1ffb6c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1ffb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffb70: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1ffb70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ffb74: 0x0  nop
    ctx->pc = 0x1ffb74u;
    // NOP
    ctx->pc = 0x1ffb78u;
}
