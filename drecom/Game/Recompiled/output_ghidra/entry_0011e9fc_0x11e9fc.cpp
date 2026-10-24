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

// Function: entry_0011e9fc
// Address: 0x11e9fc - 0x11ea14
void entry_0011e9fc_0x11e9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e9fc_0x11e9fc");
#endif

    ctx->pc = 0x11e9fcu;

    // 0x11e9fc: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11ea00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EA00u;
    {
        const bool branch_taken_0x11ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA00u;
        // 0x11ea04: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea00) {
            ctx->pc = 0x11EA14u;
            return;
        }
    }
    ctx->pc = 0x11EA08u;
    // 0x11ea08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ea08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EA0Cu;
    {
        const bool branch_taken_0x11ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA0Cu;
        // 0x11ea10: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea0c) {
            ctx->pc = 0x11EA20u;
            return;
        }
    }
    ctx->pc = 0x11EA14u;
}
