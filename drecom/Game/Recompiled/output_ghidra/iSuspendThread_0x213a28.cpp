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

// Function: iSuspendThread
// Address: 0x213a28 - 0x213aa4
void iSuspendThread_0x213a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSuspendThread_0x213a28");
#endif

    switch (ctx->pc) {
        case 0x213a3cu: goto label_213a3c;
        case 0x213a50u: goto label_213a50;
        case 0x213a90u: goto label_213a90;
        default: break;
    }

    ctx->pc = 0x213a28u;

    // 0x213a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x213a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x213a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213a34: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x213a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x213a38: 0xc  syscall     0
    ctx->pc = 0x213a38u;
    ctx->pc = 0x213A3Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_213a3c:
    // 0x213a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x213a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a40: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213A40u;
    {
        const bool branch_taken_0x213a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a40) {
            ctx->pc = 0x213A58u;
            goto label_213a58;
        }
    }
    ctx->pc = 0x213A48u;
    // 0x213a48: 0xc084a68  jal         func_2129A0
    ctx->pc = 0x213A48u;
    SET_GPR_U32(ctx, 31, 0x213A50u);
    ctx->pc = 0x2129A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129A0u, 0x213A48u, 0x213A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A50u;
label_213a50:
    // 0x213a50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x213A50u;
    {
        const bool branch_taken_0x213a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A50u;
        // 0x213a54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a50) {
            ctx->pc = 0x213A98u;
            goto label_213a98;
        }
    }
    ctx->pc = 0x213A58u;
label_213a58:
    // 0x213a58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213A58u;
    {
        const bool branch_taken_0x213a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A58u;
        // 0x213a5c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a58) {
            ctx->pc = 0x213A6Cu;
            goto label_213a6c;
        }
    }
    ctx->pc = 0x213A60u;
    // 0x213a60: 0x8c43aac8  lw          $v1, -0x5538($v0)
    ctx->pc = 0x213a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945480)));
    // 0x213a64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x213A64u;
    {
        const bool branch_taken_0x213a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A64u;
        // 0x213a68: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a64) {
            ctx->pc = 0x213A74u;
            goto label_213a74;
        }
    }
    ctx->pc = 0x213A6Cu;
label_213a6c:
    // 0x213a6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x213A6Cu;
    {
        const bool branch_taken_0x213a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A6Cu;
        // 0x213a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a6c) {
            ctx->pc = 0x213A94u;
            goto label_213a94;
        }
    }
    ctx->pc = 0x213A74u;
label_213a74:
    // 0x213a74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x213a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x213a78: 0x8c449ce8  lw          $a0, -0x6318($v0)
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619CE8u));
    // 0x213a7c: 0x24a39ce0  addiu       $v1, $a1, -0x6320
    ctx->pc = 0x213a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941920));
    // 0x213a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213a84: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x213a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x213a88: 0xc084a94  jal         func_212A50
    ctx->pc = 0x213A88u;
    SET_GPR_U32(ctx, 31, 0x213A90u);
    ctx->pc = 0x213A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A88u;
    // 0x213a8c: 0xaca29ce0  sw          $v0, -0x6320($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x213A90u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213A90u) { return; }
    ctx->pc = 0x213A90u;
label_213a90:
    // 0x213a90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x213a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213a94:
    // 0x213a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_213a98:
    // 0x213a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x213A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A9Cu;
        // 0x213aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213AA4u;
}
