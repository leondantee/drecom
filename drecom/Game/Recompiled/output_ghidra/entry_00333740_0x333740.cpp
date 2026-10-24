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

// Function: entry_00333740
// Address: 0x333740 - 0x333758
void entry_00333740_0x333740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333740_0x333740");
#endif

    ctx->pc = 0x333740u;

    // 0x333740: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x333740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x333744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333748: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x333748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33374c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33374Cu;
    {
        const bool branch_taken_0x33374c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33374c) {
            ctx->pc = 0x333758u;
            return;
        }
    }
    ctx->pc = 0x333754u;
    // 0x333754: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x333754u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x333758u;
}
