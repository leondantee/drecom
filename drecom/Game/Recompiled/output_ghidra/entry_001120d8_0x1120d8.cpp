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

// Function: entry_001120d8
// Address: 0x1120d8 - 0x1120e0
void entry_001120d8_0x1120d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001120d8_0x1120d8");
#endif

    ctx->pc = 0x1120d8u;

    // 0x1120d8: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1120D8u;
    {
        const bool branch_taken_0x1120d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120D8u;
        // 0x1120dc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120d8) {
            ctx->pc = 0x112108u;
            return;
        }
    }
    ctx->pc = 0x1120E0u;
}
