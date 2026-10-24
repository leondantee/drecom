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

// Function: entry_00114abc
// Address: 0x114abc - 0x114ae4
void entry_00114abc_0x114abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114abc_0x114abc");
#endif

    switch (ctx->pc) {
        case 0x114ad8u: goto label_114ad8;
        default: break;
    }

    ctx->pc = 0x114abcu;

    // 0x114abc: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x114abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x114ac0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114AC0u;
    {
        const bool branch_taken_0x114ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AC0u;
        // 0x114ac4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ac0) {
            ctx->pc = 0x114AE4u;
            return;
        }
    }
    ctx->pc = 0x114AC8u;
    // 0x114ac8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114acc: 0xdc50d8b8  ld          $s0, -0x2748($v0)
    ctx->pc = 0x114accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294957240)));
    // 0x114ad0: 0xc045182  jal         func_114608
    ctx->pc = 0x114AD0u;
    SET_GPR_U32(ctx, 31, 0x114AD8u);
    ctx->pc = 0x114AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AD0u;
    // 0x114ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114608u, 0x114AD0u, 0x114AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AD8u;
label_114ad8:
    // 0x114ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114adc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x114ADCu;
    {
        const bool branch_taken_0x114adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ADCu;
        // 0x114ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114adc) {
            ctx->pc = 0x114BA8u;
            return;
        }
    }
    ctx->pc = 0x114AE4u;
}
