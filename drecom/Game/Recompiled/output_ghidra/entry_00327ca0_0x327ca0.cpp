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

// Function: entry_00327ca0
// Address: 0x327ca0 - 0x327cd0
void entry_00327ca0_0x327ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327ca0_0x327ca0");
#endif

    ctx->pc = 0x327ca0u;

    // 0x327ca0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x327ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327ca4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327ca8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327cb0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x327cb0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327cb4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x327cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327cb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cbc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327cc0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x327cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x327cc4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x327cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327cc8: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x327cc8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x327ccc: 0x0  nop
    ctx->pc = 0x327cccu;
    // NOP
    ctx->pc = 0x327cd0u;
}
