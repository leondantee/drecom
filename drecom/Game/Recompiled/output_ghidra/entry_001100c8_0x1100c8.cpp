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

// Function: entry_001100c8
// Address: 0x1100c8 - 0x1100d4
void entry_001100c8_0x1100c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001100c8_0x1100c8");
#endif

    switch (ctx->pc) {
        case 0x1100d0u: goto label_1100d0;
        default: break;
    }

    ctx->pc = 0x1100c8u;

    // 0x1100c8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1100C8u;
    SET_GPR_U32(ctx, 31, 0x1100D0u);
    ctx->pc = 0x1100CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100C8u;
    // 0x1100cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1100D0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1100D0u) { return; }
    ctx->pc = 0x1100D0u;
label_1100d0:
    // 0x1100d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1100D0u;
    {
        const bool branch_taken_0x1100d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1100d0) {
            ctx->pc = 0x1100D8u;
            return;
        }
    }
    ctx->pc = 0x1100D8u;
}
