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

// Function: entry_0016ab40
// Address: 0x16ab40 - 0x16ab74
void entry_0016ab40_0x16ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab40_0x16ab40");
#endif

    ctx->pc = 0x16ab40u;

    // 0x16ab40: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x16ab40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x16ab44: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x16ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x16ab48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ab4c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ab50: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab54: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AB54u;
    {
        const bool branch_taken_0x16ab54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ab54) {
            ctx->pc = 0x16AB74u;
            return;
        }
    }
    ctx->pc = 0x16AB5Cu;
    // 0x16ab5c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ab60: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ab64: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab68: 0x29023  negu        $s2, $v0
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16ab6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB6Cu;
    {
        const bool branch_taken_0x16ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab6c) {
            ctx->pc = 0x16AB80u;
            return;
        }
    }
    ctx->pc = 0x16AB74u;
}
