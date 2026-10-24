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

// Function: entry_0011a79c
// Address: 0x11a79c - 0x11a7b4
void entry_0011a79c_0x11a79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a79c_0x11a79c");
#endif

    ctx->pc = 0x11a79cu;

    // 0x11a79c: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x11a79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11a7a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A7A0u;
    {
        const bool branch_taken_0x11a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7A0u;
        // 0x11a7a4: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7a0) {
            ctx->pc = 0x11A7C8u;
            return;
        }
    }
    ctx->pc = 0x11A7A8u;
    // 0x11a7a8: 0xb3001b  divu        $zero, $a1, $s3
    ctx->pc = 0x11a7a8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x11a7ac: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A7ACu;
    {
        const bool branch_taken_0x11a7ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a7ac) {
            ctx->pc = 0x11A7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A7ACu;
            // 0x11a7b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A7B4u;
            return;
        }
    }
    ctx->pc = 0x11A7B4u;
}
