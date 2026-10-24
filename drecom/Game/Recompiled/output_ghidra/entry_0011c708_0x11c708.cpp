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

// Function: entry_0011c708
// Address: 0x11c708 - 0x11c714
void entry_0011c708_0x11c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c708_0x11c708");
#endif

    ctx->pc = 0x11c708u;

    // 0x11c708: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C708u;
    {
        const bool branch_taken_0x11c708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C708u;
        // 0x11c70c: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c708) {
            ctx->pc = 0x11C728u;
            return;
        }
    }
    ctx->pc = 0x11C710u;
    // 0x11c710: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x11c714u;
}
