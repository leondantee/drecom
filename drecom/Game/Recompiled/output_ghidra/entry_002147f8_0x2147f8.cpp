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

// Function: entry_002147f8
// Address: 0x2147f8 - 0x214820
void entry_002147f8_0x2147f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002147f8_0x2147f8");
#endif

    switch (ctx->pc) {
        case 0x2147f8u: goto label_2147f8;
        case 0x2147fcu: goto label_2147fc;
        case 0x214800u: goto label_214800;
        case 0x214804u: goto label_214804;
        case 0x214808u: goto label_214808;
        case 0x21480cu: goto label_21480c;
        case 0x214810u: goto label_214810;
        case 0x214814u: goto label_214814;
        case 0x214818u: goto label_214818;
        case 0x21481cu: goto label_21481c;
        default: break;
    }

    ctx->pc = 0x2147f8u;

label_2147f8:
    // 0x2147f8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2147fc:
    // 0x2147fc: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x2147fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214800:
    // 0x214800: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x214800u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_214804:
    // 0x214804: 0x40f809  jalr        $v0
label_214808:
    if (ctx->pc == 0x214808u) {
        ctx->pc = 0x214808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214804u;
        // 0x214808: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21480Cu;
        goto label_21480c;
    }
    ctx->pc = 0x214804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21480Cu);
        ctx->pc = 0x214808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214804u;
        // 0x214808: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214804u, 0x21480Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21480Cu;
label_21480c:
    // 0x21480c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_214810:
    // 0x214810: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_214814:
    if (ctx->pc == 0x214814u) {
        ctx->pc = 0x214814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214810u;
        // 0x214814: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214818u;
        goto label_214818;
    }
    ctx->pc = 0x214810u;
    {
        const bool branch_taken_0x214810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214810u;
        // 0x214814: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214810) {
            ctx->pc = 0x2147F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2147f8;
        }
    }
    ctx->pc = 0x214818u;
label_214818:
    // 0x214818: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_21481c:
    if (ctx->pc == 0x21481Cu) {
        ctx->pc = 0x21481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214818u;
        // 0x21481c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214820u;
        goto label_fallthrough_0x214818;
    }
    ctx->pc = 0x214818u;
    {
        const bool branch_taken_0x214818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214818u;
        // 0x21481c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214818) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214818:
    ctx->pc = 0x214820u;
}
