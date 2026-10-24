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

// Function: entry_00113728
// Address: 0x113728 - 0x113798
void entry_00113728_0x113728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113728_0x113728");
#endif

    switch (ctx->pc) {
        case 0x113738u: goto label_113738;
        case 0x113748u: goto label_113748;
        case 0x113754u: goto label_113754;
        case 0x113760u: goto label_113760;
        case 0x11376cu: goto label_11376c;
        case 0x113780u: goto label_113780;
        case 0x11378cu: goto label_11378c;
        default: break;
    }

    ctx->pc = 0x113728u;

    // 0x113728: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x113728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11372c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11372cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x113730: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113730u;
    SET_GPR_U32(ctx, 31, 0x113738u);
    ctx->pc = 0x113734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113730u;
    // 0x113734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113730u, 0x113738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113738u;
label_113738:
    // 0x113738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11373c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113740: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113740u;
    SET_GPR_U32(ctx, 31, 0x113748u);
    ctx->pc = 0x113744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113740u;
    // 0x113744: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113740u, 0x113748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113748u;
label_113748:
    // 0x113748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11374c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11374Cu;
    SET_GPR_U32(ctx, 31, 0x113754u);
    ctx->pc = 0x113750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11374Cu;
    // 0x113750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11374Cu, 0x113754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113754u;
label_113754:
    // 0x113754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113758: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113758u;
    SET_GPR_U32(ctx, 31, 0x113760u);
    ctx->pc = 0x11375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113758u;
    // 0x11375c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113758u, 0x113760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113760u;
label_113760:
    // 0x113760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113764: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113764u;
    SET_GPR_U32(ctx, 31, 0x11376Cu);
    ctx->pc = 0x113768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113764u;
    // 0x113768: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113764u, 0x11376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11376Cu;
label_11376c:
    // 0x11376c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x113770: 0xdc25d7d8  ld          $a1, -0x2828($at)
    ctx->pc = 0x113770u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7D8u));
    // 0x113774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113778: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113778u;
    SET_GPR_U32(ctx, 31, 0x113780u);
    ctx->pc = 0x11377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113778u;
    // 0x11377c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113778u, 0x113780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113780u;
label_113780:
    // 0x113780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113784: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113784u;
    SET_GPR_U32(ctx, 31, 0x11378Cu);
    ctx->pc = 0x113788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113784u;
    // 0x113788: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113784u, 0x11378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11378Cu;
label_11378c:
    // 0x11378c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113790: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113790u;
    SET_GPR_U32(ctx, 31, 0x113798u);
    ctx->pc = 0x113794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113790u;
    // 0x113794: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113790u, 0x113798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113798u;
}
