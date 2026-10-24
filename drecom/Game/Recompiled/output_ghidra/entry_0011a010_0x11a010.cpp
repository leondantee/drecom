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

// Function: entry_0011a010
// Address: 0x11a010 - 0x11a060
void entry_0011a010_0x11a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a010_0x11a010");
#endif

    switch (ctx->pc) {
        case 0x11a02cu: goto label_11a02c;
        case 0x11a03cu: goto label_11a03c;
        case 0x11a04cu: goto label_11a04c;
        default: break;
    }

    ctx->pc = 0x11a010u;

label_11a010:
    // 0x11a010: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11a014:
    // 0x11a014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a018:
    // 0x11a018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a01c:
    // 0x11a01c: 0x203a023  subu        $s4, $s0, $v1
    ctx->pc = 0x11a01cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_11a020:
    // 0x11a020: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x11a020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_11a024:
    // 0x11a024: 0x2e0f809  jalr        $s7
label_11a028:
    if (ctx->pc == 0x11A028u) {
        ctx->pc = 0x11A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A024u;
        // 0x11a028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A02Cu;
        goto label_11a02c;
    }
    ctx->pc = 0x11A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A02Cu);
        ctx->pc = 0x11A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A024u;
        // 0x11a028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A024u, 0x11A02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A02Cu;
label_11a02c:
    // 0x11a02c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_11a030:
    if (ctx->pc == 0x11A030u) {
        ctx->pc = 0x11A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A02Cu;
        // 0x11a030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A034u;
        goto label_11a034;
    }
    ctx->pc = 0x11A02Cu;
    {
        const bool branch_taken_0x11a02c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A02Cu;
        // 0x11a030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a02c) {
            ctx->pc = 0x11A060u;
            return;
        }
    }
    ctx->pc = 0x11A034u;
label_11a034:
    // 0x11a034: 0x2e0f809  jalr        $s7
label_11a038:
    if (ctx->pc == 0x11A038u) {
        ctx->pc = 0x11A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A034u;
        // 0x11a038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A03Cu;
        goto label_11a03c;
    }
    ctx->pc = 0x11A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A03Cu);
        ctx->pc = 0x11A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A034u;
        // 0x11a038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A034u, 0x11A03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A03Cu;
label_11a03c:
    // 0x11a03c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_11a040:
    if (ctx->pc == 0x11A040u) {
        ctx->pc = 0x11A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A03Cu;
        // 0x11a040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A044u;
        goto label_11a044;
    }
    ctx->pc = 0x11A03Cu;
    {
        const bool branch_taken_0x11a03c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A03Cu;
        // 0x11a040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a03c) {
            ctx->pc = 0x11A090u;
            return;
        }
    }
    ctx->pc = 0x11A044u;
label_11a044:
    // 0x11a044: 0x2e0f809  jalr        $s7
label_11a048:
    if (ctx->pc == 0x11A048u) {
        ctx->pc = 0x11A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A044u;
        // 0x11a048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A04Cu;
        goto label_11a04c;
    }
    ctx->pc = 0x11A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A04Cu);
        ctx->pc = 0x11A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A044u;
        // 0x11a048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A044u, 0x11A04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A04Cu;
label_11a04c:
    // 0x11a04c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a050:
    // 0x11a050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a054:
    // 0x11a054: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a058:
    // 0x11a058: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a05c:
    if (ctx->pc == 0x11A05Cu) {
        ctx->pc = 0x11A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A058u;
        // 0x11a05c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A060u;
        goto label_fallthrough_0x11a058;
    }
    ctx->pc = 0x11A058u;
    {
        const bool branch_taken_0x11a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A058u;
        // 0x11a05c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a058) {
            ctx->pc = 0x11A094u;
            return;
        }
    }
label_fallthrough_0x11a058:
    ctx->pc = 0x11A060u;
}
