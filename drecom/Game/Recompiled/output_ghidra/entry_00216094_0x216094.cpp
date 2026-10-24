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

// Function: entry_00216094
// Address: 0x216094 - 0x2160a8
void entry_00216094_0x216094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216094_0x216094");
#endif

    ctx->pc = 0x216094u;

    // 0x216094: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x216098: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216098u;
    {
        const bool branch_taken_0x216098 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x216098) {
            ctx->pc = 0x2160A8u;
            return;
        }
    }
    ctx->pc = 0x2160A0u;
    // 0x2160a0: 0xc0854a6  jal         func_215298
    ctx->pc = 0x2160A0u;
    SET_GPR_U32(ctx, 31, 0x2160A8u);
    ctx->pc = 0x2160A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160A0u;
    // 0x2160a4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x2160A8u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2160A8u) { return; }
    ctx->pc = 0x2160A8u;
}
