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

// Function: entry_0011f8f0
// Address: 0x11f8f0 - 0x11f900
void entry_0011f8f0_0x11f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f8f0_0x11f8f0");
#endif

    ctx->pc = 0x11f8f0u;

    // 0x11f8f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F8F0u;
    {
        const bool branch_taken_0x11f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F0u;
        // 0x11f8f4: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f0) {
            ctx->pc = 0x11F90Cu;
            return;
        }
    }
    ctx->pc = 0x11F8F8u;
    // 0x11f8f8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F8F8u;
    {
        const bool branch_taken_0x11f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F8u;
        // 0x11f8fc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f8) {
            ctx->pc = 0x11F93Cu;
            return;
        }
    }
    ctx->pc = 0x11F900u;
}
