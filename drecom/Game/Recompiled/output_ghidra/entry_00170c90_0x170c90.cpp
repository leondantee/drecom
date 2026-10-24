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

// Function: entry_00170c90
// Address: 0x170c90 - 0x170cb0
void entry_00170c90_0x170c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c90_0x170c90");
#endif

    ctx->pc = 0x170c90u;

    // 0x170c90: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x170c94: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x170c94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x170c98: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x170C98u;
    {
        const bool branch_taken_0x170c98 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x170c98) {
            ctx->pc = 0x170CB0u;
            return;
        }
    }
    ctx->pc = 0x170CA0u;
    // 0x170ca0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170ca4: 0xafa50174  sw          $a1, 0x174($sp)
    ctx->pc = 0x170ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 5));
    // 0x170ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170CA8u;
    {
        const bool branch_taken_0x170ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ca8) {
            ctx->pc = 0x170CB8u;
            return;
        }
    }
    ctx->pc = 0x170CB0u;
}
