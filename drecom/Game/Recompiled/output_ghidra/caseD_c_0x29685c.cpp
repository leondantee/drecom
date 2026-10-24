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

// Function: caseD_c
// Address: 0x29685c - 0x2968a4
void caseD_c_0x29685c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x29685c");
#endif

    ctx->pc = 0x29685cu;

    // 0x29685c: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x29685cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296860: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296864: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296868: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29686c: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x29686cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296870: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296874: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x296874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296878: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29687c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296880: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296884: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296888: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29688c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296890: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296898: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29689c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x29689Cu;
    {
        const bool branch_taken_0x29689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29689c) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x2968A4u;
}
