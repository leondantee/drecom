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

// Function: entry_001127e0
// Address: 0x1127e0 - 0x112800
void entry_001127e0_0x1127e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001127e0_0x1127e0");
#endif

    ctx->pc = 0x1127e0u;

    // 0x1127e0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1127e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1127e4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1127e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1127e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1127E8u;
    {
        const bool branch_taken_0x1127e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127e8) {
            ctx->pc = 0x1127ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127E8u;
            // 0x1127ec: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112800u;
            return;
        }
    }
    ctx->pc = 0x1127F0u;
    // 0x1127f0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1127f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1127f4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1127f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1127f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1127f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1127fc: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x1127fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x112800u;
}
