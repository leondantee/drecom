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

// Function: entry_0011f468
// Address: 0x11f468 - 0x11f474
void entry_0011f468_0x11f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f468_0x11f468");
#endif

    ctx->pc = 0x11f468u;

    // 0x11f468: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x11f468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f46c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11F46Cu;
    {
        const bool branch_taken_0x11f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F46Cu;
        // 0x11f470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f46c) {
            ctx->pc = 0x11F4A4u;
            return;
        }
    }
    ctx->pc = 0x11F474u;
}
