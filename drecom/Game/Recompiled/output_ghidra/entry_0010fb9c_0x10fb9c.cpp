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

// Function: entry_0010fb9c
// Address: 0x10fb9c - 0x10fba4
void entry_0010fb9c_0x10fb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb9c_0x10fb9c");
#endif

    ctx->pc = 0x10fb9cu;

    // 0x10fb9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FB9Cu;
    {
        const bool branch_taken_0x10fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB9Cu;
        // 0x10fba0: 0xafd60000  sw          $s6, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb9c) {
            ctx->pc = 0x10FBCCu;
            return;
        }
    }
    ctx->pc = 0x10FBA4u;
}
