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

// Function: entry_001182a0
// Address: 0x1182a0 - 0x1182ac
void entry_001182a0_0x1182a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182a0_0x1182a0");
#endif

    ctx->pc = 0x1182a0u;

    // 0x1182a0: 0x4e1014b  bgez        $a3, . + 4 + (0x14B << 2)
    ctx->pc = 0x1182A0u;
    {
        const bool branch_taken_0x1182a0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1182A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182A0u;
        // 0x1182a4: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182a0) {
            ctx->pc = 0x1187D0u;
            return;
        }
    }
    ctx->pc = 0x1182A8u;
    // 0x1182a8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1182a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1182acu;
}
