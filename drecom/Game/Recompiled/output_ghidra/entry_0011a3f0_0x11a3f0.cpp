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

// Function: entry_0011a3f0
// Address: 0x11a3f0 - 0x11a414
void entry_0011a3f0_0x11a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3f0_0x11a3f0");
#endif

    switch (ctx->pc) {
        case 0x11a408u: goto label_11a408;
        default: break;
    }

    ctx->pc = 0x11a3f0u;

label_11a3f0:
    // 0x11a3f0: 0x232802b  sltu        $s0, $s1, $s2
    ctx->pc = 0x11a3f0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_11a3f4:
    // 0x11a3f4: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_11a3f8:
    if (ctx->pc == 0x11A3F8u) {
        ctx->pc = 0x11A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F4u;
        // 0x11a3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3FCu;
        goto label_11a3fc;
    }
    ctx->pc = 0x11A3F4u;
    {
        const bool branch_taken_0x11a3f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F4u;
        // 0x11a3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3f4) {
            ctx->pc = 0x11A414u;
            return;
        }
    }
    ctx->pc = 0x11A3FCu;
label_11a3fc:
    // 0x11a3fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a400:
    // 0x11a400: 0x2e0f809  jalr        $s7
label_11a404:
    if (ctx->pc == 0x11A404u) {
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A400u;
        // 0x11a404: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A408u;
        goto label_11a408;
    }
    ctx->pc = 0x11A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A408u);
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A400u;
        // 0x11a404: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A400u, 0x11A408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A408u;
label_11a408:
    // 0x11a408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a40c:
    // 0x11a40c: 0x18a0ffca  blez        $a1, . + 4 + (-0x36 << 2)
label_11a410:
    if (ctx->pc == 0x11A410u) {
        ctx->pc = 0x11A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A40Cu;
        // 0x11a410: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A414u;
        goto label_fallthrough_0x11a40c;
    }
    ctx->pc = 0x11A40Cu;
    {
        const bool branch_taken_0x11a40c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A40Cu;
        // 0x11a410: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a40c) {
            ctx->pc = 0x11A338u;
            return;
        }
    }
label_fallthrough_0x11a40c:
    ctx->pc = 0x11A414u;
}
