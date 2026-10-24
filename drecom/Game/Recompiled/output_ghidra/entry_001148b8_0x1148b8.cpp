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

// Function: entry_001148b8
// Address: 0x1148b8 - 0x11490c
void entry_001148b8_0x1148b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001148b8_0x1148b8");
#endif

    switch (ctx->pc) {
        case 0x1148dcu: goto label_1148dc;
        case 0x1148e8u: goto label_1148e8;
        default: break;
    }

    ctx->pc = 0x1148b8u;

    // 0x1148b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1148b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1148bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1148bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1148c0: 0x829806  srlv        $s3, $v0, $a0
    ctx->pc = 0x1148c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1148c4: 0x2531824  and         $v1, $s2, $s3
    ctx->pc = 0x1148c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 19));
    // 0x1148c8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1148C8u;
    {
        const bool branch_taken_0x1148c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C8u;
        // 0x1148cc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148c8) {
            ctx->pc = 0x114944u;
            return;
        }
    }
    ctx->pc = 0x1148D0u;
    // 0x1148d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1148d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148d4: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1148D4u;
    SET_GPR_U32(ctx, 31, 0x1148DCu);
    ctx->pc = 0x1148D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148D4u;
    // 0x1148d8: 0xdc45d880  ld          $a1, -0x2780($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1148D4u, 0x1148DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148DCu;
label_1148dc:
    // 0x1148dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1148dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148e0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1148E0u;
    SET_GPR_U32(ctx, 31, 0x1148E8u);
    ctx->pc = 0x1148E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148E0u;
    // 0x1148e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1148E0u, 0x1148E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148E8u;
label_1148e8:
    // 0x1148e8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1148E8u;
    {
        const bool branch_taken_0x1148e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1148ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148E8u;
        // 0x1148ec: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148e8) {
            ctx->pc = 0x114938u;
            return;
        }
    }
    ctx->pc = 0x1148F0u;
    // 0x1148f0: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1148F0u;
    {
        const bool branch_taken_0x1148f0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1148F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F0u;
        // 0x1148f4: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148f0) {
            ctx->pc = 0x11492Cu;
            return;
        }
    }
    ctx->pc = 0x1148F8u;
    // 0x1148f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1148f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1148fc: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1148FCu;
    {
        const bool branch_taken_0x1148fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x114900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148FCu;
        // 0x114900: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148fc) {
            ctx->pc = 0x11490Cu;
            return;
        }
    }
    ctx->pc = 0x114904u;
    // 0x114904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x114904u;
    {
        const bool branch_taken_0x114904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114904u;
        // 0x114908: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114904) {
            ctx->pc = 0x114928u;
            return;
        }
    }
    ctx->pc = 0x11490Cu;
}
