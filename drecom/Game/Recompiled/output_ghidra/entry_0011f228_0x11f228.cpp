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

// Function: entry_0011f228
// Address: 0x11f228 - 0x11f240
void entry_0011f228_0x11f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f228_0x11f228");
#endif

    ctx->pc = 0x11f228u;

    // 0x11f228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F228u;
    {
        const bool branch_taken_0x11f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F228u;
        // 0x11f22c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f228) {
            ctx->pc = 0x11F240u;
            return;
        }
    }
    ctx->pc = 0x11F230u;
    // 0x11f230: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F230u;
    {
        const bool branch_taken_0x11f230 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F230u;
        // 0x11f234: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f230) {
            ctx->pc = 0x11F220u;
            return;
        }
    }
    ctx->pc = 0x11F238u;
    // 0x11f238: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F238u;
    {
        const bool branch_taken_0x11f238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F238u;
        // 0x11f23c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f238) {
            ctx->pc = 0x11F258u;
            return;
        }
    }
    ctx->pc = 0x11F240u;
}
