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

// Function: entry_002158e8
// Address: 0x2158e8 - 0x2158f8
void entry_002158e8_0x2158e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002158e8_0x2158e8");
#endif

    ctx->pc = 0x2158e8u;

    // 0x2158e8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2158E8u;
    {
        const bool branch_taken_0x2158e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158e8) {
            ctx->pc = 0x2158ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158E8u;
            // 0x2158ec: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215914u;
            return;
        }
    }
    ctx->pc = 0x2158F0u;
    // 0x2158f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2158f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2158f4: 0x0  nop
    ctx->pc = 0x2158f4u;
    // NOP
    ctx->pc = 0x2158f8u;
}
