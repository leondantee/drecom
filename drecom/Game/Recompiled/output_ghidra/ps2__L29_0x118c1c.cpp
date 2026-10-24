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

// Function: $L29
// Address: 0x118c1c - 0x118c28
void ps2__L29_0x118c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L29_0x118c1c");
#endif

    ctx->pc = 0x118c1cu;

    // 0x118c1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118c20: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118C20u;
    {
        const bool branch_taken_0x118c20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x118C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C20u;
        // 0x118c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c20) {
            ctx->pc = 0x118C44u;
            return;
        }
    }
    ctx->pc = 0x118C28u;
}
