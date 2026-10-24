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

// Function: entry_0010a3f0
// Address: 0x10a3f0 - 0x10a400
void entry_0010a3f0_0x10a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3f0_0x10a3f0");
#endif

    ctx->pc = 0x10a3f0u;

    // 0x10a3f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10a3f4: 0x8c423c04  lw          $v0, 0x3C04($v0)
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C04u));
    // 0x10a3f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A3F8u;
    {
        const bool branch_taken_0x10a3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a3f8) {
            ctx->pc = 0x10A3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A3F8u;
            // 0x10a3fc: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A400u;
            return;
        }
    }
    ctx->pc = 0x10A400u;
}
