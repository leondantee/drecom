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

// Function: entry_0011a120
// Address: 0x11a120 - 0x11a160
void entry_0011a120_0x11a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a120_0x11a120");
#endif

    switch (ctx->pc) {
        case 0x11a12cu: goto label_11a12c;
        case 0x11a13cu: goto label_11a13c;
        case 0x11a14cu: goto label_11a14c;
        default: break;
    }

    ctx->pc = 0x11a120u;

label_11a120:
    // 0x11a120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a124:
    // 0x11a124: 0x2e0f809  jalr        $s7
label_11a128:
    if (ctx->pc == 0x11A128u) {
        ctx->pc = 0x11A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A124u;
        // 0x11a128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A12Cu;
        goto label_11a12c;
    }
    ctx->pc = 0x11A124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A12Cu);
        ctx->pc = 0x11A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A124u;
        // 0x11a128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A124u, 0x11A12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A12Cu;
label_11a12c:
    // 0x11a12c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_11a130:
    if (ctx->pc == 0x11A130u) {
        ctx->pc = 0x11A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A12Cu;
        // 0x11a130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A134u;
        goto label_11a134;
    }
    ctx->pc = 0x11A12Cu;
    {
        const bool branch_taken_0x11a12c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A12Cu;
        // 0x11a130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a12c) {
            ctx->pc = 0x11A160u;
            return;
        }
    }
    ctx->pc = 0x11A134u;
label_11a134:
    // 0x11a134: 0x2e0f809  jalr        $s7
label_11a138:
    if (ctx->pc == 0x11A138u) {
        ctx->pc = 0x11A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A134u;
        // 0x11a138: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A13Cu;
        goto label_11a13c;
    }
    ctx->pc = 0x11A134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A13Cu);
        ctx->pc = 0x11A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A134u;
        // 0x11a138: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A134u, 0x11A13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A13Cu;
label_11a13c:
    // 0x11a13c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_11a140:
    if (ctx->pc == 0x11A140u) {
        ctx->pc = 0x11A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A13Cu;
        // 0x11a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A144u;
        goto label_11a144;
    }
    ctx->pc = 0x11A13Cu;
    {
        const bool branch_taken_0x11a13c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A13Cu;
        // 0x11a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a13c) {
            ctx->pc = 0x11A190u;
            return;
        }
    }
    ctx->pc = 0x11A144u;
label_11a144:
    // 0x11a144: 0x2e0f809  jalr        $s7
label_11a148:
    if (ctx->pc == 0x11A148u) {
        ctx->pc = 0x11A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A144u;
        // 0x11a148: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A14Cu;
        goto label_11a14c;
    }
    ctx->pc = 0x11A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A14Cu);
        ctx->pc = 0x11A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A144u;
        // 0x11a148: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A144u, 0x11A14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A14Cu;
label_11a14c:
    // 0x11a14c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a150:
    // 0x11a150: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a154:
    // 0x11a154: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a158:
    // 0x11a158: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a15c:
    if (ctx->pc == 0x11A15Cu) {
        ctx->pc = 0x11A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A158u;
        // 0x11a15c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A160u;
        goto label_fallthrough_0x11a158;
    }
    ctx->pc = 0x11A158u;
    {
        const bool branch_taken_0x11a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A158u;
        // 0x11a15c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a158) {
            ctx->pc = 0x11A194u;
            return;
        }
    }
label_fallthrough_0x11a158:
    ctx->pc = 0x11A160u;
}
