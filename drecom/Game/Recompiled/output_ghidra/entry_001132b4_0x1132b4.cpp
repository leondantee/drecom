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

// Function: entry_001132b4
// Address: 0x1132b4 - 0x1132c4
void entry_001132b4_0x1132b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132b4_0x1132b4");
#endif

    ctx->pc = 0x1132b4u;

    // 0x1132b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1132b8: 0x681ffd9  bgez        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1132B8u;
    {
        const bool branch_taken_0x1132b8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1132BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132B8u;
        // 0x1132bc: 0xfc560000  sd          $s6, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132b8) {
            ctx->pc = 0x113220u;
            return;
        }
    }
    ctx->pc = 0x1132C0u;
    // 0x1132c0: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x1132c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    ctx->pc = 0x1132c4u;
}
