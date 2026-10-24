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

// Function: entry_002148cc
// Address: 0x2148cc - 0x2148d8
void entry_002148cc_0x2148cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002148cc_0x2148cc");
#endif

    ctx->pc = 0x2148ccu;

    // 0x2148cc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2148CCu;
    {
        const bool branch_taken_0x2148cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148CCu;
        // 0x2148d0: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148cc) {
            ctx->pc = 0x2148D8u;
            return;
        }
    }
    ctx->pc = 0x2148D4u;
    // 0x2148d4: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x2148d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    ctx->pc = 0x2148d8u;
}
