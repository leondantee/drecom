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

// Function: entry_001138c0
// Address: 0x1138c0 - 0x1138dc
void entry_001138c0_0x1138c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001138c0_0x1138c0");
#endif

    ctx->pc = 0x1138c0u;

    // 0x1138c0: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x1138c4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1138c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1138c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1138C8u;
    {
        const bool branch_taken_0x1138c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138C8u;
        // 0x1138cc: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138c8) {
            ctx->pc = 0x1138DCu;
            return;
        }
    }
    ctx->pc = 0x1138D0u;
    // 0x1138d0: 0x3c023e90  lui         $v0, 0x3E90
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16016 << 16));
    // 0x1138d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1138D4u;
    {
        const bool branch_taken_0x1138d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1138d4) {
            ctx->pc = 0x1138E0u;
            return;
        }
    }
    ctx->pc = 0x1138DCu;
}
