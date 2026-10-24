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

// Function: entry_00168314
// Address: 0x168314 - 0x168348
void entry_00168314_0x168314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168314_0x168314");
#endif

    ctx->pc = 0x168314u;

    // 0x168314: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x168318: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x168318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x16831c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x168320: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x168324: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x168324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168328: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168328u;
    {
        const bool branch_taken_0x168328 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x168328) {
            ctx->pc = 0x168348u;
            return;
        }
    }
    ctx->pc = 0x168330u;
    // 0x168330: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x168330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x168334: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x168338: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16833c: 0x29023  negu        $s2, $v0
    ctx->pc = 0x16833cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x168340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168340u;
    {
        const bool branch_taken_0x168340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168340) {
            ctx->pc = 0x168354u;
            return;
        }
    }
    ctx->pc = 0x168348u;
}
