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

// Function: entry_0033c9cc
// Address: 0x33c9cc - 0x33ca00
void entry_0033c9cc_0x33c9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c9cc_0x33c9cc");
#endif

    ctx->pc = 0x33c9ccu;

    // 0x33c9cc: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c9d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c9d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33c9d8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c9e0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c9e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c9e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c9e8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x33c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c9ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c9f0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33c9f0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c9f4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33c9f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c9f8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x33C9F8u;
    {
        const bool branch_taken_0x33c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9f8) {
            ctx->pc = 0x33CC08u;
            return;
        }
    }
    ctx->pc = 0x33CA00u;
}
