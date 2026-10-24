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

// Function: entry_0010a414
// Address: 0x10a414 - 0x10a420
void entry_0010a414_0x10a414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a414_0x10a414");
#endif

    ctx->pc = 0x10a414u;

    // 0x10a414: 0x8c423c1c  lw          $v0, 0x3C1C($v0)
    ctx->pc = 0x10a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
    // 0x10a418: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A418u;
    {
        const bool branch_taken_0x10a418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a418) {
            ctx->pc = 0x10A41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A418u;
            // 0x10a41c: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A420u;
            return;
        }
    }
    ctx->pc = 0x10A420u;
}
