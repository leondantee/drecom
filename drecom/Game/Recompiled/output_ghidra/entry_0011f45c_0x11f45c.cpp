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

// Function: entry_0011f45c
// Address: 0x11f45c - 0x11f468
void entry_0011f45c_0x11f45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f45c_0x11f45c");
#endif

    ctx->pc = 0x11f45cu;

    // 0x11f45c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x11f45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x11f460: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F460u;
    {
        const bool branch_taken_0x11f460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F460u;
        // 0x11f464: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f460) {
            ctx->pc = 0x11F474u;
            return;
        }
    }
    ctx->pc = 0x11F468u;
}
