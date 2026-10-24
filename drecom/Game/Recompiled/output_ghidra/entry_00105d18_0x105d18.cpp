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

// Function: entry_00105d18
// Address: 0x105d18 - 0x105d38
void entry_00105d18_0x105d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d18_0x105d18");
#endif

    ctx->pc = 0x105d18u;

    // 0x105d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105d1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105d20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x105d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x105d24: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x105d28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x105d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x105d2c: 0x18c00002  blez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D2Cu;
    {
        const bool branch_taken_0x105d2c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D2Cu;
        // 0x105d30: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d2c) {
            ctx->pc = 0x105D38u;
            return;
        }
    }
    ctx->pc = 0x105D34u;
    // 0x105d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x105d38u;
}
