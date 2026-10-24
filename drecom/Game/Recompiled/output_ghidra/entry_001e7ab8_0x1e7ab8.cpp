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

// Function: entry_001e7ab8
// Address: 0x1e7ab8 - 0x1e7afc
void entry_001e7ab8_0x1e7ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7ab8_0x1e7ab8");
#endif

    ctx->pc = 0x1e7ab8u;

    // 0x1e7ab8: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1e7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e7abc: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e7abcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7ac0: 0x1460feed  bnez        $v1, . + 4 + (-0x113 << 2)
    ctx->pc = 0x1E7AC0u;
    {
        const bool branch_taken_0x1e7ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ac0) {
            ctx->pc = 0x1E7678u;
            return;
        }
    }
    ctx->pc = 0x1E7AC8u;
    // 0x1e7ac8: 0x8fb003e0  lw          $s0, 0x3E0($sp)
    ctx->pc = 0x1e7ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e7acc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7ad0: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7ad0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7ad4: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1e7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e7ad8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7adc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7adcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7ae0: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1e7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e7ae4: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x1e7ae4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e7ae8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1e7ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e7aec: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e7aecu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7af0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e7af0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7af8: 0xafa303b8  sw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 3));
    ctx->pc = 0x1e7afcu;
}
