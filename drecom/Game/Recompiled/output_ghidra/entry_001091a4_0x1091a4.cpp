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

// Function: entry_001091a4
// Address: 0x1091a4 - 0x1091ac
void entry_001091a4_0x1091a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091a4_0x1091a4");
#endif

    ctx->pc = 0x1091a4u;

    // 0x1091a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1091A4u;
    {
        const bool branch_taken_0x1091a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091A4u;
        // 0x1091a8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091a4) {
            ctx->pc = 0x1091B0u;
            return;
        }
    }
    ctx->pc = 0x1091ACu;
}
