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

// Function: entry_0010fc0c
// Address: 0x10fc0c - 0x10fc28
void entry_0010fc0c_0x10fc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc0c_0x10fc0c");
#endif

    ctx->pc = 0x10fc0cu;

    // 0x10fc0c: 0x8c4445a8  lw          $a0, 0x45A8($v0)
    ctx->pc = 0x10fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17832)));
    // 0x10fc10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fc14: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FC14u;
    {
        const bool branch_taken_0x10fc14 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC14u;
        // 0x10fc18: 0xac6045f0  sw          $zero, 0x45F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc14) {
            ctx->pc = 0x10FC28u;
            return;
        }
    }
    ctx->pc = 0x10FC1Cu;
    // 0x10fc1c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fc20: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FC20u;
    SET_GPR_U32(ctx, 31, 0x10FC28u);
    ctx->pc = 0x10FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC20u;
    // 0x10fc24: 0x2484cf88  addiu       $a0, $a0, -0x3078 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FC28u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FC28u) { return; }
    ctx->pc = 0x10FC28u;
}
