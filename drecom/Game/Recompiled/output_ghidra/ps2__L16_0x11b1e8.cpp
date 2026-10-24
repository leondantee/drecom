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

// Function: $L16
// Address: 0x11b1e8 - 0x11b204
void ps2__L16_0x11b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L16_0x11b1e8");
#endif

    ctx->pc = 0x11b1e8u;

label_11b1e8:
    // 0x11b1e8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x11b1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b1ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x11b1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b1f4: 0x0  nop
    ctx->pc = 0x11b1f4u;
    // NOP
    // 0x11b1f8: 0x0  nop
    ctx->pc = 0x11b1f8u;
    // NOP
    // 0x11b1fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B1FCu;
    {
        const bool branch_taken_0x11b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1FCu;
        // 0x11b200: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1fc) {
            ctx->pc = 0x11B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b1e8;
        }
    }
    ctx->pc = 0x11B204u;
}
