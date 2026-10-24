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

// Function: entry_00113504
// Address: 0x113504 - 0x113520
void entry_00113504_0x113504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113504_0x113504");
#endif

    ctx->pc = 0x113504u;

    // 0x113504: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x113504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113508: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x113508u;
    {
        const bool branch_taken_0x113508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113508u;
        // 0x11350c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113508) {
            ctx->pc = 0x113550u;
            return;
        }
    }
    ctx->pc = 0x113510u;
    // 0x113510: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x113510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113514: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x113518: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x113518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11351c: 0x0  nop
    ctx->pc = 0x11351cu;
    // NOP
    ctx->pc = 0x113520u;
}
