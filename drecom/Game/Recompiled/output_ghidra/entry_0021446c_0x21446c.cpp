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

// Function: entry_0021446c
// Address: 0x21446c - 0x214490
void entry_0021446c_0x21446c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021446c_0x21446c");
#endif

    switch (ctx->pc) {
        case 0x21447cu: goto label_21447c;
        default: break;
    }

    ctx->pc = 0x21446cu;

    // 0x21446c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x21446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x214470: 0xdc250f58  ld          $a1, 0xF58($at)
    ctx->pc = 0x214470u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3B0F58u));
    // 0x214474: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x214474u;
    SET_GPR_U32(ctx, 31, 0x21447Cu);
    ctx->pc = 0x214478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214474u;
    // 0x214478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x214474u, 0x21447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21447Cu;
label_21447c:
    // 0x21447c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21447Cu;
    {
        const bool branch_taken_0x21447c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21447c) {
            ctx->pc = 0x2144C4u;
            return;
        }
    }
    ctx->pc = 0x214484u;
    // 0x214484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x214484u;
    {
        const bool branch_taken_0x214484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214484) {
            ctx->pc = 0x2144A4u;
            return;
        }
    }
    ctx->pc = 0x21448Cu;
    // 0x21448c: 0x0  nop
    ctx->pc = 0x21448cu;
    // NOP
    ctx->pc = 0x214490u;
}
