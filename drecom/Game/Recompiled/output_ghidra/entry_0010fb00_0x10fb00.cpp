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

// Function: entry_0010fb00
// Address: 0x10fb00 - 0x10fb20
void entry_0010fb00_0x10fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb00_0x10fb00");
#endif

    switch (ctx->pc) {
        case 0x10fb10u: goto label_10fb10;
        default: break;
    }

    ctx->pc = 0x10fb00u;

    // 0x10fb00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10fb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb08: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10FB08u;
    SET_GPR_U32(ctx, 31, 0x10FB10u);
    ctx->pc = 0x10FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB08u;
    // 0x10fb0c: 0x122ac0  sll         $a1, $s2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10FB10u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FB10u) { return; }
    ctx->pc = 0x10FB10u;
label_10fb10:
    // 0x10fb10: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x10FB10u;
    {
        const bool branch_taken_0x10fb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB10u;
        // 0x10fb14: 0x3c150038  lui         $s5, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb10) {
            ctx->pc = 0x10FBA4u;
            return;
        }
    }
    ctx->pc = 0x10FB18u;
    // 0x10fb18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FB18u;
    {
        const bool branch_taken_0x10fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB18u;
        // 0x10fb1c: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb18) {
            ctx->pc = 0x10FB34u;
            return;
        }
    }
    ctx->pc = 0x10FB20u;
}
