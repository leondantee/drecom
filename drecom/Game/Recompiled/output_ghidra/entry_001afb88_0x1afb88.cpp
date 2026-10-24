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

// Function: entry_001afb88
// Address: 0x1afb88 - 0x1afbd8
void entry_001afb88_0x1afb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb88_0x1afb88");
#endif

    ctx->pc = 0x1afb88u;

    // 0x1afb88: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1afb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1afb8c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1afb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1afb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afb94: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1afb98: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1afb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1afb9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afba0: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x1afba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x1afba4: 0x8fb60158  lw          $s6, 0x158($sp)
    ctx->pc = 0x1afba4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1afba8: 0x26d30004  addiu       $s3, $s6, 0x4
    ctx->pc = 0x1afba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1afbac: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x1afbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1afbb0: 0x8c770058  lw          $s7, 0x58($v1)
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1afbb4: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1afbb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1afbb8: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1afbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afbbc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1afbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1afbc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afbc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1afbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1afbc8: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1afbcc: 0x8ef50034  lw          $s5, 0x34($s7)
    ctx->pc = 0x1afbccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1afbd0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1afbd0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1afbd4: 0x0  nop
    ctx->pc = 0x1afbd4u;
    // NOP
    ctx->pc = 0x1afbd8u;
}
