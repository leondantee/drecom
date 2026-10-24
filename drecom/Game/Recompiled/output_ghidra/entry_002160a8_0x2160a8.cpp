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

// Function: entry_002160a8
// Address: 0x2160a8 - 0x2160b8
void entry_002160a8_0x2160a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002160a8_0x2160a8");
#endif

    ctx->pc = 0x2160a8u;

    // 0x2160a8: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2160A8u;
    {
        const bool branch_taken_0x2160a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2160ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160A8u;
        // 0x2160ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160a8) {
            ctx->pc = 0x2160B8u;
            return;
        }
    }
    ctx->pc = 0x2160B0u;
    // 0x2160b0: 0xc0854a6  jal         func_215298
    ctx->pc = 0x2160B0u;
    SET_GPR_U32(ctx, 31, 0x2160B8u);
    ctx->pc = 0x2160B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160B0u;
    // 0x2160b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x2160B8u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2160B8u) { return; }
    ctx->pc = 0x2160B8u;
}
