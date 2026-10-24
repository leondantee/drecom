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

// Function: entry_00116750
// Address: 0x116750 - 0x116760
void entry_00116750_0x116750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116750_0x116750");
#endif

    ctx->pc = 0x116750u;

    // 0x116750: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x116750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116754: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116754u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116758: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x116758u;
    {
        const bool branch_taken_0x116758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116758u;
        // 0x11675c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116758) {
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x116760u;
}
