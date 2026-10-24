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

// Function: entry_00217d0c
// Address: 0x217d0c - 0x217d18
void entry_00217d0c_0x217d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217d0c_0x217d0c");
#endif

    ctx->pc = 0x217d0cu;

    // 0x217d0c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x217d0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217d10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x217D10u;
    {
        const bool branch_taken_0x217d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D10u;
        // 0x217d14: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d10) {
            ctx->pc = 0x217D34u;
            return;
        }
    }
    ctx->pc = 0x217D18u;
}
