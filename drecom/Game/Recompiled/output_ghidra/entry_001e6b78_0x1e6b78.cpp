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

// Function: entry_001e6b78
// Address: 0x1e6b78 - 0x1e6bc0
void entry_001e6b78_0x1e6b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b78_0x1e6b78");
#endif

    ctx->pc = 0x1e6b78u;

    // 0x1e6b78: 0x27d4ffff  addiu       $s4, $fp, -0x1
    ctx->pc = 0x1e6b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e6b7c: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x1e6b7cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e6b80: 0x1680fe5f  bnez        $s4, . + 4 + (-0x1A1 << 2)
    ctx->pc = 0x1E6B80u;
    {
        const bool branch_taken_0x1e6b80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b80) {
            ctx->pc = 0x1E6500u;
            return;
        }
    }
    ctx->pc = 0x1E6B88u;
    // 0x1e6b88: 0x8fa40a48  lw          $a0, 0xA48($sp)
    ctx->pc = 0x1e6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2632)));
    // 0x1e6b8c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e6b8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6b90: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6b94: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e6b94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6b98: 0x8fa50a38  lw          $a1, 0xA38($sp)
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2616)));
    // 0x1e6b9c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e6ba0: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e6ba0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6ba4: 0x8fa30a38  lw          $v1, 0xA38($sp)
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2616)));
    // 0x1e6ba8: 0x94760002  lhu         $s6, 0x2($v1)
    ctx->pc = 0x1e6ba8u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e6bac: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x1e6bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1e6bb0: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x1e6bb0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6bb4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e6bb4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6bb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6bbc: 0xafa30a24  sw          $v1, 0xA24($sp)
    ctx->pc = 0x1e6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2596), GPR_U32(ctx, 3));
    ctx->pc = 0x1e6bc0u;
}
