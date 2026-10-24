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

// Function: entry_0010c76c
// Address: 0x10c76c - 0x10c7cc
void entry_0010c76c_0x10c76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c76c_0x10c76c");
#endif

    switch (ctx->pc) {
        case 0x10c794u: goto label_10c794;
        default: break;
    }

    ctx->pc = 0x10c76cu;

    // 0x10c76c: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c774: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10c774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c778: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c77c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c780: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c784: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x10C784u;
    {
        const bool branch_taken_0x10c784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C784u;
        // 0x10c788: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c784) {
            ctx->pc = 0x10C84Cu;
            return;
        }
    }
    ctx->pc = 0x10C78Cu;
    // 0x10c78c: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C78Cu;
    SET_GPR_U32(ctx, 31, 0x10C794u);
    ctx->pc = 0x10C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C78Cu;
    // 0x10c790: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C78Cu, 0x10C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C794u;
label_10c794:
    // 0x10c794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c798: 0x90830072  lbu         $v1, 0x72($a0)
    ctx->pc = 0x10c798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x10c79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c7a0: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x10C7A0u;
    {
        const bool branch_taken_0x10c7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7A0u;
        // 0x10c7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7a0) {
            ctx->pc = 0x10C850u;
            return;
        }
    }
    ctx->pc = 0x10C7A8u;
    // 0x10c7a8: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x10c7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x10c7ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10c7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c7b0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10C7B0u;
    {
        const bool branch_taken_0x10c7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7B0u;
        // 0x10c7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7b0) {
            ctx->pc = 0x10C850u;
            return;
        }
    }
    ctx->pc = 0x10C7B8u;
    // 0x10c7b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c7bc: 0x16250003  bne         $s1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C7BCu;
    {
        const bool branch_taken_0x10c7bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x10C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7BCu;
        // 0x10c7c0: 0x9082006b  lbu         $v0, 0x6B($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7bc) {
            ctx->pc = 0x10C7CCu;
            return;
        }
    }
    ctx->pc = 0x10C7C4u;
    // 0x10c7c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x10C7C4u;
    {
        const bool branch_taken_0x10c7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7C4u;
        // 0x10c7c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7c4) {
            ctx->pc = 0x10C854u;
            return;
        }
    }
    ctx->pc = 0x10C7CCu;
}
