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

// Function: entry_002171c4
// Address: 0x2171c4 - 0x2171d0
void entry_002171c4_0x2171c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002171c4_0x2171c4");
#endif

    switch (ctx->pc) {
        case 0x2171ccu: goto label_2171cc;
        default: break;
    }

    ctx->pc = 0x2171c4u;

    // 0x2171c4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x2171C4u;
    SET_GPR_U32(ctx, 31, 0x2171CCu);
    ctx->pc = 0x2171C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171C4u;
    // 0x2171c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x2171CCu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2171CCu) { return; }
    ctx->pc = 0x2171CCu;
label_2171cc:
    // 0x2171cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2171CCu;
    {
        const bool branch_taken_0x2171cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2171cc) {
            ctx->pc = 0x2171D8u;
            return;
        }
    }
    ctx->pc = 0x2171D4u;
}
