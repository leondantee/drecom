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

// Function: entry_001682d4
// Address: 0x1682d4 - 0x168308
void entry_001682d4_0x1682d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001682d4_0x1682d4");
#endif

    ctx->pc = 0x1682d4u;

    // 0x1682d4: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x1682d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1682d8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1682dc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1682e0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1682e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1682e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1682E8u;
    {
        const bool branch_taken_0x1682e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1682e8) {
            ctx->pc = 0x168308u;
            return;
        }
    }
    ctx->pc = 0x1682F0u;
    // 0x1682f0: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1682f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1682f4: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1682f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1682f8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1682fc: 0x28823  negu        $s1, $v0
    ctx->pc = 0x1682fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x168300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168300u;
    {
        const bool branch_taken_0x168300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168300) {
            ctx->pc = 0x168314u;
            return;
        }
    }
    ctx->pc = 0x168308u;
}
