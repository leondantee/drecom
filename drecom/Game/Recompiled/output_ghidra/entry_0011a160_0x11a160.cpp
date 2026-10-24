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

// Function: entry_0011a160
// Address: 0x11a160 - 0x11a190
void entry_0011a160_0x11a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a160_0x11a160");
#endif

    switch (ctx->pc) {
        case 0x11a168u: goto label_11a168;
        case 0x11a17cu: goto label_11a17c;
        default: break;
    }

    ctx->pc = 0x11a160u;

label_11a160:
    // 0x11a160: 0x2e0f809  jalr        $s7
label_11a164:
    if (ctx->pc == 0x11A164u) {
        ctx->pc = 0x11A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A160u;
        // 0x11a164: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A168u;
        goto label_11a168;
    }
    ctx->pc = 0x11A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A168u);
        ctx->pc = 0x11A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A160u;
        // 0x11a164: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A160u, 0x11A168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A168u;
label_11a168:
    // 0x11a168: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_11a16c:
    if (ctx->pc == 0x11A16Cu) {
        ctx->pc = 0x11A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A168u;
        // 0x11a16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A170u;
        goto label_11a170;
    }
    ctx->pc = 0x11A168u;
    {
        const bool branch_taken_0x11a168 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a168) {
            ctx->pc = 0x11A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A168u;
            // 0x11a16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A194u;
            return;
        }
    }
    ctx->pc = 0x11A170u;
label_11a170:
    // 0x11a170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a174:
    // 0x11a174: 0x2e0f809  jalr        $s7
label_11a178:
    if (ctx->pc == 0x11A178u) {
        ctx->pc = 0x11A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A174u;
        // 0x11a178: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A17Cu;
        goto label_11a17c;
    }
    ctx->pc = 0x11A174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A17Cu);
        ctx->pc = 0x11A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A174u;
        // 0x11a178: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A174u, 0x11A17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A17Cu;
label_11a17c:
    // 0x11a17c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a180:
    // 0x11a180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a184:
    // 0x11a184: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a188:
    // 0x11a188: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a18c:
    if (ctx->pc == 0x11A18Cu) {
        ctx->pc = 0x11A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A188u;
        // 0x11a18c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A190u;
        goto label_fallthrough_0x11a188;
    }
    ctx->pc = 0x11A188u;
    {
        const bool branch_taken_0x11a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A188u;
        // 0x11a18c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a188) {
            ctx->pc = 0x11A194u;
            return;
        }
    }
label_fallthrough_0x11a188:
    ctx->pc = 0x11A190u;
}
