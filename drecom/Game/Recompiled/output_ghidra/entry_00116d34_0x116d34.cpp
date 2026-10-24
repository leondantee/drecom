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

// Function: entry_00116d34
// Address: 0x116d34 - 0x116d3c
void entry_00116d34_0x116d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d34_0x116d34");
#endif

    ctx->pc = 0x116d34u;

    // 0x116d34: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x116D34u;
    {
        const bool branch_taken_0x116d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D34u;
        // 0x116d38: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d34) {
            ctx->pc = 0x116E4Cu;
            return;
        }
    }
    ctx->pc = 0x116D3Cu;
}
