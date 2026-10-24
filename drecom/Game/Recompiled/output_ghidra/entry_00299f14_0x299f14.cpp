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

// Function: entry_00299f14
// Address: 0x299f14 - 0x299f40
void entry_00299f14_0x299f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299f14_0x299f14");
#endif

    ctx->pc = 0x299f14u;

    // 0x299f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299f18: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x299f18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299f20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299F20u;
    {
        const bool branch_taken_0x299f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f20) {
            ctx->pc = 0x299F40u;
            return;
        }
    }
    ctx->pc = 0x299F28u;
    // 0x299f28: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x299f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x299f2c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x299f2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299f30: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x299f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f34: 0xaca201d0  sw          $v0, 0x1D0($a1)
    ctx->pc = 0x299f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 464), GPR_U32(ctx, 2));
    // 0x299f38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x299F38u;
    {
        const bool branch_taken_0x299f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f38) {
            ctx->pc = 0x299F50u;
            return;
        }
    }
    ctx->pc = 0x299F40u;
}
