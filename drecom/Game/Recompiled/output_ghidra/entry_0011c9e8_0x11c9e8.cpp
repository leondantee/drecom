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

// Function: entry_0011c9e8
// Address: 0x11c9e8 - 0x11ca10
void entry_0011c9e8_0x11c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c9e8_0x11c9e8");
#endif

    ctx->pc = 0x11c9e8u;

label_11c9e8:
    // 0x11c9e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x11c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11c9ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x11c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x11c9f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11c9f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11c9f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9fc: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x11c9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x11ca00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11CA00u;
    {
        const bool branch_taken_0x11ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ca00) {
            ctx->pc = 0x11C9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c9e8;
        }
    }
    ctx->pc = 0x11CA08u;
    // 0x11ca08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11CA08u;
    {
        const bool branch_taken_0x11ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA08u;
        // 0x11ca0c: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca08) {
            ctx->pc = 0x11CA18u;
            return;
        }
    }
    ctx->pc = 0x11CA10u;
}
