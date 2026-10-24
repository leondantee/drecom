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

// Function: entry_00105ec4
// Address: 0x105ec4 - 0x105ed8
void entry_00105ec4_0x105ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ec4_0x105ec4");
#endif

    ctx->pc = 0x105ec4u;

    // 0x105ec4: 0x56170015  bnel        $s0, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x105EC4u;
    {
        const bool branch_taken_0x105ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x105ec4) {
            ctx->pc = 0x105EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105EC4u;
            // 0x105ec8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F1Cu;
            return;
        }
    }
    ctx->pc = 0x105ECCu;
    // 0x105ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105ed0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x105ED0u;
    {
        const bool branch_taken_0x105ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ED0u;
        // 0x105ed4: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ed0) {
            ctx->pc = 0x105F20u;
            return;
        }
    }
    ctx->pc = 0x105ED8u;
}
