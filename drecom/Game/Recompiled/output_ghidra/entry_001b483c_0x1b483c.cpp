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

// Function: entry_001b483c
// Address: 0x1b483c - 0x1b4888
void entry_001b483c_0x1b483c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b483c_0x1b483c");
#endif

    ctx->pc = 0x1b483cu;

    // 0x1b483c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1b483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b4840: 0x101a03  sra         $v1, $s0, 8
    ctx->pc = 0x1b4840u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 8));
    // 0x1b4844: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b4844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4848: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b484c: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x1b484cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b4850: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1b4850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4854: 0x84a410a6  lh          $a0, 0x10A6($a1)
    ctx->pc = 0x1b4854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x1b4858: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b485c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b4860: 0xa4a310a6  sh          $v1, 0x10A6($a1)
    ctx->pc = 0x1b4860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b4864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4868: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1b4868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1b486c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b486cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b4874: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4874u;
    {
        const bool branch_taken_0x1b4874 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b4874) {
            ctx->pc = 0x1B4888u;
            return;
        }
    }
    ctx->pc = 0x1B487Cu;
    // 0x1b487c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4884: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1b4884u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b4888u;
}
