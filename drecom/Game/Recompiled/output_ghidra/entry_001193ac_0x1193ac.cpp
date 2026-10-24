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

// Function: entry_001193ac
// Address: 0x1193ac - 0x1193bc
void entry_001193ac_0x1193ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001193ac_0x1193ac");
#endif

    ctx->pc = 0x1193acu;

    // 0x1193ac: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1193acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193b0: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x1193b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1193b4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1193B4u;
    {
        const bool branch_taken_0x1193b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193B4u;
        // 0x1193b8: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193b4) {
            ctx->pc = 0x1192B8u;
            return;
        }
    }
    ctx->pc = 0x1193BCu;
}
