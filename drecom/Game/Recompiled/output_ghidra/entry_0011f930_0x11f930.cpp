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

// Function: entry_0011f930
// Address: 0x11f930 - 0x11f93c
void entry_0011f930_0x11f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f930_0x11f930");
#endif

    ctx->pc = 0x11f930u;

    // 0x11f930: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F930u;
    {
        const bool branch_taken_0x11f930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F930u;
        // 0x11f934: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f930) {
            ctx->pc = 0x11F954u;
            return;
        }
    }
    ctx->pc = 0x11F938u;
    // 0x11f938: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x11f93cu;
}
