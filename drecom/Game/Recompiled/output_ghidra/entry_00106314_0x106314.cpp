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

// Function: entry_00106314
// Address: 0x106314 - 0x106338
void entry_00106314_0x106314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106314_0x106314");
#endif

    switch (ctx->pc) {
        case 0x106330u: goto label_106330;
        default: break;
    }

    ctx->pc = 0x106314u;

    // 0x106314: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106318: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x106318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10631c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106320: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x106324: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x106324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106328: 0xc040f44  jal         func_103D10
    ctx->pc = 0x106328u;
    SET_GPR_U32(ctx, 31, 0x106330u);
    ctx->pc = 0x10632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106328u;
    // 0x10632c: 0x8fa7004c  lw          $a3, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D10u, 0x106328u, 0x106330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106330u;
label_106330:
    // 0x106330: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106330u;
    {
        const bool branch_taken_0x106330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106330u;
        // 0x106334: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106330) {
            ctx->pc = 0x106344u;
            return;
        }
    }
    ctx->pc = 0x106338u;
}
