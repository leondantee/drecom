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

// Function: entry_0011d408
// Address: 0x11d408 - 0x11d44c
void entry_0011d408_0x11d408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d408_0x11d408");
#endif

    switch (ctx->pc) {
        case 0x11d410u: goto label_11d410;
        case 0x11d424u: goto label_11d424;
        case 0x11d434u: goto label_11d434;
        case 0x11d43cu: goto label_11d43c;
        default: break;
    }

    ctx->pc = 0x11d408u;

    // 0x11d408: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11D408u;
    SET_GPR_U32(ctx, 31, 0x11D410u);
    ctx->pc = 0x11D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D408u;
    // 0x11d40c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11D408u, 0x11D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D410u;
label_11d410:
    // 0x11d410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11d410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d41c: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11D41Cu;
    SET_GPR_U32(ctx, 31, 0x11D424u);
    ctx->pc = 0x11D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D41Cu;
    // 0x11d420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11D41Cu, 0x11D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D424u;
label_11d424:
    // 0x11d424: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D424u;
    {
        const bool branch_taken_0x11d424 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D424u;
        // 0x11d428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d424) {
            ctx->pc = 0x11D44Cu;
            return;
        }
    }
    ctx->pc = 0x11D42Cu;
    // 0x11d42c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11D42Cu;
    SET_GPR_U32(ctx, 31, 0x11D434u);
    ctx->pc = 0x11D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D42Cu;
    // 0x11d430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11D42Cu, 0x11D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D434u;
label_11d434:
    // 0x11d434: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x11D434u;
    SET_GPR_U32(ctx, 31, 0x11D43Cu);
    ctx->pc = 0x11D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D434u;
    // 0x11d438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x11D434u, 0x11D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D43Cu;
label_11d43c:
    // 0x11d43c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d440: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11D444u;
    {
        const bool branch_taken_0x11d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D444u;
        // 0x11d448: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d444) {
            ctx->pc = 0x11D460u;
            return;
        }
    }
    ctx->pc = 0x11D44Cu;
}
