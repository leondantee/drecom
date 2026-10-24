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

// Function: entry_00113440
// Address: 0x113440 - 0x11349c
void entry_00113440_0x113440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113440_0x113440");
#endif

    switch (ctx->pc) {
        case 0x11346cu: goto label_11346c;
        case 0x11347cu: goto label_11347c;
        case 0x113488u: goto label_113488;
        default: break;
    }

    ctx->pc = 0x113440u;

label_113440:
    // 0x113440: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113444: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x113448: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x113448u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11344c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x113450: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x113450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x113454: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x113454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113458: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x113458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11345c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11345cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x113460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113464: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113464u;
    SET_GPR_U32(ctx, 31, 0x11346Cu);
    ctx->pc = 0x113468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113464u;
    // 0x113468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113464u, 0x11346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11346Cu;
label_11346c:
    // 0x11346c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11346cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113474: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113474u;
    SET_GPR_U32(ctx, 31, 0x11347Cu);
    ctx->pc = 0x113478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113474u;
    // 0x113478: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113474u, 0x11347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11347Cu;
label_11347c:
    // 0x11347c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113480: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113480u;
    SET_GPR_U32(ctx, 31, 0x113488u);
    ctx->pc = 0x113484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113480u;
    // 0x113484: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113480u, 0x113488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113488u;
label_113488:
    // 0x113488: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x113488u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11348c: 0x1e80ffec  bgtz        $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11348Cu;
    {
        const bool branch_taken_0x11348c = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x113490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11348Cu;
        // 0x113490: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11348c) {
            ctx->pc = 0x113440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113440;
        }
    }
    ctx->pc = 0x113494u;
    // 0x113494: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x113494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113498: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x113498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x11349cu;
}
