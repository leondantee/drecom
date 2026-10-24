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

// Function: entry_0011f2e4
// Address: 0x11f2e4 - 0x11f2f0
void entry_0011f2e4_0x11f2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f2e4_0x11f2e4");
#endif

    ctx->pc = 0x11f2e4u;

    // 0x11f2e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11f2e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11F2E8u;
    {
        const bool branch_taken_0x11f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E8u;
        // 0x11f2ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2e8) {
            ctx->pc = 0x11F31Cu;
            return;
        }
    }
    ctx->pc = 0x11F2F0u;
}
