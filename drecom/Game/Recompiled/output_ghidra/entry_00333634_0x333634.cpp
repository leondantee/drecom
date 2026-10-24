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

// Function: entry_00333634
// Address: 0x333634 - 0x333660
void entry_00333634_0x333634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333634_0x333634");
#endif

    ctx->pc = 0x333634u;

    // 0x333634: 0x26160620  addiu       $s6, $s0, 0x620
    ctx->pc = 0x333634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x333638: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x333638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x33363c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x33363cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x333640: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x333640u;
    {
        const bool branch_taken_0x333640 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x333640) {
            ctx->pc = 0x3336B0u;
            return;
        }
    }
    ctx->pc = 0x333648u;
    // 0x333648: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33364c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x33364cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x333650: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x333650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x333654: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333654u;
    {
        const bool branch_taken_0x333654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333654) {
            ctx->pc = 0x333660u;
            return;
        }
    }
    ctx->pc = 0x33365Cu;
    // 0x33365c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x33365cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x333660u;
}
