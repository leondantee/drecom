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

// Function: entry_0013ed40
// Address: 0x13ed40 - 0x13ed7c
void entry_0013ed40_0x13ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ed40_0x13ed40");
#endif

    ctx->pc = 0x13ed40u;

    // 0x13ed40: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13ed44: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x13ed44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13ed48: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ed4c: 0x90850240  lbu         $a1, 0x240($a0)
    ctx->pc = 0x13ed4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x13ed50: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x13ed50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ed54: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x13ed58: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED58u;
    {
        const bool branch_taken_0x13ed58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed58) {
            ctx->pc = 0x13ED7Cu;
            return;
        }
    }
    ctx->pc = 0x13ED60u;
    // 0x13ed60: 0x8fa21684  lw          $v0, 0x1684($sp)
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed64: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x13ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ed68: 0xafa41684  sw          $a0, 0x1684($sp)
    ctx->pc = 0x13ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 4));
    // 0x13ed6c: 0x8fa51684  lw          $a1, 0x1684($sp)
    ctx->pc = 0x13ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed70: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x13ed70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ed74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED74u;
    {
        const bool branch_taken_0x13ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed74) {
            ctx->pc = 0x13ED98u;
            return;
        }
    }
    ctx->pc = 0x13ED7Cu;
}
