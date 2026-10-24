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

// Function: entry_001e5d18
// Address: 0x1e5d18 - 0x1e5d64
void entry_001e5d18_0x1e5d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d18_0x1e5d18");
#endif

    ctx->pc = 0x1e5d18u;

    // 0x1e5d18: 0x8fb20340  lw          $s2, 0x340($sp)
    ctx->pc = 0x1e5d18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1e5d1c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e5d20: 0xafa30340  sw          $v1, 0x340($sp)
    ctx->pc = 0x1e5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 3));
    // 0x1e5d24: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1E5D24u;
    {
        const bool branch_taken_0x1e5d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d24) {
            ctx->pc = 0x1E5C0Cu;
            return;
        }
    }
    ctx->pc = 0x1E5D2Cu;
    // 0x1e5d2c: 0x8fa40368  lw          $a0, 0x368($sp)
    ctx->pc = 0x1e5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1e5d30: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e5d30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e5d34: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e5d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5d38: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e5d38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5d3c: 0x8fa30358  lw          $v1, 0x358($sp)
    ctx->pc = 0x1e5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1e5d40: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5d44: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5d48: 0x8fa40358  lw          $a0, 0x358($sp)
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1e5d4c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1e5d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e5d50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5d54: 0xafa30340  sw          $v1, 0x340($sp)
    ctx->pc = 0x1e5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 3));
    // 0x1e5d58: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e5d58u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e5d5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5d60: 0xafa30344  sw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 3));
    ctx->pc = 0x1e5d64u;
}
