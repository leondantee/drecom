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

// Function: entry_00217a28
// Address: 0x217a28 - 0x217a40
void entry_00217a28_0x217a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217a28_0x217a28");
#endif

    ctx->pc = 0x217a28u;

    // 0x217a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217a2c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217A2Cu;
    {
        const bool branch_taken_0x217a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A2Cu;
        // 0x217a30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a2c) {
            ctx->pc = 0x217A40u;
            return;
        }
    }
    ctx->pc = 0x217A34u;
    // 0x217a34: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x217a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217a38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x217A38u;
    {
        const bool branch_taken_0x217a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A38u;
        // 0x217a3c: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a38) {
            ctx->pc = 0x217A58u;
            return;
        }
    }
    ctx->pc = 0x217A40u;
}
