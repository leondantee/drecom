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

// Function: entry_001961a8
// Address: 0x1961a8 - 0x1961f8
void entry_001961a8_0x1961a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001961a8_0x1961a8");
#endif

    ctx->pc = 0x1961a8u;

    // 0x1961a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1961a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961ac: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1961b0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1961b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1961b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1961b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1961b8: 0x94860034  lhu         $a2, 0x34($a0)
    ctx->pc = 0x1961b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1961bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1961bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961c0: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1961c4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1961c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1961cc: 0xa4a60036  sh          $a2, 0x36($a1)
    ctx->pc = 0x1961ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 54), (uint16_t)GPR_U32(ctx, 6));
    // 0x1961d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1961d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961d4: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1961d8: 0x8c950010  lw          $s5, 0x10($a0)
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1961dc: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1961e0: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x1961e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1961e4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1961e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1961e8: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x1961e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1961ec: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1961f0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1961f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1961f4: 0x0  nop
    ctx->pc = 0x1961f4u;
    // NOP
    ctx->pc = 0x1961f8u;
}
