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

// Function: entry_0011f900
// Address: 0x11f900 - 0x11f90c
void entry_0011f900_0x11f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f900_0x11f900");
#endif

    ctx->pc = 0x11f900u;

    // 0x11f900: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11f904: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11F904u;
    {
        const bool branch_taken_0x11f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F904u;
        // 0x11f908: 0x24446818  addiu       $a0, $v0, 0x6818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f904) {
            ctx->pc = 0x11FA5Cu;
            return;
        }
    }
    ctx->pc = 0x11F90Cu;
}
