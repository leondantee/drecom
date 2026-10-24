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

// Function: entry_001026a0
// Address: 0x1026a0 - 0x1026b0
void entry_001026a0_0x1026a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001026a0_0x1026a0");
#endif

    ctx->pc = 0x1026a0u;

    // 0x1026a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1026a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1026a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1026a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1026a8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1026A8u;
    {
        const bool branch_taken_0x1026a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1026ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026A8u;
        // 0x1026ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026a8) {
            ctx->pc = 0x102658u;
            return;
        }
    }
    ctx->pc = 0x1026B0u;
}
