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

// Function: entry_0010a3e0
// Address: 0x10a3e0 - 0x10a3f0
void entry_0010a3e0_0x10a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3e0_0x10a3e0");
#endif

    ctx->pc = 0x10a3e0u;

    // 0x10a3e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10a3e4: 0x8c423c18  lw          $v0, 0x3C18($v0)
    ctx->pc = 0x10a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C18u));
    // 0x10a3e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A3E8u;
    {
        const bool branch_taken_0x10a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a3e8) {
            ctx->pc = 0x10A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A3E8u;
            // 0x10a3ec: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3F0u;
            return;
        }
    }
    ctx->pc = 0x10A3F0u;
}
