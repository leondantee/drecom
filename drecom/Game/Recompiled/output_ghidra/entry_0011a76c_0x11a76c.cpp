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

// Function: entry_0011a76c
// Address: 0x11a76c - 0x11a784
void entry_0011a76c_0x11a76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a76c_0x11a76c");
#endif

    ctx->pc = 0x11a76cu;

    // 0x11a76c: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x11a76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11a770: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11A770u;
    {
        const bool branch_taken_0x11a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a770) {
            ctx->pc = 0x11A774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A770u;
            // 0x11a774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A79Cu;
            return;
        }
    }
    ctx->pc = 0x11A778u;
    // 0x11a778: 0xb3001b  divu        $zero, $a1, $s3
    ctx->pc = 0x11a778u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x11a77c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A77Cu;
    {
        const bool branch_taken_0x11a77c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a77c) {
            ctx->pc = 0x11A780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A77Cu;
            // 0x11a780: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A784u;
            return;
        }
    }
    ctx->pc = 0x11A784u;
}
