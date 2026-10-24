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

// Function: entry_001b28a8
// Address: 0x1b28a8 - 0x1b28cc
void entry_001b28a8_0x1b28a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28a8_0x1b28a8");
#endif

    ctx->pc = 0x1b28a8u;

    // 0x1b28a8: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1b28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1b28ac: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x1b28acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b28b0: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1B28B0u;
    {
        const bool branch_taken_0x1b28b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28b0) {
            ctx->pc = 0x1B25B0u;
            return;
        }
    }
    ctx->pc = 0x1B28B8u;
    // 0x1b28b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b28bc: 0x2450b8d0  addiu       $s0, $v0, -0x4730
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b28c0: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1b28c0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b28c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B28C4u;
    {
        const bool branch_taken_0x1b28c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b28c4) {
            ctx->pc = 0x1B28F8u;
            return;
        }
    }
    ctx->pc = 0x1B28CCu;
}
