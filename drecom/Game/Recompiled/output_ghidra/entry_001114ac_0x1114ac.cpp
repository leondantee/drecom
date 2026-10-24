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

// Function: entry_001114ac
// Address: 0x1114ac - 0x11150c
void entry_001114ac_0x1114ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001114ac_0x1114ac");
#endif

    switch (ctx->pc) {
        case 0x1114c4u: goto label_1114c4;
        case 0x1114e8u: goto label_1114e8;
        case 0x111500u: goto label_111500;
        default: break;
    }

    ctx->pc = 0x1114acu;

    // 0x1114ac: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x1114acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1114b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1114b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1114b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1114b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1114bc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1114BCu;
    SET_GPR_U32(ctx, 31, 0x1114C4u);
    ctx->pc = 0x1114C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114BCu;
    // 0x1114c0: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1114BCu, 0x1114C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114C4u;
label_1114c4:
    // 0x1114c4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1114C4u;
    {
        const bool branch_taken_0x1114c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114C4u;
        // 0x1114c8: 0x3c09003b  lui         $t1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114c4) {
            ctx->pc = 0x1114A8u;
            return;
        }
    }
    ctx->pc = 0x1114CCu;
    // 0x1114cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1114ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1114d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d4: 0x2529d068  addiu       $t1, $t1, -0x2F98
    ctx->pc = 0x1114d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955112));
    // 0x1114d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1114d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1114dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e0: 0xc044aa0  jal         func_112A80
    ctx->pc = 0x1114E0u;
    SET_GPR_U32(ctx, 31, 0x1114E8u);
    ctx->pc = 0x1114E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E0u;
    // 0x1114e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A80u, 0x1114E0u, 0x1114E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114E8u;
label_1114e8:
    // 0x1114e8: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x1114E8u;
    {
        const bool branch_taken_0x1114e8 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114E8u;
        // 0x1114ec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114e8) {
            ctx->pc = 0x111520u;
            return;
        }
    }
    ctx->pc = 0x1114F0u;
    // 0x1114f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1114f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114f4: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x1114f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1114f8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1114F8u;
    SET_GPR_U32(ctx, 31, 0x111500u);
    ctx->pc = 0x1114FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114F8u;
    // 0x1114fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1114F8u, 0x111500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111500u;
label_111500:
    // 0x111500: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x111500u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x111504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111508: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x111508u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x11150cu;
}
