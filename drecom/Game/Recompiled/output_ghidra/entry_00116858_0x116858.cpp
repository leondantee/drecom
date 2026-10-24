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

// Function: entry_00116858
// Address: 0x116858 - 0x1168a4
void entry_00116858_0x116858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116858_0x116858");
#endif

    switch (ctx->pc) {
        case 0x116880u: goto label_116880;
        case 0x116894u: goto label_116894;
        default: break;
    }

    ctx->pc = 0x116858u;

    // 0x116858: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x116858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11685c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11685Cu;
    {
        const bool branch_taken_0x11685c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x116860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11685Cu;
        // 0x116860: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11685c) {
            ctx->pc = 0x1168D8u;
            return;
        }
    }
    ctx->pc = 0x116864u;
    // 0x116864: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116864u;
    {
        const bool branch_taken_0x116864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116864u;
        // 0x116868: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116864) {
            ctx->pc = 0x1168C8u;
            return;
        }
    }
    ctx->pc = 0x11686Cu;
    // 0x11686c: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11686Cu;
    {
        const bool branch_taken_0x11686c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x116870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11686Cu;
        // 0x116870: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11686c) {
            ctx->pc = 0x1168A4u;
            return;
        }
    }
    ctx->pc = 0x116874u;
    // 0x116874: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116878: 0xc046502  jal         func_119408
    ctx->pc = 0x116878u;
    SET_GPR_U32(ctx, 31, 0x116880u);
    ctx->pc = 0x11687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116878u;
    // 0x11687c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x116878u, 0x116880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116880u;
label_116880:
    // 0x116880: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116884: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116888: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11688c: 0xc046476  jal         func_1191D8
    ctx->pc = 0x11688Cu;
    SET_GPR_U32(ctx, 31, 0x116894u);
    ctx->pc = 0x116890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11688Cu;
    // 0x116890: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191D8u, 0x11688Cu, 0x116894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116894u;
label_116894:
    // 0x116894: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116898: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11689c: 0xc046372  jal         func_118DC8
    ctx->pc = 0x11689Cu;
    SET_GPR_U32(ctx, 31, 0x1168A4u);
    ctx->pc = 0x1168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11689Cu;
    // 0x1168a0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x11689Cu, 0x1168A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168A4u;
}
