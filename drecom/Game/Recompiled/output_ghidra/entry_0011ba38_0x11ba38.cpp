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

// Function: entry_0011ba38
// Address: 0x11ba38 - 0x11ba48
void entry_0011ba38_0x11ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba38_0x11ba38");
#endif

    switch (ctx->pc) {
        case 0x11ba40u: goto label_11ba40;
        default: break;
    }

    ctx->pc = 0x11ba38u;

    // 0x11ba38: 0xc046b58  jal         func_11AD60
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD60u;
    {
        ctx->pc = 0x11BA40u;
        ps2_stubs::strlen(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11BA40u) { return; }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11BA40u;
    {
        const bool branch_taken_0x11ba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA40u;
        // 0x11ba44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba40) {
            ctx->pc = 0x11BC54u;
            return;
        }
    }
    ctx->pc = 0x11BA48u;
}
