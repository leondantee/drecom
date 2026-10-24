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

// Function: _sysbitFlush
// Address: 0x108f90 - 0x109028
void _sysbitFlush_0x108f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitFlush_0x108f90");
#endif

    switch (ctx->pc) {
        case 0x108fc0u: goto label_108fc0;
        default: break;
    }

    ctx->pc = 0x108f90u;

    // 0x108f90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x108f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f94: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x108f94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108f98: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x108f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x108f9c: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x108f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x108fa0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x108fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x108fa4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x108fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x108fa8: 0x2c640039  sltiu       $a0, $v1, 0x39
    ctx->pc = 0x108fa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x108fac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108FACu;
    {
        const bool branch_taken_0x108fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FACu;
        // 0x108fb0: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fac) {
            ctx->pc = 0x109014u;
            goto label_109014;
        }
    }
    ctx->pc = 0x108FB4u;
    // 0x108fb4: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x108fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x108fb8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x108fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fbc: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x108fbcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_108fc0:
    // 0x108fc0: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x108fc4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x108fc8: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x108fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x108fcc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x108fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108fd0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x108fd4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x108fd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108fd8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x108fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x108fdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108fe0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x108fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x108fe4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x108fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x108fe8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x108fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x108fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108FECu;
    {
        const bool branch_taken_0x108fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FECu;
        // 0x108ff0: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fec) {
            ctx->pc = 0x108FFCu;
            goto label_108ffc;
        }
    }
    ctx->pc = 0x108FF4u;
    // 0x108ff4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x108ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x108ff8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x108ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_108ffc:
    // 0x108ffc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x108ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x109000: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x109000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x109004: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x109004u;
    {
        const bool branch_taken_0x109004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109004u;
        // 0x109008: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109004) {
            ctx->pc = 0x108FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108fc0;
        }
    }
    ctx->pc = 0x10900Cu;
    // 0x10900c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10900Cu;
    {
        const bool branch_taken_0x10900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10900Cu;
        // 0x109010: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10900c) {
            ctx->pc = 0x109020u;
            goto label_109020;
        }
    }
    ctx->pc = 0x109014u;
label_109014:
    // 0x109014: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x109014u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x109018: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x109018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10901c: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x10901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_109020:
    // 0x109020: 0x3e00008  jr          $ra
    ctx->pc = 0x109020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109020u;
        // 0x109024: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109028u;
}
