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

// Function: entry_0011a0e8
// Address: 0x11a0e8 - 0x11a118
void entry_0011a0e8_0x11a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a0e8_0x11a0e8");
#endif

    switch (ctx->pc) {
        case 0x11a0f0u: goto label_11a0f0;
        case 0x11a104u: goto label_11a104;
        default: break;
    }

    ctx->pc = 0x11a0e8u;

label_11a0e8:
    // 0x11a0e8: 0x2e0f809  jalr        $s7
label_11a0ec:
    if (ctx->pc == 0x11A0ECu) {
        ctx->pc = 0x11A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E8u;
        // 0x11a0ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0F0u;
        goto label_11a0f0;
    }
    ctx->pc = 0x11A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0F0u);
        ctx->pc = 0x11A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E8u;
        // 0x11a0ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0E8u, 0x11A0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0F0u;
label_11a0f0:
    // 0x11a0f0: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_11a0f4:
    if (ctx->pc == 0x11A0F4u) {
        ctx->pc = 0x11A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0F0u;
        // 0x11a0f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0F8u;
        goto label_11a0f8;
    }
    ctx->pc = 0x11A0F0u;
    {
        const bool branch_taken_0x11a0f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a0f0) {
            ctx->pc = 0x11A0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A0F0u;
            // 0x11a0f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A11Cu;
            return;
        }
    }
    ctx->pc = 0x11A0F8u;
label_11a0f8:
    // 0x11a0f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a0fc:
    // 0x11a0fc: 0x2e0f809  jalr        $s7
label_11a100:
    if (ctx->pc == 0x11A100u) {
        ctx->pc = 0x11A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0FCu;
        // 0x11a100: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A104u;
        goto label_11a104;
    }
    ctx->pc = 0x11A0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A104u);
        ctx->pc = 0x11A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0FCu;
        // 0x11a100: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0FCu, 0x11A104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A104u;
label_11a104:
    // 0x11a104: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a108:
    // 0x11a108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a10c:
    // 0x11a10c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a10cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a110:
    // 0x11a110: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a114:
    if (ctx->pc == 0x11A114u) {
        ctx->pc = 0x11A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A110u;
        // 0x11a114: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A118u;
        goto label_fallthrough_0x11a110;
    }
    ctx->pc = 0x11A110u;
    {
        const bool branch_taken_0x11a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A110u;
        // 0x11a114: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a110) {
            ctx->pc = 0x11A11Cu;
            return;
        }
    }
label_fallthrough_0x11a110:
    ctx->pc = 0x11A118u;
}
