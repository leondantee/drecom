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

// Function: entry_00215c7c
// Address: 0x215c7c - 0x215c8c
void entry_00215c7c_0x215c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215c7c_0x215c7c");
#endif

    ctx->pc = 0x215c7cu;

    // 0x215c7c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215C7Cu;
    {
        const bool branch_taken_0x215c7c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x215C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C7Cu;
        // 0x215c80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c7c) {
            ctx->pc = 0x215C8Cu;
            return;
        }
    }
    ctx->pc = 0x215C84u;
    // 0x215c84: 0xc0854a6  jal         func_215298
    ctx->pc = 0x215C84u;
    SET_GPR_U32(ctx, 31, 0x215C8Cu);
    ctx->pc = 0x215C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C84u;
    // 0x215c88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x215C8Cu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215C8Cu) { return; }
    ctx->pc = 0x215C8Cu;
}
