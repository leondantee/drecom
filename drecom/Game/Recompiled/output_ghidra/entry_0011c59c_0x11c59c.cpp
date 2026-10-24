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

// Function: entry_0011c59c
// Address: 0x11c59c - 0x11c5f0
void entry_0011c59c_0x11c59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c59c_0x11c59c");
#endif

    switch (ctx->pc) {
        case 0x11c5a8u: goto label_11c5a8;
        default: break;
    }

    ctx->pc = 0x11c59cu;

    // 0x11c59c: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x11c5a0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11C5A0u;
    SET_GPR_U32(ctx, 31, 0x11C5A8u);
    ctx->pc = 0x11C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5A0u;
    // 0x11c5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11C5A0u, 0x11C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5A8u;
label_11c5a8:
    // 0x11c5a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C5A8u;
    {
        const bool branch_taken_0x11c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5A8u;
        // 0x11c5ac: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5a8) {
            ctx->pc = 0x11C5F0u;
            return;
        }
    }
    ctx->pc = 0x11C5B0u;
    // 0x11c5b0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c5b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c5b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c5bc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c5c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c5c4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c5c8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x11c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c5d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c5d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c5d8: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x11c5d8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c5dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c5e0: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x11C5E0u;
    {
        const bool branch_taken_0x11c5e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5E0u;
        // 0x11c5e4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5e0) {
            ctx->pc = 0x11C6DCu;
            return;
        }
    }
    ctx->pc = 0x11C5E8u;
    // 0x11c5e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11C5E8u;
    {
        const bool branch_taken_0x11c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5E8u;
        // 0x11c5ec: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5e8) {
            ctx->pc = 0x11C6CCu;
            return;
        }
    }
    ctx->pc = 0x11C5F0u;
}
