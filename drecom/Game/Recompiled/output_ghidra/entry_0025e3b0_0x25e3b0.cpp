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

// Function: entry_0025e3b0
// Address: 0x25e3b0 - 0x25e3d8
void entry_0025e3b0_0x25e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e3b0_0x25e3b0");
#endif

    ctx->pc = 0x25e3b0u;

    // 0x25e3b0: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x25e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e3b4: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x25e3b4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x25e3b8: 0x920309e4  lbu         $v1, 0x9E4($s0)
    ctx->pc = 0x25e3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2532)));
    // 0x25e3bc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e3c0: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x25e3c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e3c4: 0x1480fd6a  bnez        $a0, . + 4 + (-0x296 << 2)
    ctx->pc = 0x25E3C4u;
    {
        const bool branch_taken_0x25e3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e3c4) {
            ctx->pc = 0x25D970u;
            return;
        }
    }
    ctx->pc = 0x25E3CCu;
    // 0x25e3cc: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x25e3ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25e3d0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x25E3D0u;
    {
        const bool branch_taken_0x25e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e3d0) {
            ctx->pc = 0x25E488u;
            return;
        }
    }
    ctx->pc = 0x25E3D8u;
}
