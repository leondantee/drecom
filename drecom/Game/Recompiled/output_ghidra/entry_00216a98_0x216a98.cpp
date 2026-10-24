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

// Function: entry_00216a98
// Address: 0x216a98 - 0x216ab4
void entry_00216a98_0x216a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216a98_0x216a98");
#endif

    switch (ctx->pc) {
        case 0x216ab0u: goto label_216ab0;
        default: break;
    }

    ctx->pc = 0x216a98u;

    // 0x216a98: 0x761024  and         $v0, $v1, $s6
    ctx->pc = 0x216a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x216a9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216A9Cu;
    {
        const bool branch_taken_0x216a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A9Cu;
        // 0x216aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a9c) {
            ctx->pc = 0x216AB4u;
            return;
        }
    }
    ctx->pc = 0x216AA4u;
    // 0x216aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216aa8: 0xc0854a6  jal         func_215298
    ctx->pc = 0x216AA8u;
    SET_GPR_U32(ctx, 31, 0x216AB0u);
    ctx->pc = 0x216AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AA8u;
    // 0x216aac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x216AB0u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216AB0u) { return; }
    ctx->pc = 0x216AB0u;
label_216ab0:
    // 0x216ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216ab4u;
}
