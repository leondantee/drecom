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

// Function: entry_0011a060
// Address: 0x11a060 - 0x11a090
void entry_0011a060_0x11a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a060_0x11a060");
#endif

    switch (ctx->pc) {
        case 0x11a068u: goto label_11a068;
        case 0x11a07cu: goto label_11a07c;
        default: break;
    }

    ctx->pc = 0x11a060u;

label_11a060:
    // 0x11a060: 0x2e0f809  jalr        $s7
label_11a064:
    if (ctx->pc == 0x11A064u) {
        ctx->pc = 0x11A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A060u;
        // 0x11a064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A068u;
        goto label_11a068;
    }
    ctx->pc = 0x11A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A068u);
        ctx->pc = 0x11A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A060u;
        // 0x11a064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A060u, 0x11A068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A068u;
label_11a068:
    // 0x11a068: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_11a06c:
    if (ctx->pc == 0x11A06Cu) {
        ctx->pc = 0x11A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A068u;
        // 0x11a06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A070u;
        goto label_11a070;
    }
    ctx->pc = 0x11A068u;
    {
        const bool branch_taken_0x11a068 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a068) {
            ctx->pc = 0x11A06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A068u;
            // 0x11a06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A094u;
            return;
        }
    }
    ctx->pc = 0x11A070u;
label_11a070:
    // 0x11a070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a074:
    // 0x11a074: 0x2e0f809  jalr        $s7
label_11a078:
    if (ctx->pc == 0x11A078u) {
        ctx->pc = 0x11A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A074u;
        // 0x11a078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A07Cu;
        goto label_11a07c;
    }
    ctx->pc = 0x11A074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A07Cu);
        ctx->pc = 0x11A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A074u;
        // 0x11a078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A074u, 0x11A07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A07Cu;
label_11a07c:
    // 0x11a07c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a080:
    // 0x11a080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a084:
    // 0x11a084: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a088:
    // 0x11a088: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a08c:
    if (ctx->pc == 0x11A08Cu) {
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x243200b  movn        $a0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A090u;
        goto label_fallthrough_0x11a088;
    }
    ctx->pc = 0x11A088u;
    {
        const bool branch_taken_0x11a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x243200b  movn        $a0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a088) {
            ctx->pc = 0x11A094u;
            return;
        }
    }
label_fallthrough_0x11a088:
    ctx->pc = 0x11A090u;
}
