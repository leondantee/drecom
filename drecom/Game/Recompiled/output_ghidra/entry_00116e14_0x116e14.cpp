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

// Function: entry_00116e14
// Address: 0x116e14 - 0x116e30
void entry_00116e14_0x116e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e14_0x116e14");
#endif

    ctx->pc = 0x116e14u;

    // 0x116e14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x116e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116e18: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x116e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x116e1c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x116e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x116e20: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x116e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x116e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116E24u;
    {
        const bool branch_taken_0x116e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E24u;
        // 0x116e28: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e24) {
            ctx->pc = 0x116E50u;
            return;
        }
    }
    ctx->pc = 0x116E2Cu;
    // 0x116e2c: 0x0  nop
    ctx->pc = 0x116e2cu;
    // NOP
    ctx->pc = 0x116e30u;
}
