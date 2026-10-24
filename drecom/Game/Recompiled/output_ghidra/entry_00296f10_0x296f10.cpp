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

// Function: entry_00296f10
// Address: 0x296f10 - 0x296f70
void entry_00296f10_0x296f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296f10_0x296f10");
#endif

    ctx->pc = 0x296f10u;

    // 0x296f10: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296f14: 0x8c23c9f0  lw          $v1, -0x3610($at)
    ctx->pc = 0x296f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9F0u));
    // 0x296f18: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x296F18u;
    {
        const bool branch_taken_0x296f18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x296f18) {
            ctx->pc = 0x296F70u;
            return;
        }
    }
    ctx->pc = 0x296F20u;
    // 0x296f20: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296f24: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f28: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f2c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f30: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f34: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f38: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x296f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x296f3c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f40: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f48: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f4c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x296f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296f54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f58: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f5c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f60: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f64: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f68: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x296F68u;
    {
        const bool branch_taken_0x296f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f68) {
            ctx->pc = 0x296FE8u;
            return;
        }
    }
    ctx->pc = 0x296F70u;
}
