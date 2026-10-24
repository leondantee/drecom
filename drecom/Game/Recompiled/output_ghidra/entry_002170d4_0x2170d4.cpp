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

// Function: entry_002170d4
// Address: 0x2170d4 - 0x2170e0
void entry_002170d4_0x2170d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002170d4_0x2170d4");
#endif

    switch (ctx->pc) {
        case 0x2170dcu: goto label_2170dc;
        default: break;
    }

    ctx->pc = 0x2170d4u;

    // 0x2170d4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x2170D4u;
    SET_GPR_U32(ctx, 31, 0x2170DCu);
    ctx->pc = 0x2170D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170D4u;
    // 0x2170d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x2170DCu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2170DCu) { return; }
    ctx->pc = 0x2170DCu;
label_2170dc:
    // 0x2170dc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2170DCu;
    {
        const bool branch_taken_0x2170dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2170dc) {
            ctx->pc = 0x2170E8u;
            return;
        }
    }
    ctx->pc = 0x2170E4u;
}
