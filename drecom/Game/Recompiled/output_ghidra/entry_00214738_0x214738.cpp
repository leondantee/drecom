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

// Function: entry_00214738
// Address: 0x214738 - 0x214760
void entry_00214738_0x214738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214738_0x214738");
#endif

    switch (ctx->pc) {
        case 0x214738u: goto label_214738;
        case 0x21473cu: goto label_21473c;
        case 0x214740u: goto label_214740;
        case 0x214744u: goto label_214744;
        case 0x214748u: goto label_214748;
        case 0x21474cu: goto label_21474c;
        case 0x214750u: goto label_214750;
        case 0x214754u: goto label_214754;
        case 0x214758u: goto label_214758;
        case 0x21475cu: goto label_21475c;
        default: break;
    }

    ctx->pc = 0x214738u;

label_214738:
    // 0x214738: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x214738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_21473c:
    // 0x21473c: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x21473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214740:
    // 0x214740: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_214744:
    // 0x214744: 0x40f809  jalr        $v0
label_214748:
    if (ctx->pc == 0x214748u) {
        ctx->pc = 0x214748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214744u;
        // 0x214748: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21474Cu;
        goto label_21474c;
    }
    ctx->pc = 0x214744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21474Cu);
        ctx->pc = 0x214748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214744u;
        // 0x214748: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214744u, 0x21474Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21474Cu;
label_21474c:
    // 0x21474c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x21474cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_214750:
    // 0x214750: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_214754:
    if (ctx->pc == 0x214754u) {
        ctx->pc = 0x214754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214750u;
        // 0x214754: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214758u;
        goto label_214758;
    }
    ctx->pc = 0x214750u;
    {
        const bool branch_taken_0x214750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214750u;
        // 0x214754: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214750) {
            ctx->pc = 0x214738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214738;
        }
    }
    ctx->pc = 0x214758u;
label_214758:
    // 0x214758: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_21475c:
    if (ctx->pc == 0x21475Cu) {
        ctx->pc = 0x21475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214758u;
        // 0x21475c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214760u;
        goto label_fallthrough_0x214758;
    }
    ctx->pc = 0x214758u;
    {
        const bool branch_taken_0x214758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214758u;
        // 0x21475c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214758) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214758:
    ctx->pc = 0x214760u;
}
