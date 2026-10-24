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

// Function: entry_001154a0
// Address: 0x1154a0 - 0x115518
void entry_001154a0_0x1154a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001154a0_0x1154a0");
#endif

    switch (ctx->pc) {
        case 0x1154b0u: goto label_1154b0;
        case 0x1154ccu: goto label_1154cc;
        case 0x1154e4u: goto label_1154e4;
        default: break;
    }

    ctx->pc = 0x1154a0u;

    // 0x1154a0: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x1154a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x1154a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1154a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1154a8: 0xc044556  jal         func_111558
    ctx->pc = 0x1154A8u;
    SET_GPR_U32(ctx, 31, 0x1154B0u);
    ctx->pc = 0x1154ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154A8u;
    // 0x1154ac: 0xffb30060  sd          $s3, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111558u, 0x1154A8u, 0x1154B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154B0u;
label_1154b0:
    // 0x1154b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1154b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154b4: 0x8e92d888  lw          $s2, -0x2778($s4)
    ctx->pc = 0x1154b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294957192)));
    // 0x1154b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1154b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1154bc: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1154BCu;
    {
        const bool branch_taken_0x1154bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154BCu;
        // 0x1154c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154bc) {
            ctx->pc = 0x115574u;
            return;
        }
    }
    ctx->pc = 0x1154C4u;
    // 0x1154c4: 0xc04526c  jal         func_1149B0
    ctx->pc = 0x1154C4u;
    SET_GPR_U32(ctx, 31, 0x1154CCu);
    ctx->pc = 0x1154C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154C4u;
    // 0x1154c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149B0u, 0x1154C4u, 0x1154CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154CCu;
label_1154cc:
    // 0x1154cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1154CCu;
    {
        const bool branch_taken_0x1154cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1154D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154CCu;
        // 0x1154d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154cc) {
            ctx->pc = 0x115574u;
            return;
        }
    }
    ctx->pc = 0x1154D4u;
    // 0x1154d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1154d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1154d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154dc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1154DCu;
    SET_GPR_U32(ctx, 31, 0x1154E4u);
    ctx->pc = 0x1154E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154DCu;
    // 0x1154e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1154DCu, 0x1154E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154E4u;
label_1154e4:
    // 0x1154e4: 0x4410023  bgez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1154E4u;
    {
        const bool branch_taken_0x1154e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1154E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154E4u;
        // 0x1154e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154e4) {
            ctx->pc = 0x115574u;
            return;
        }
    }
    ctx->pc = 0x1154ECu;
    // 0x1154ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1154ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1154f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1154f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1154f4: 0x2442d918  addiu       $v0, $v0, -0x26E8
    ctx->pc = 0x1154f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957336));
    // 0x1154f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1154f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1154fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1154fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x115500: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x115500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x115504: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x115504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x115508: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x115508u;
    {
        const bool branch_taken_0x115508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115508u;
        // 0x11550c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115508) {
            ctx->pc = 0x115518u;
            return;
        }
    }
    ctx->pc = 0x115510u;
    // 0x115510: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115510u;
    {
        const bool branch_taken_0x115510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115510u;
        // 0x115514: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115510) {
            ctx->pc = 0x115524u;
            return;
        }
    }
    ctx->pc = 0x115518u;
}
