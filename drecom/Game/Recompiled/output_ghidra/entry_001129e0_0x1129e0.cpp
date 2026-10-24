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

// Function: entry_001129e0
// Address: 0x1129e0 - 0x112a4c
void entry_001129e0_0x1129e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001129e0_0x1129e0");
#endif

    switch (ctx->pc) {
        case 0x1129f0u: goto label_1129f0;
        case 0x1129fcu: goto label_1129fc;
        case 0x112a10u: goto label_112a10;
        case 0x112a20u: goto label_112a20;
        case 0x112a30u: goto label_112a30;
        case 0x112a3cu: goto label_112a3c;
        case 0x112a48u: goto label_112a48;
        default: break;
    }

    ctx->pc = 0x1129e0u;

    // 0x1129e0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1129e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1129e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1129e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1129e8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1129E8u;
    SET_GPR_U32(ctx, 31, 0x1129F0u);
    ctx->pc = 0x1129ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129E8u;
    // 0x1129ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1129E8u, 0x1129F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129F0u;
label_1129f0:
    // 0x1129f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1129f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129f4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1129F4u;
    SET_GPR_U32(ctx, 31, 0x1129FCu);
    ctx->pc = 0x1129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129F4u;
    // 0x1129f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1129F4u, 0x1129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129FCu;
label_1129fc:
    // 0x1129fc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1129fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x112a00: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x112a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x112a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a08: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A08u;
    SET_GPR_U32(ctx, 31, 0x112A10u);
    ctx->pc = 0x112A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A08u;
    // 0x112a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A08u, 0x112A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A10u;
label_112a10:
    // 0x112a10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a18: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112A18u;
    SET_GPR_U32(ctx, 31, 0x112A20u);
    ctx->pc = 0x112A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A18u;
    // 0x112a1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112A18u, 0x112A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A20u;
label_112a20:
    // 0x112a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a28: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112A28u;
    SET_GPR_U32(ctx, 31, 0x112A30u);
    ctx->pc = 0x112A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A28u;
    // 0x112a2c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112A28u, 0x112A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A30u;
label_112a30:
    // 0x112a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a34: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A34u;
    SET_GPR_U32(ctx, 31, 0x112A3Cu);
    ctx->pc = 0x112A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A34u;
    // 0x112a38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A34u, 0x112A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A3Cu;
label_112a3c:
    // 0x112a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a40: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A40u;
    SET_GPR_U32(ctx, 31, 0x112A48u);
    ctx->pc = 0x112A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A40u;
    // 0x112a44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A40u, 0x112A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A48u;
label_112a48:
    // 0x112a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112a4cu;
}
