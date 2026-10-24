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

// Function: entry_00214aa8
// Address: 0x214aa8 - 0x214ad0
void entry_00214aa8_0x214aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214aa8_0x214aa8");
#endif

    switch (ctx->pc) {
        case 0x214aa8u: goto label_214aa8;
        case 0x214aacu: goto label_214aac;
        case 0x214ab0u: goto label_214ab0;
        case 0x214ab4u: goto label_214ab4;
        case 0x214ab8u: goto label_214ab8;
        case 0x214abcu: goto label_214abc;
        case 0x214ac0u: goto label_214ac0;
        case 0x214ac4u: goto label_214ac4;
        case 0x214ac8u: goto label_214ac8;
        case 0x214accu: goto label_214acc;
        default: break;
    }

    ctx->pc = 0x214aa8u;

label_214aa8:
    // 0x214aa8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x214aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_214aac:
    // 0x214aac: 0x8ea3aad4  lw          $v1, -0x552C($s5)
    ctx->pc = 0x214aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214ab0:
    // 0x214ab0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_214ab4:
    // 0x214ab4: 0x60f809  jalr        $v1
label_214ab8:
    if (ctx->pc == 0x214AB8u) {
        ctx->pc = 0x214AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AB4u;
        // 0x214ab8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214ABCu;
        goto label_214abc;
    }
    ctx->pc = 0x214AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214ABCu);
        ctx->pc = 0x214AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AB4u;
        // 0x214ab8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214AB4u, 0x214ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214ABCu;
label_214abc:
    // 0x214abc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x214abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_214ac0:
    // 0x214ac0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_214ac4:
    if (ctx->pc == 0x214AC4u) {
        ctx->pc = 0x214AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AC0u;
        // 0x214ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AC8u;
        goto label_214ac8;
    }
    ctx->pc = 0x214AC0u;
    {
        const bool branch_taken_0x214ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AC0u;
        // 0x214ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ac0) {
            ctx->pc = 0x214AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214aa8;
        }
    }
    ctx->pc = 0x214AC8u;
label_214ac8:
    // 0x214ac8: 0x10000015  b           . + 4 + (0x15 << 2)
label_214acc:
    if (ctx->pc == 0x214ACCu) {
        ctx->pc = 0x214ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AC8u;
        // 0x214acc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AD0u;
        goto label_fallthrough_0x214ac8;
    }
    ctx->pc = 0x214AC8u;
    {
        const bool branch_taken_0x214ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AC8u;
        // 0x214acc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ac8) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214ac8:
    ctx->pc = 0x214AD0u;
}
