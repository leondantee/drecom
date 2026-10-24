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

// Function: entry_002179a4
// Address: 0x2179a4 - 0x2179b0
void entry_002179a4_0x2179a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002179a4_0x2179a4");
#endif

    ctx->pc = 0x2179a4u;

    // 0x2179a4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x2179a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x2179a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2179A8u;
    {
        const bool branch_taken_0x2179a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2179ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179A8u;
        // 0x2179ac: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2179a8) {
            ctx->pc = 0x2179B8u;
            return;
        }
    }
    ctx->pc = 0x2179B0u;
}
