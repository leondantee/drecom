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

// Function: entry_00171488
// Address: 0x171488 - 0x1714a8
void entry_00171488_0x171488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171488_0x171488");
#endif

    ctx->pc = 0x171488u;

    // 0x171488: 0x8fb00168  lw          $s0, 0x168($sp)
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x17148c: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x17148cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171490: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171490u;
    {
        const bool branch_taken_0x171490 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x171490) {
            ctx->pc = 0x1714A8u;
            return;
        }
    }
    ctx->pc = 0x171498u;
    // 0x171498: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x171498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17149c: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x17149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x1714a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1714A0u;
    {
        const bool branch_taken_0x1714a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1714a0) {
            ctx->pc = 0x1714ACu;
            return;
        }
    }
    ctx->pc = 0x1714A8u;
}
