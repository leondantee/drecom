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

// Function: entry_00119070
// Address: 0x119070 - 0x119088
void entry_00119070_0x119070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119070_0x119070");
#endif

    ctx->pc = 0x119070u;

    // 0x119070: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x119070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x119074: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119078u;
    {
        const bool branch_taken_0x119078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119078) {
            ctx->pc = 0x119088u;
            return;
        }
    }
    ctx->pc = 0x119080u;
    // 0x119080: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x119080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x119084: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x119084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    ctx->pc = 0x119088u;
}
