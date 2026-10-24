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

// Function: entry_001134a8
// Address: 0x1134a8 - 0x113504
void entry_001134a8_0x1134a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001134a8_0x1134a8");
#endif

    switch (ctx->pc) {
        case 0x1134d4u: goto label_1134d4;
        case 0x1134e4u: goto label_1134e4;
        case 0x1134f0u: goto label_1134f0;
        default: break;
    }

    ctx->pc = 0x1134a8u;

label_1134a8:
    // 0x1134a8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1134a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1134ac: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x1134acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1134b0: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x1134b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1134b4: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x1134b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1134b8: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x1134b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1134bc: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x1134bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1134c0: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x1134c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1134c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1134c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1134c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134cc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1134CCu;
    SET_GPR_U32(ctx, 31, 0x1134D4u);
    ctx->pc = 0x1134D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134CCu;
    // 0x1134d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1134CCu, 0x1134D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134D4u;
label_1134d4:
    // 0x1134d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1134d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1134d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134dc: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1134DCu;
    SET_GPR_U32(ctx, 31, 0x1134E4u);
    ctx->pc = 0x1134E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134DCu;
    // 0x1134e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1134DCu, 0x1134E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134E4u;
label_1134e4:
    // 0x1134e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1134e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134e8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1134E8u;
    SET_GPR_U32(ctx, 31, 0x1134F0u);
    ctx->pc = 0x1134ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134E8u;
    // 0x1134ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1134E8u, 0x1134F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134F0u;
label_1134f0:
    // 0x1134f0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1134f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1134f4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1134f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1134f8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1134F8u;
    {
        const bool branch_taken_0x1134f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134F8u;
        // 0x1134fc: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134f8) {
            ctx->pc = 0x1134A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1134a8;
        }
    }
    ctx->pc = 0x113500u;
    // 0x113500: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x113500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113504u;
}
