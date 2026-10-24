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

// Function: entry_002131ec
// Address: 0x2131ec - 0x213200
void entry_002131ec_0x2131ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002131ec_0x2131ec");
#endif

    ctx->pc = 0x2131ecu;

    // 0x2131ec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2131ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2131f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2131f4: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2131F4u;
    {
        const bool branch_taken_0x2131f4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131F4u;
        // 0x2131f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131f4) {
            ctx->pc = 0x2131D0u;
            return;
        }
    }
    ctx->pc = 0x2131FCu;
    // 0x2131fc: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2131fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x213200u;
}
