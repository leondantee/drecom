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

// Function: entry_00101554
// Address: 0x101554 - 0x101560
void entry_00101554_0x101554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101554_0x101554");
#endif

    ctx->pc = 0x101554u;

    // 0x101554: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x101554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x101558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101558u;
    {
        const bool branch_taken_0x101558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101558u;
        // 0x10155c: 0x2484c398  addiu       $a0, $a0, -0x3C68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101558) {
            ctx->pc = 0x101568u;
            return;
        }
    }
    ctx->pc = 0x101560u;
}
