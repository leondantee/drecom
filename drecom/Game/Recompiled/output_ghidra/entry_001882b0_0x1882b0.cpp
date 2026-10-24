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

// Function: entry_001882b0
// Address: 0x1882b0 - 0x1882e8
void entry_001882b0_0x1882b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882b0_0x1882b0");
#endif

    ctx->pc = 0x1882b0u;

    // 0x1882b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1882b4: 0x4600022  bltz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1882B4u;
    {
        const bool branch_taken_0x1882b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1882b4) {
            ctx->pc = 0x188340u;
            return;
        }
    }
    ctx->pc = 0x1882BCu;
    // 0x1882bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1882bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1882c0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1882c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1882c8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1882cc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1882ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1882d0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1882d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1882d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1882d8: 0x24700190  addiu       $s0, $v1, 0x190
    ctx->pc = 0x1882d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1882dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1882dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1882e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1882E0u;
    {
        const bool branch_taken_0x1882e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882e0) {
            ctx->pc = 0x188330u;
            return;
        }
    }
    ctx->pc = 0x1882E8u;
}
