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

// Function: entry_00215c6c
// Address: 0x215c6c - 0x215c7c
void entry_00215c6c_0x215c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215c6c_0x215c6c");
#endif

    ctx->pc = 0x215c6cu;

    // 0x215c6c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x215C6Cu;
    {
        const bool branch_taken_0x215c6c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x215C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C6Cu;
        // 0x215c70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c6c) {
            ctx->pc = 0x215C7Cu;
            return;
        }
    }
    ctx->pc = 0x215C74u;
    // 0x215c74: 0xc0854a6  jal         func_215298
    ctx->pc = 0x215C74u;
    SET_GPR_U32(ctx, 31, 0x215C7Cu);
    ctx->pc = 0x215C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C74u;
    // 0x215c78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x215C7Cu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215C7Cu) { return; }
    ctx->pc = 0x215C7Cu;
}
