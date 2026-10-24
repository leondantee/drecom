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

// Function: entry_00116d28
// Address: 0x116d28 - 0x116d34
void entry_00116d28_0x116d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d28_0x116d28");
#endif

    ctx->pc = 0x116d28u;

    // 0x116d28: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116d28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116d2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x116D2Cu;
    {
        const bool branch_taken_0x116d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D2Cu;
        // 0x116d30: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d2c) {
            ctx->pc = 0x116DE0u;
            return;
        }
    }
    ctx->pc = 0x116D34u;
}
