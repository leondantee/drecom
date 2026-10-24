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

// Function: entry_0011b660
// Address: 0x11b660 - 0x11b674
void entry_0011b660_0x11b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b660_0x11b660");
#endif

    ctx->pc = 0x11b660u;

    // 0x11b660: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11b664: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b668: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b66c: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x11B66Cu;
    {
        const bool branch_taken_0x11b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B66Cu;
        // 0x11b670: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b66c) {
            ctx->pc = 0x11B560u;
            return;
        }
    }
    ctx->pc = 0x11B674u;
}
