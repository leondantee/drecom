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

// Function: entry_0021705c
// Address: 0x21705c - 0x217068
void entry_0021705c_0x21705c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021705c_0x21705c");
#endif

    switch (ctx->pc) {
        case 0x217064u: goto label_217064;
        default: break;
    }

    ctx->pc = 0x21705cu;

    // 0x21705c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x21705Cu;
    SET_GPR_U32(ctx, 31, 0x217064u);
    ctx->pc = 0x217060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21705Cu;
    // 0x217060: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217064u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217064u) { return; }
    ctx->pc = 0x217064u;
label_217064:
    // 0x217064: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x217064u;
    {
        const bool branch_taken_0x217064 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217064) {
            ctx->pc = 0x217070u;
            return;
        }
    }
    ctx->pc = 0x21706Cu;
}
