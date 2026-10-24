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

// Function: entry_00117068
// Address: 0x117068 - 0x117070
void entry_00117068_0x117068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117068_0x117068");
#endif

    ctx->pc = 0x117068u;

    // 0x117068: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x117068u;
    {
        const bool branch_taken_0x117068 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117068u;
        // 0x11706c: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117068) {
            ctx->pc = 0x117098u;
            return;
        }
    }
    ctx->pc = 0x117070u;
}
