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

// Function: entry_00107c8c
// Address: 0x107c8c - 0x107ca0
void entry_00107c8c_0x107c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c8c_0x107c8c");
#endif

    ctx->pc = 0x107c8cu;

    // 0x107c8c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107c90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107c94: 0x8c443dac  lw          $a0, 0x3DAC($v0)
    ctx->pc = 0x107c94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DACu));
    // 0x107c98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107C98u;
    {
        const bool branch_taken_0x107c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x107C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C98u;
        // 0x107c9c: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c98) {
            ctx->pc = 0x107CA8u;
            return;
        }
    }
    ctx->pc = 0x107CA0u;
}
