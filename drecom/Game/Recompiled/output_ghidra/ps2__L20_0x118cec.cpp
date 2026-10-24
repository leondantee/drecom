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

// Function: $L20
// Address: 0x118cec - 0x118d08
void ps2__L20_0x118cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L20_0x118cec");
#endif

    ctx->pc = 0x118cecu;

label_118cec:
    // 0x118cec: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x118cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x118cf0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x118cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x118cf4: 0x0  nop
    ctx->pc = 0x118cf4u;
    // NOP
    // 0x118cf8: 0x0  nop
    ctx->pc = 0x118cf8u;
    // NOP
    // 0x118cfc: 0x0  nop
    ctx->pc = 0x118cfcu;
    // NOP
    // 0x118d00: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118D00u;
    {
        const bool branch_taken_0x118d00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x118D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D00u;
        // 0x118d04: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d00) {
            ctx->pc = 0x118CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118cec;
        }
    }
    ctx->pc = 0x118D08u;
}
