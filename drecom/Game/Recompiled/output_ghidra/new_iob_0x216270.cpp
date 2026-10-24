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

// Function: new_iob
// Address: 0x216270 - 0x2162e0
void new_iob_0x216270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_iob_0x216270");
#endif

    switch (ctx->pc) {
        case 0x216278u: goto label_216278;
        case 0x2162b0u: goto label_2162b0;
        default: break;
    }

    ctx->pc = 0x216270u;

    // 0x216270: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x216274: 0x0  nop
    ctx->pc = 0x216274u;
    // NOP
label_216278:
    // 0x216278: 0x42000039  di
    ctx->pc = 0x216278u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x21627c: 0x40f  sync.p
    ctx->pc = 0x21627cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x216280: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x216284: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x216284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x216288: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x216288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21628c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21628Cu;
    {
        const bool branch_taken_0x21628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21628c) {
            ctx->pc = 0x216278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216278;
        }
    }
    ctx->pc = 0x216294u;
    // 0x216294: 0x2483c950  addiu       $v1, $a0, -0x36B0
    ctx->pc = 0x216294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953296));
    // 0x216298: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x216298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x21629c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x21629cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2162a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2162A0u;
    {
        const bool branch_taken_0x2162a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162A0u;
        // 0x2162a4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162a0) {
            ctx->pc = 0x2162D4u;
            goto label_2162d4;
        }
    }
    ctx->pc = 0x2162A8u;
    // 0x2162a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2162a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2162ac: 0x0  nop
    ctx->pc = 0x2162acu;
    // NOP
label_2162b0:
    // 0x2162b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2162B0u;
    {
        const bool branch_taken_0x2162b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2162b0) {
            ctx->pc = 0x2162B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2162B0u;
            // 0x2162b4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2162C8u;
            goto label_2162c8;
        }
    }
    ctx->pc = 0x2162B8u;
    // 0x2162b8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2162b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2162bc: 0x42000038  ei
    ctx->pc = 0x2162bcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2162c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2162C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2162C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162C0u;
        // 0x2162c4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2162C8u;
label_2162c8:
    // 0x2162c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2162c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2162cc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2162CCu;
    {
        const bool branch_taken_0x2162cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2162cc) {
            ctx->pc = 0x2162D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2162CCu;
            // 0x2162d0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2162B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2162b0;
        }
    }
    ctx->pc = 0x2162D4u;
label_2162d4:
    // 0x2162d4: 0x42000038  ei
    ctx->pc = 0x2162d4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2162d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2162D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2162DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162D8u;
        // 0x2162dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2162E0u;
}
