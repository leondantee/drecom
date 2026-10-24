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

// Function: entry_00112e28
// Address: 0x112e28 - 0x112e40
void entry_00112e28_0x112e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e28_0x112e28");
#endif

    ctx->pc = 0x112e28u;

    // 0x112e28: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E28u;
    {
        const bool branch_taken_0x112e28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x112E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E28u;
        // 0x112e2c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e28) {
            ctx->pc = 0x112E40u;
            return;
        }
    }
    ctx->pc = 0x112E30u;
    // 0x112e30: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E30u;
    {
        const bool branch_taken_0x112e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E30u;
        // 0x112e34: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e30) {
            ctx->pc = 0x112E48u;
            return;
        }
    }
    ctx->pc = 0x112E38u;
    // 0x112e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x112E38u;
    {
        const bool branch_taken_0x112e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E38u;
        // 0x112e3c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e38) {
            ctx->pc = 0x112E44u;
            return;
        }
    }
    ctx->pc = 0x112E40u;
}
