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

// Function: entry_001178ec
// Address: 0x1178ec - 0x117900
void entry_001178ec_0x1178ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001178ec_0x1178ec");
#endif

    ctx->pc = 0x1178ecu;

    // 0x1178ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1178ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1178f0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1178F0u;
    {
        const bool branch_taken_0x1178f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178F0u;
        // 0x1178f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178f0) {
            ctx->pc = 0x117A40u;
            return;
        }
    }
    ctx->pc = 0x1178F8u;
    // 0x1178f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1178F8u;
    {
        const bool branch_taken_0x1178f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1178f8) {
            ctx->pc = 0x117904u;
            return;
        }
    }
    ctx->pc = 0x117900u;
}
