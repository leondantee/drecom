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

// Function: entry_001111cc
// Address: 0x1111cc - 0x11127c
void entry_001111cc_0x1111cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001111cc_0x1111cc");
#endif

    switch (ctx->pc) {
        case 0x1111e4u: goto label_1111e4;
        case 0x1111f8u: goto label_1111f8;
        case 0x111208u: goto label_111208;
        case 0x111210u: goto label_111210;
        case 0x11121cu: goto label_11121c;
        case 0x111230u: goto label_111230;
        case 0x11123cu: goto label_11123c;
        case 0x111250u: goto label_111250;
        default: break;
    }

    ctx->pc = 0x1111ccu;

    // 0x1111cc: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1111ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1111d0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1111d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1111d4: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1111D4u;
    {
        const bool branch_taken_0x1111d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1111D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D4u;
        // 0x1111d8: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d4) {
            ctx->pc = 0x1113FCu;
            return;
        }
    }
    ctx->pc = 0x1111DCu;
    // 0x1111dc: 0xc0451d6  jal         func_114758
    ctx->pc = 0x1111DCu;
    SET_GPR_U32(ctx, 31, 0x1111E4u);
    ctx->pc = 0x114758u;
    {
        ctx->pc = 0x1111E4u;
        ps2_stubs::fabs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1111E4u) { return; }
    ctx->pc = 0x1111E4u;
label_1111e4:
    // 0x1111e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1111e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1111e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1111ec: 0xdc25d280  ld          $a1, -0x2D80($at)
    ctx->pc = 0x1111ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD280u));
    // 0x1111f0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1111F0u;
    SET_GPR_U32(ctx, 31, 0x1111F8u);
    ctx->pc = 0x1111F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111F0u;
    // 0x1111f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1111F0u, 0x1111F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111F8u;
label_1111f8:
    // 0x1111f8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1111f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1111fc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1111fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x111200: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x111200u;
    SET_GPR_U32(ctx, 31, 0x111208u);
    ctx->pc = 0x111204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111200u;
    // 0x111204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x111200u, 0x111208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111208u;
label_111208:
    // 0x111208: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x111208u;
    SET_GPR_U32(ctx, 31, 0x111210u);
    ctx->pc = 0x11120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111208u;
    // 0x11120c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x111208u, 0x111210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111210u;
label_111210:
    // 0x111210: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111214: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x111214u;
    SET_GPR_U32(ctx, 31, 0x11121Cu);
    ctx->pc = 0x111218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111214u;
    // 0x111218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x111214u, 0x11121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11121cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111220: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111224: 0xdc25d288  ld          $a1, -0x2D78($at)
    ctx->pc = 0x111224u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD288u));
    // 0x111228: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111228u;
    SET_GPR_U32(ctx, 31, 0x111230u);
    ctx->pc = 0x11122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111228u;
    // 0x11122c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111228u, 0x111230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111230u;
label_111230:
    // 0x111230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111234: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111234u;
    SET_GPR_U32(ctx, 31, 0x11123Cu);
    ctx->pc = 0x111238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111234u;
    // 0x111238: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111234u, 0x11123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11123Cu;
label_11123c:
    // 0x11123c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11123cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111240: 0xdc25d290  ld          $a1, -0x2D70($at)
    ctx->pc = 0x111240u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD290u));
    // 0x111244: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111248: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111248u;
    SET_GPR_U32(ctx, 31, 0x111250u);
    ctx->pc = 0x11124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111248u;
    // 0x11124c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111248u, 0x111250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111250u;
label_111250:
    // 0x111250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111254: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x111254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x111258: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111258u;
    {
        const bool branch_taken_0x111258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111258u;
        // 0x11125c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111258) {
            ctx->pc = 0x11127Cu;
            return;
        }
    }
    ctx->pc = 0x111260u;
    // 0x111260: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x111260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x111264: 0x2442d170  addiu       $v0, $v0, -0x2E90
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955376));
    // 0x111268: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11126c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111274: 0x1604004c  bne         $s0, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x111274u;
    {
        const bool branch_taken_0x111274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x111278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111274u;
        // 0x111278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111274) {
            ctx->pc = 0x1113A8u;
            return;
        }
    }
    ctx->pc = 0x11127Cu;
}
