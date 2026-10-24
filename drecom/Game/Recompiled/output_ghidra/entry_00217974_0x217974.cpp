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

// Function: entry_00217974
// Address: 0x217974 - 0x217988
void entry_00217974_0x217974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217974_0x217974");
#endif

    ctx->pc = 0x217974u;

    // 0x217974: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217974u;
    {
        const bool branch_taken_0x217974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217974u;
        // 0x217978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217974) {
            ctx->pc = 0x217988u;
            return;
        }
    }
    ctx->pc = 0x21797Cu;
    // 0x21797c: 0x9222ccc0  lbu         $v0, -0x3340($s1)
    ctx->pc = 0x21797cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x217980: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x217980u;
    {
        const bool branch_taken_0x217980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217980u;
        // 0x217984: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217980) {
            ctx->pc = 0x2179B4u;
            return;
        }
    }
    ctx->pc = 0x217988u;
}
