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

// Function: entry_00115e1c
// Address: 0x115e1c - 0x115e40
void entry_00115e1c_0x115e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e1c_0x115e1c");
#endif

    ctx->pc = 0x115e1cu;

    // 0x115e1c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x115e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e20: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x115E20u;
    {
        const bool branch_taken_0x115e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E20u;
        // 0x115e24: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e20) {
            ctx->pc = 0x115E78u;
            return;
        }
    }
    ctx->pc = 0x115E28u;
    // 0x115e28: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x115e28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x115e2c: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x115e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x115e30: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x115e30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x115e34: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x115e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115E38u;
    {
        const bool branch_taken_0x115e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E38u;
        // 0x115e3c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e38) {
            ctx->pc = 0x115E78u;
            return;
        }
    }
    ctx->pc = 0x115E40u;
}
