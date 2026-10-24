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

// Function: entry_001116e0
// Address: 0x1116e0 - 0x1116fc
void entry_001116e0_0x1116e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116e0_0x1116e0");
#endif

    ctx->pc = 0x1116e0u;

    // 0x1116e0: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x1116e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1116e4: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x1116e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1116e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1116E8u;
    {
        const bool branch_taken_0x1116e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116E8u;
        // 0x1116ec: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116e8) {
            ctx->pc = 0x1116FCu;
            return;
        }
    }
    ctx->pc = 0x1116F0u;
    // 0x1116f0: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1116f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1116f4: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x1116f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1116f8: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x1116f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    ctx->pc = 0x1116fcu;
}
