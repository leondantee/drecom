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

// Function: entry_002160c8
// Address: 0x2160c8 - 0x216104
void entry_002160c8_0x2160c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002160c8_0x2160c8");
#endif

    switch (ctx->pc) {
        case 0x2160fcu: goto label_2160fc;
        default: break;
    }

    ctx->pc = 0x2160c8u;

label_2160c8:
    // 0x2160c8: 0x42000039  di
    ctx->pc = 0x2160c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2160cc: 0x40f  sync.p
    ctx->pc = 0x2160ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2160d0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2160d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2160d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2160d8: 0x0  nop
    ctx->pc = 0x2160d8u;
    // NOP
    // 0x2160dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2160DCu;
    {
        const bool branch_taken_0x2160dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2160dc) {
            ctx->pc = 0x2160C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2160c8;
        }
    }
    ctx->pc = 0x2160E4u;
    // 0x2160e4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2160e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2160e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2160E8u;
    {
        const bool branch_taken_0x2160e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2160e8) {
            ctx->pc = 0x216104u;
            return;
        }
    }
    ctx->pc = 0x2160F0u;
    // 0x2160f0: 0x2484bc00  addiu       $a0, $a0, -0x4400
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    // 0x2160f4: 0xc08558a  jal         func_215628
    ctx->pc = 0x2160F4u;
    SET_GPR_U32(ctx, 31, 0x2160FCu);
    ctx->pc = 0x2160F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160F4u;
    // 0x2160f8: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215628u, 0x2160F4u, 0x2160FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160FCu;
label_2160fc:
    // 0x2160fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2160FCu;
    {
        const bool branch_taken_0x2160fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160FCu;
        // 0x216100: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160fc) {
            ctx->pc = 0x216110u;
            return;
        }
    }
    ctx->pc = 0x216104u;
}
