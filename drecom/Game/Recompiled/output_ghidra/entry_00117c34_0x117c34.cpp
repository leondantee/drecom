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

// Function: entry_00117c34
// Address: 0x117c34 - 0x117c3c
void entry_00117c34_0x117c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117c34_0x117c34");
#endif

    ctx->pc = 0x117c34u;

    // 0x117c34: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117C34u;
    {
        const bool branch_taken_0x117c34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x117C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C34u;
        // 0x117c38: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c34) {
            ctx->pc = 0x117C18u;
            return;
        }
    }
    ctx->pc = 0x117C3Cu;
}
