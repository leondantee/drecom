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

// Function: entry_00116d0c
// Address: 0x116d0c - 0x116d14
void entry_00116d0c_0x116d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d0c_0x116d0c");
#endif

    ctx->pc = 0x116d0cu;

    // 0x116d0c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x116D0Cu;
    {
        const bool branch_taken_0x116d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D0Cu;
        // 0x116d10: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d0c) {
            ctx->pc = 0x116E4Cu;
            return;
        }
    }
    ctx->pc = 0x116D14u;
}
