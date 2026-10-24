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

// Function: entry_0011060c
// Address: 0x11060c - 0x110630
void entry_0011060c_0x11060c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011060c_0x11060c");
#endif

    switch (ctx->pc) {
        case 0x110618u: goto label_110618;
        default: break;
    }

    ctx->pc = 0x11060cu;

    // 0x11060c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x11060cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x110610: 0xc085766  jal         func_215D98
    ctx->pc = 0x110610u;
    SET_GPR_U32(ctx, 31, 0x110618u);
    ctx->pc = 0x110614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110610u;
    // 0x110614: 0x26045200  addiu       $a0, $s0, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x110618u;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110618u) { return; }
    ctx->pc = 0x110618u;
label_110618:
    // 0x110618: 0x16200013  bnez        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x110618u;
    {
        const bool branch_taken_0x110618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110618u;
        // 0x11061c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110618) {
            ctx->pc = 0x110668u;
            return;
        }
    }
    ctx->pc = 0x110620u;
    // 0x110620: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x110620u;
    {
        const bool branch_taken_0x110620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x110620) {
            ctx->pc = 0x110668u;
            return;
        }
    }
    ctx->pc = 0x110628u;
    // 0x110628: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x110628u;
    {
        const bool branch_taken_0x110628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110628) {
            ctx->pc = 0x110654u;
            return;
        }
    }
    ctx->pc = 0x110630u;
}
