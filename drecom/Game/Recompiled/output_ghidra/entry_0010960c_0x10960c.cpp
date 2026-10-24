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

// Function: entry_0010960c
// Address: 0x10960c - 0x109668
void entry_0010960c_0x10960c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010960c_0x10960c");
#endif

    switch (ctx->pc) {
        case 0x109614u: goto label_109614;
        case 0x109628u: goto label_109628;
        case 0x10963cu: goto label_10963c;
        default: break;
    }

    ctx->pc = 0x10960cu;

    // 0x10960c: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x10960Cu;
    SET_GPR_U32(ctx, 31, 0x109614u);
    ctx->pc = 0x109610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10960Cu;
    // 0x109610: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x10960Cu, 0x109614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109614u;
label_109614:
    // 0x109614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109618: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x109618u;
    {
        const bool branch_taken_0x109618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109618u;
        // 0x10961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109618) {
            ctx->pc = 0x109668u;
            return;
        }
    }
    ctx->pc = 0x109620u;
    // 0x109620: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x109620u;
    SET_GPR_U32(ctx, 31, 0x109628u);
    ctx->pc = 0x109624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109620u;
    // 0x109624: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x109620u, 0x109628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109628u;
label_109628:
    // 0x109628: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x109628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x10962c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10962Cu;
    {
        const bool branch_taken_0x10962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x109630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10962Cu;
        // 0x109630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10962c) {
            ctx->pc = 0x109668u;
            return;
        }
    }
    ctx->pc = 0x109634u;
    // 0x109634: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x109634u;
    SET_GPR_U32(ctx, 31, 0x10963Cu);
    ctx->pc = 0x109638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109634u;
    // 0x109638: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x109634u, 0x10963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10963Cu;
label_10963c:
    // 0x10963c: 0x240301b9  addiu       $v1, $zero, 0x1B9
    ctx->pc = 0x10963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x109640: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x109640u;
    {
        const bool branch_taken_0x109640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x109644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109640u;
        // 0x109644: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109640) {
            ctx->pc = 0x109668u;
            return;
        }
    }
    ctx->pc = 0x109648u;
    // 0x109648: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x109648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10964c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x10964cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x109650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109650u;
    {
        const bool branch_taken_0x109650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109650u;
        // 0x109654: 0x2a3102b  sltu        $v0, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109650) {
            ctx->pc = 0x109670u;
            return;
        }
    }
    ctx->pc = 0x109658u;
    // 0x109658: 0x1680ffb5  bnez        $s4, . + 4 + (-0x4B << 2)
    ctx->pc = 0x109658u;
    {
        const bool branch_taken_0x109658 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109658u;
        // 0x10965c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109658) {
            ctx->pc = 0x109530u;
            return;
        }
    }
    ctx->pc = 0x109660u;
    // 0x109660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109660u;
    {
        const bool branch_taken_0x109660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109660) {
            ctx->pc = 0x109670u;
            return;
        }
    }
    ctx->pc = 0x109668u;
}
