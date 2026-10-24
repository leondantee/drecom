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

// Function: entry_00119740
// Address: 0x119740 - 0x119758
void entry_00119740_0x119740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119740_0x119740");
#endif

    ctx->pc = 0x119740u;

    // 0x119740: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119740u;
    {
        const bool branch_taken_0x119740 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119740u;
        // 0x119744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119740) {
            ctx->pc = 0x119758u;
            return;
        }
    }
    ctx->pc = 0x119748u;
    // 0x119748: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x119748u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11974c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119750: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x119750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119754: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x119754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119758u;
}
