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

// Function: entry_0011fe30
// Address: 0x11fe30 - 0x11fe48
void entry_0011fe30_0x11fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe30_0x11fe30");
#endif

    ctx->pc = 0x11fe30u;

    // 0x11fe30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FE30u;
    {
        const bool branch_taken_0x11fe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE30u;
        // 0x11fe34: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe30) {
            ctx->pc = 0x11FE48u;
            return;
        }
    }
    ctx->pc = 0x11FE38u;
    // 0x11fe38: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11FE38u;
    {
        const bool branch_taken_0x11fe38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE38u;
        // 0x11fe3c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe38) {
            ctx->pc = 0x11FE28u;
            return;
        }
    }
    ctx->pc = 0x11FE40u;
    // 0x11fe40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE40u;
    {
        const bool branch_taken_0x11fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE40u;
        // 0x11fe44: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe40) {
            ctx->pc = 0x11FE60u;
            return;
        }
    }
    ctx->pc = 0x11FE48u;
}
