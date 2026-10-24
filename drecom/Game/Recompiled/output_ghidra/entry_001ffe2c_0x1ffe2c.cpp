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

// Function: entry_001ffe2c
// Address: 0x1ffe2c - 0x1ffe68
void entry_001ffe2c_0x1ffe2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe2c_0x1ffe2c");
#endif

    ctx->pc = 0x1ffe2cu;

    // 0x1ffe2c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe30: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1ffe30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ffe34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe38: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffe3c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ffe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffe40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe44: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ffe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffe48: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x1ffe48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffe4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffe50: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe54: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1ffe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ffe58: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1ffe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ffe5c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1ffe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1ffe60: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffe64: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1ffe64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ffe68u;
}
