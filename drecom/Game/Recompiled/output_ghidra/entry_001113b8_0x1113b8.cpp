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

// Function: entry_001113b8
// Address: 0x1113b8 - 0x1113fc
void entry_001113b8_0x1113b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113b8_0x1113b8");
#endif

    switch (ctx->pc) {
        case 0x1113c4u: goto label_1113c4;
        case 0x1113d0u: goto label_1113d0;
        case 0x1113ecu: goto label_1113ec;
        default: break;
    }

    ctx->pc = 0x1113b8u;

    // 0x1113b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1113b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113bc: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113BCu;
    SET_GPR_U32(ctx, 31, 0x1113C4u);
    ctx->pc = 0x1113C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113BCu;
    // 0x1113c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113BCu, 0x1113C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113C4u;
label_1113c4:
    // 0x1113c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113c8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113C8u;
    SET_GPR_U32(ctx, 31, 0x1113D0u);
    ctx->pc = 0x1113CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C8u;
    // 0x1113cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113C8u, 0x1113D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D0u;
label_1113d0:
    // 0x1113d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1113d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113d4: 0x7c10052  bgez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x1113D4u;
    {
        const bool branch_taken_0x1113d4 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D4u;
        // 0x1113d8: 0xfe910008  sd          $s1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113d4) {
            ctx->pc = 0x111520u;
            return;
        }
    }
    ctx->pc = 0x1113DCu;
    // 0x1113dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1113dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1113e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113E4u;
    SET_GPR_U32(ctx, 31, 0x1113ECu);
    ctx->pc = 0x1113E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E4u;
    // 0x1113e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113E4u, 0x1113ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ECu;
label_1113ec:
    // 0x1113ec: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1113ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1113f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1113f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113f4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1113F4u;
    {
        const bool branch_taken_0x1113f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113F4u;
        // 0x1113f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113f4) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1113FCu;
}
