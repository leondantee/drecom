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

// Function: entry_001140cc
// Address: 0x1140cc - 0x1140d8
void entry_001140cc_0x1140cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001140cc_0x1140cc");
#endif

    ctx->pc = 0x1140ccu;

    // 0x1140cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1140CCu;
    {
        const bool branch_taken_0x1140cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1140D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140CCu;
        // 0x1140d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140cc) {
            ctx->pc = 0x1140F8u;
            return;
        }
    }
    ctx->pc = 0x1140D4u;
    // 0x1140d4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1140d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x1140d8u;
}
