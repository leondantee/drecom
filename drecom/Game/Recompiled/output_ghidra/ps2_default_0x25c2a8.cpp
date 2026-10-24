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

// Function: default
// Address: 0x25c2a8 - 0x25c2d4
void ps2_default_0x25c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x25c2a8");
#endif

    ctx->pc = 0x25c2a8u;

    // 0x25c2a8: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x25c2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25c2ac: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x25c2acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x25c2b0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c2b4: 0x908509e4  lbu         $a1, 0x9E4($a0)
    ctx->pc = 0x25c2b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2532)));
    // 0x25c2b8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x25c2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25c2bc: 0xc3202a  slt         $a0, $a2, $v1
    ctx->pc = 0x25c2bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25c2c0: 0x1480fd2a  bnez        $a0, . + 4 + (-0x2D6 << 2)
    ctx->pc = 0x25C2C0u;
    {
        const bool branch_taken_0x25c2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2c0) {
            ctx->pc = 0x25B76Cu;
            return;
        }
    }
    ctx->pc = 0x25C2C8u;
    // 0x25c2c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25c2c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25c2cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25C2CCu;
    {
        const bool branch_taken_0x25c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2cc) {
            ctx->pc = 0x25C390u;
            return;
        }
    }
    ctx->pc = 0x25C2D4u;
}
