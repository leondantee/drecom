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

// Function: entry_001094ac
// Address: 0x1094ac - 0x1094d8
void entry_001094ac_0x1094ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001094ac_0x1094ac");
#endif

    switch (ctx->pc) {
        case 0x1094b4u: goto label_1094b4;
        case 0x1094ccu: goto label_1094cc;
        default: break;
    }

    ctx->pc = 0x1094acu;

    // 0x1094ac: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x1094ACu;
    SET_GPR_U32(ctx, 31, 0x1094B4u);
    ctx->pc = 0x1094B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094ACu;
    // 0x1094b0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x1094ACu, 0x1094B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094B4u;
label_1094b4:
    // 0x1094b4: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1094b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1094b8: 0x14430053  bne         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1094B8u;
    {
        const bool branch_taken_0x1094b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1094BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094B8u;
        // 0x1094bc: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094b8) {
            ctx->pc = 0x109608u;
            return;
        }
    }
    ctx->pc = 0x1094C0u;
    // 0x1094c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1094c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094c4: 0xc0425f6  jal         func_1097D8
    ctx->pc = 0x1094C4u;
    SET_GPR_U32(ctx, 31, 0x1094CCu);
    ctx->pc = 0x1094C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094C4u;
    // 0x1094c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1097D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1097D8u, 0x1094C4u, 0x1094CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094CCu;
label_1094cc:
    // 0x1094cc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1094CCu;
    {
        const bool branch_taken_0x1094cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094CCu;
        // 0x1094d0: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094cc) {
            ctx->pc = 0x109608u;
            return;
        }
    }
    ctx->pc = 0x1094D4u;
    // 0x1094d4: 0x0  nop
    ctx->pc = 0x1094d4u;
    // NOP
    ctx->pc = 0x1094d8u;
}
