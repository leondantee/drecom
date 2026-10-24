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

// Function: entry_002148e8
// Address: 0x2148e8 - 0x214910
void entry_002148e8_0x2148e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002148e8_0x2148e8");
#endif

    switch (ctx->pc) {
        case 0x2148e8u: goto label_2148e8;
        case 0x2148ecu: goto label_2148ec;
        case 0x2148f0u: goto label_2148f0;
        case 0x2148f4u: goto label_2148f4;
        case 0x2148f8u: goto label_2148f8;
        case 0x2148fcu: goto label_2148fc;
        case 0x214900u: goto label_214900;
        case 0x214904u: goto label_214904;
        case 0x214908u: goto label_214908;
        case 0x21490cu: goto label_21490c;
        default: break;
    }

    ctx->pc = 0x2148e8u;

label_2148e8:
    // 0x2148e8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2148e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2148ec:
    // 0x2148ec: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x2148ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_2148f0:
    // 0x2148f0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2148f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_2148f4:
    // 0x2148f4: 0x40f809  jalr        $v0
label_2148f8:
    if (ctx->pc == 0x2148F8u) {
        ctx->pc = 0x2148F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148F4u;
        // 0x2148f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148FCu;
        goto label_2148fc;
    }
    ctx->pc = 0x2148F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2148FCu);
        ctx->pc = 0x2148F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148F4u;
        // 0x2148f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2148F4u, 0x2148FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2148FCu;
label_2148fc:
    // 0x2148fc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_214900:
    // 0x214900: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_214904:
    if (ctx->pc == 0x214904u) {
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214908u;
        goto label_214908;
    }
    ctx->pc = 0x214900u;
    {
        const bool branch_taken_0x214900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214900) {
            ctx->pc = 0x2148E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2148e8;
        }
    }
    ctx->pc = 0x214908u;
label_214908:
    // 0x214908: 0x10000085  b           . + 4 + (0x85 << 2)
label_21490c:
    if (ctx->pc == 0x21490Cu) {
        ctx->pc = 0x21490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214908u;
        // 0x21490c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214910u;
        goto label_fallthrough_0x214908;
    }
    ctx->pc = 0x214908u;
    {
        const bool branch_taken_0x214908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214908u;
        // 0x21490c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214908) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214908:
    ctx->pc = 0x214910u;
}
