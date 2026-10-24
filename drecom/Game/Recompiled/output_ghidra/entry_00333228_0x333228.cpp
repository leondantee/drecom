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

// Function: entry_00333228
// Address: 0x333228 - 0x333254
void entry_00333228_0x333228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333228_0x333228");
#endif

    ctx->pc = 0x333228u;

    // 0x333228: 0x1a600020  blez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x333228u;
    {
        const bool branch_taken_0x333228 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x333228) {
            ctx->pc = 0x3332ACu;
            return;
        }
    }
    ctx->pc = 0x333230u;
    // 0x333230: 0x8e226850  lw          $v0, 0x6850($s1)
    ctx->pc = 0x333230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26704)));
    // 0x333234: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x333234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x333238: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33323c: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x333240: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333244: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x333244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x333248: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333248u;
    {
        const bool branch_taken_0x333248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333248) {
            ctx->pc = 0x333254u;
            return;
        }
    }
    ctx->pc = 0x333250u;
    // 0x333250: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x333250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x333254u;
}
