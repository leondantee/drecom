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

// Function: entry_001ffa2c
// Address: 0x1ffa2c - 0x1ffa68
void entry_001ffa2c_0x1ffa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa2c_0x1ffa2c");
#endif

    ctx->pc = 0x1ffa2cu;

    // 0x1ffa2c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa30: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffa30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffa34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffa38: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffa3c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1ffa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ffa40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa44: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffa48: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x1ffa48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ffa4c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ffa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffa50: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa54: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ffa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffa58: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ffa5c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1ffa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1ffa60: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffa64: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1ffa64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ffa68u;
}
