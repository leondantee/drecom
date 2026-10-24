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

// Function: entry_00117cc4
// Address: 0x117cc4 - 0x117cd0
void entry_00117cc4_0x117cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117cc4_0x117cc4");
#endif

    ctx->pc = 0x117cc4u;

    // 0x117cc4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x117cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x117cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117CC8u;
    {
        const bool branch_taken_0x117cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CC8u;
        // 0x117ccc: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cc8) {
            ctx->pc = 0x117CD4u;
            return;
        }
    }
    ctx->pc = 0x117CD0u;
}
