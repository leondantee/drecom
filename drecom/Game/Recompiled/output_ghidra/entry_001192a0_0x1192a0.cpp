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

// Function: entry_001192a0
// Address: 0x1192a0 - 0x1192b8
void entry_001192a0_0x1192a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192a0_0x1192a0");
#endif

    ctx->pc = 0x1192a0u;

    // 0x1192a0: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1192a4: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1192a8: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x1192a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1192ac: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1192ACu;
    {
        const bool branch_taken_0x1192ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192ACu;
        // 0x1192b0: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192ac) {
            ctx->pc = 0x1193BCu;
            return;
        }
    }
    ctx->pc = 0x1192B4u;
    // 0x1192b4: 0x0  nop
    ctx->pc = 0x1192b4u;
    // NOP
    ctx->pc = 0x1192b8u;
}
