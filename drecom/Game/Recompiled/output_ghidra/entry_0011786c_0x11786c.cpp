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

// Function: entry_0011786c
// Address: 0x11786c - 0x117880
void entry_0011786c_0x11786c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011786c_0x11786c");
#endif

    ctx->pc = 0x11786cu;

    // 0x11786c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x11786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x117870: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x117870u;
    {
        const bool branch_taken_0x117870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117870u;
        // 0x117874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117870) {
            ctx->pc = 0x1178ECu;
            return;
        }
    }
    ctx->pc = 0x117878u;
    // 0x117878: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x117878u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11787c: 0x0  nop
    ctx->pc = 0x11787cu;
    // NOP
    ctx->pc = 0x117880u;
}
