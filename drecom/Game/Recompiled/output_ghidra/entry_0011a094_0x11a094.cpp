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

// Function: entry_0011a094
// Address: 0x11a094 - 0x11a0e8
void entry_0011a094_0x11a094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a094_0x11a094");
#endif

    switch (ctx->pc) {
        case 0x11a0b4u: goto label_11a0b4;
        case 0x11a0c4u: goto label_11a0c4;
        case 0x11a0d4u: goto label_11a0d4;
        default: break;
    }

    ctx->pc = 0x11a094u;

label_11a094:
    // 0x11a094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_11a098:
    // 0x11a098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a09c:
    // 0x11a09c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11a0a0:
    // 0x11a0a0: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x11a0a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_11a0a4:
    // 0x11a0a4: 0x2a39023  subu        $s2, $s5, $v1
    ctx->pc = 0x11a0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_11a0a8:
    // 0x11a0a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a0ac:
    // 0x11a0ac: 0x2e0f809  jalr        $s7
label_11a0b0:
    if (ctx->pc == 0x11A0B0u) {
        ctx->pc = 0x11A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ACu;
        // 0x11a0b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0B4u;
        goto label_11a0b4;
    }
    ctx->pc = 0x11A0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0B4u);
        ctx->pc = 0x11A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ACu;
        // 0x11a0b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0ACu, 0x11A0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0B4u;
label_11a0b4:
    // 0x11a0b4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_11a0b8:
    if (ctx->pc == 0x11A0B8u) {
        ctx->pc = 0x11A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0B4u;
        // 0x11a0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0BCu;
        goto label_11a0bc;
    }
    ctx->pc = 0x11A0B4u;
    {
        const bool branch_taken_0x11a0b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0B4u;
        // 0x11a0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0b4) {
            ctx->pc = 0x11A0E8u;
            return;
        }
    }
    ctx->pc = 0x11A0BCu;
label_11a0bc:
    // 0x11a0bc: 0x2e0f809  jalr        $s7
label_11a0c0:
    if (ctx->pc == 0x11A0C0u) {
        ctx->pc = 0x11A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0BCu;
        // 0x11a0c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0C4u;
        goto label_11a0c4;
    }
    ctx->pc = 0x11A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0C4u);
        ctx->pc = 0x11A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0BCu;
        // 0x11a0c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0BCu, 0x11A0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0C4u;
label_11a0c4:
    // 0x11a0c4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_11a0c8:
    if (ctx->pc == 0x11A0C8u) {
        ctx->pc = 0x11A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0C4u;
        // 0x11a0c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0CCu;
        goto label_11a0cc;
    }
    ctx->pc = 0x11A0C4u;
    {
        const bool branch_taken_0x11a0c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0C4u;
        // 0x11a0c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0c4) {
            ctx->pc = 0x11A118u;
            return;
        }
    }
    ctx->pc = 0x11A0CCu;
label_11a0cc:
    // 0x11a0cc: 0x2e0f809  jalr        $s7
label_11a0d0:
    if (ctx->pc == 0x11A0D0u) {
        ctx->pc = 0x11A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0CCu;
        // 0x11a0d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0D4u;
        goto label_11a0d4;
    }
    ctx->pc = 0x11A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0D4u);
        ctx->pc = 0x11A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0CCu;
        // 0x11a0d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0CCu, 0x11A0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0D4u;
label_11a0d4:
    // 0x11a0d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a0d8:
    // 0x11a0d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a0dc:
    // 0x11a0dc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a0e0:
    // 0x11a0e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a0e4:
    if (ctx->pc == 0x11A0E4u) {
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E0u;
        // 0x11a0e4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0E8u;
        goto label_fallthrough_0x11a0e0;
    }
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E0u;
        // 0x11a0e4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A11Cu;
            return;
        }
    }
label_fallthrough_0x11a0e0:
    ctx->pc = 0x11A0E8u;
}
