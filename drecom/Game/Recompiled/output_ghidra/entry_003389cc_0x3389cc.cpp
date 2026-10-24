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

// Function: entry_003389cc
// Address: 0x3389cc - 0x3389f0
void entry_003389cc_0x3389cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003389cc_0x3389cc");
#endif

    ctx->pc = 0x3389ccu;

    // 0x3389cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3389d0: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x3389d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3389d4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x3389d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3389d8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3389dc: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x3389dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x3389e0: 0x24635330  addiu       $v1, $v1, 0x5330
    ctx->pc = 0x3389e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21296));
    // 0x3389e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3389e8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x3389ec: 0x0  nop
    ctx->pc = 0x3389ecu;
    // NOP
    ctx->pc = 0x3389f0u;
}
