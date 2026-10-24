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

// Function: entry_001199cc
// Address: 0x1199cc - 0x1199e0
void entry_001199cc_0x1199cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001199cc_0x1199cc");
#endif

    ctx->pc = 0x1199ccu;

    // 0x1199cc: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1199ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1199d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1199D0u;
    {
        const bool branch_taken_0x1199d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D0u;
        // 0x1199d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d0) {
            ctx->pc = 0x1199E0u;
            return;
        }
    }
    ctx->pc = 0x1199D8u;
    // 0x1199d8: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1199dc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1199e0u;
}
