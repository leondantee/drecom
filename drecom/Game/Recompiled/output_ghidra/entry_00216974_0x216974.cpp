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

// Function: entry_00216974
// Address: 0x216974 - 0x216990
void entry_00216974_0x216974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216974_0x216974");
#endif

    ctx->pc = 0x216974u;

    // 0x216974: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x216974u;
    {
        const bool branch_taken_0x216974 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x216974) {
            ctx->pc = 0x2169B0u;
            return;
        }
    }
    ctx->pc = 0x21697Cu;
    // 0x21697c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x216980: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x216980u;
    {
        const bool branch_taken_0x216980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216980u;
        // 0x216984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216980) {
            ctx->pc = 0x2169B0u;
            return;
        }
    }
    ctx->pc = 0x216988u;
    // 0x216988: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x216988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x21698c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x21698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    ctx->pc = 0x216990u;
}
