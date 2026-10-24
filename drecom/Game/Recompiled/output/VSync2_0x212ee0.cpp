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

// Function: VSync2
// Address: 0x212ee0 - 0x212f40
void VSync2_0x212ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync2_0x212ee0");
#endif

    switch (ctx->pc) {
        case 0x212ef4u: goto label_212ef4;
        case 0x212f08u: goto label_212f08;
        default: break;
    }

    ctx->pc = 0x212ee0u;

    // 0x212ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x212ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212eec: 0xc084b64  jal         func_212D90
    ctx->pc = 0x212EECu;
    SET_GPR_U32(ctx, 31, 0x212EF4u);
    ctx->pc = 0x212EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EECu;
    // 0x212ef0: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212D90u;
    {
        ctx->pc = 0x212EF4u;
        ps2_syscalls::SetVSyncFlag(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x212EF4u) { return; }
    ctx->pc = 0x212EF4u;
label_212ef4:
    // 0x212ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x212ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x212ef8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x212ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x212efc: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x212efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x212f00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212f04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x212f04u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 2)); // MMIO: 0x1000f000
label_212f08:
    // 0x212f08: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x212f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x212f0c: 0x8c42f000  lw          $v0, -0x1000($v0)
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u)); // MMIO: 0x1000f000
    // 0x212f10: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212f14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212F14u;
    {
        const bool branch_taken_0x212f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F14u;
        // 0x212f18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f14) {
            ctx->pc = 0x212F28u;
            goto label_212f28;
        }
    }
    ctx->pc = 0x212F1Cu;
    // 0x212f1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f20: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212F20u;
    {
        const bool branch_taken_0x212f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F20u;
        // 0x212f24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f20) {
            ctx->pc = 0x212F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f08;
        }
    }
    ctx->pc = 0x212F28u;
label_212f28:
    // 0x212f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212f2c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x212f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x212f30: 0xac22f000  sw          $v0, -0x1000($at)
    ctx->pc = 0x212f30u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 2)); // MMIO: 0x1000f000
    // 0x212f34: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x212f34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212f38: 0x3e00008  jr          $ra
    ctx->pc = 0x212F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F38u;
        // 0x212f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212F40u;
}
