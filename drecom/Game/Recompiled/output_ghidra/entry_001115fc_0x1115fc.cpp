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

// Function: entry_001115fc
// Address: 0x1115fc - 0x111610
void entry_001115fc_0x1115fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115fc_0x1115fc");
#endif

    ctx->pc = 0x1115fcu;

    // 0x1115fc: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1115FCu;
    {
        const bool branch_taken_0x1115fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x111600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115FCu;
        // 0x111600: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115fc) {
            ctx->pc = 0x111680u;
            return;
        }
    }
    ctx->pc = 0x111604u;
    // 0x111604: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x111604u;
    {
        const bool branch_taken_0x111604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x111608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111604u;
        // 0x111608: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111604) {
            ctx->pc = 0x111630u;
            return;
        }
    }
    ctx->pc = 0x11160Cu;
    // 0x11160c: 0x0  nop
    ctx->pc = 0x11160cu;
    // NOP
    ctx->pc = 0x111610u;
}
